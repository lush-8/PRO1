#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

Matriu producte(const Matriu& a, const Matriu& b) {

    int p = a.size() ;
    int q = a[0].size() ;
    int r = b[0].size() ;
    Matriu resultat(p, Fila(r, 0)) ;

    for (int i = 0 ; i < p ; ++i) {
        for (int j = 0 ; j < r ; ++j) {
            for (int k = 0 ; k < q ; ++k) {
                resultat[i][j] = resultat[i][j] + a[i][k]*b[k][j] ;
            }
        }
    }
    return resultat ;
}

int main () {}