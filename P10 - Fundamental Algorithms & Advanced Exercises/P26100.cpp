#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> row;
typedef vector<row> board;

int adjacent_bacterias(const board& a, const int x, const int y) {

    int rows , cols , cont = 0 ;
    rows = a.size() ;
    cols = a[0].size() ;

    for (int i = -1 ; i < 2 ; ++i) {
        for (int j = -1 ; j < 2 ; ++j) {
            int xx , yy ;
            xx = x + i ;
            yy = y + j ;

            if (xx >= 0 and yy >= 0 and xx < cols and yy < rows) {
                if (a[yy][xx] == 'B' and (i != 0 or j != 0)) ++cont ;
            }
        }
    }
    return cont ;
}

void evaluate_cell(const board& a, const int x, const int y, board& b) {

    int adj = adjacent_bacterias(a, x, y) ;

    if ((a[y][x] == '.' and adj == 3) or (a[y][x] == 'B' and (adj == 2 or adj ==3))) {
        b[y][x] = 'B' ;
    }
    else b[y][x] = '.' ;
}

int main () {

    bool first = true ;
    int rows , cols ;

    while (cin >> rows >> cols and rows != 0 and cols != 0) {
        board a(rows, row(cols)) ;

        for (int i = 0 ; i < rows ; ++i) {
            for (int j = 0 ; j < cols ; ++j) {
                cin >> a[i][j] ;
            }
        }
        if (not first) cout << endl ;
        else first = false ;

        board b(rows, row(cols)) ;

        for (int i = 0 ; i < rows ; ++i) {
            for (int j = 0 ; j < cols ; ++j) {
                evaluate_cell(a, j, i, b) ;
                cout << b[i][j] ;
            }
            cout << endl ;
        }
    }
}