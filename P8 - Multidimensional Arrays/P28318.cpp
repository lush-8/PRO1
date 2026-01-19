#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

int main () {

    int files , columnes ;
    string paraula ;
    cin >> files >> columnes ;
    Matriu matriu(files, Fila(columnes));

    for (int i = 0 ; i < files ; ++i) {
        for (int j = 0 ; j < columnes ; ++j) cin >> matriu [i] [j] ;
    }
    while (cin >> paraula) {
        if (paraula == "fila") {
            int nfila ;
            cin >> nfila ;
            cout << "fila " << nfila << ":" ;

            for (int j = 0 ; j < columnes ; ++j) cout << " " << matriu [nfila-1][j] ;
        }
        else if (paraula == "columna") {
            int ncolumna ;
            cin >> ncolumna ;
            cout << "columna " << ncolumna << ":" ;

            for (int i = 0 ; i < files ; ++i) cout << " " << matriu [i][ncolumna-1] ;
        }
        else if (paraula == "element") {
            int n , m ;
            cin >> n >> m ;
            cout << "element " << n << " " << m << ": " << matriu[n-1][m-1] ;
        }
        cout << endl ;
    }
}