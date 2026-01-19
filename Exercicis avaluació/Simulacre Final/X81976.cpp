#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

int main () {

    int n , m ;

    while (cin >> n >> m) {
        Matriu v(n, vector<int>(m)) ;
        Matriu fil2d(10, vector<int>(n, 0)) ;
        Matriu col2d(10, vector<int>(m, 0)) ;

        for (int i = 0 ; i < n ; ++i) {
            for (int j = 0 ; j < m ; ++j) {
                char c ;
                cin >> c ;
                v[i][j] = c - '0' ;
                ++fil2d[v[i][j]][i] ;
                ++col2d[v[i][j]][j] ;
            }
        }
        for (int i = 0 ; i < n ; ++i) {
            for (int j = 0 ; j < m ; ++j) {
                int r = fil2d[v[i][j]][i] + col2d[v[i][j]][j] ;
                r %= 10 ;
                cout << r ;
            }
            cout << endl ;
        }
        cout << endl ;
    }
}