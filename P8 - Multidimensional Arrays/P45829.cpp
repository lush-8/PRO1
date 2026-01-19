#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila ;
typedef vector<Fila> Matriu ;

void erase(Matriu& matriu, int x, int y, int& cont) {

    int n = matriu.size() ;
    int m = matriu[0].size() ;
    int i = x ;
    bool contains = false ;

    while (i < n and matriu[i][y] != 0) {
        int j = y ;

        while (j < m and matriu[i][j] != 0) {
            matriu[i][j] = 0 ;
            contains = true ;
            ++j ;
        }
        ++i ;
    }
    if (contains) ++cont ;
}

int main () {

    int n , m ;

    while (cin >> n >> m) {
        Matriu matriu(n, Fila(m)) ;

        for (int i = 0 ; i < n ; ++i) {
            for (int j = 0 ; j < m ; ++j) {
                cin >> matriu[i][j] ;
            }
        }
        int cont = 0 ;

        for (int i = 0 ; i < n ; ++i) {
            for (int j = 0 ; j < m ; ++j) {
                if (matriu[i][j] != 0) erase(matriu, i, j, cont) ;
            }
        }
        cout << cont << endl ;
    }
}