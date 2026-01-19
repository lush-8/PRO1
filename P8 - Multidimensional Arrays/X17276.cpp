#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row ;
typedef vector<Row> Matrix ;

void read_matrix(Matrix& m) {

    int f = m.size() ;
    int c = m[0].size() ;

    for (int i = 0 ; i < f ; ++i) {
        for (int j = 0 ; j < c ; ++j) {
            cin >> m[i][j] ;
        }
    }
}

bool increasing_d(const Matrix& m, int a, int b) {

    int f = m.size() ;
    int c = m[0].size() ;

    int i = a - 1 , j = b + 1 , comp = m[a][b] ;

    while (i >= 0 and j < c) {
        if (m[i][j] > comp) comp = m[i][j] ;
        else return false ;
        --i ;
        ++j ;
    }
    i = a - 1 , j = b - 1 , comp = m[a][b] ;

    while (i >= 0 and j >= 0) {
        if (m[i][j] > comp) comp = m[i][j] ;
        else return false ;
        --i ;
        --j ;
    }
    i = a + 1 , j = b - 1 , comp = m[a][b] ;

    while (i < f and j >= 0) {
        if (m[i][j] > comp) comp = m[i][j] ;
        else return false ;
        ++i ;
        --j ;
    }
    i = a + 1 , j = b + 1 , comp = m[a][b] ;

    while (i < f and j < c) {
        if (m[i][j] > comp) comp = m[i][j] ;
        else return false ;
        ++i ;
        ++j ;
    }
    return true ;
}

int main () {

    int f , c ;

    while (cin >> f >> c) {
        Matrix m(f, Row(c)) ;
        read_matrix(m) ;
        cin >> f >> c ;

        if (increasing_d(m, f, c)) cout << "si" << endl ;
        else cout << "no" << endl ;
    }
}