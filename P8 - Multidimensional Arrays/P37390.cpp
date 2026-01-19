#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

Matriu producte(const Matriu& a, const Matriu& b) {

    int n = a.size() ;
    Matriu resultat(n, Fila(n, 0)) ;

    for (int i = 0 ; i < n ; ++i) {
        for (int j = 0 ; j < n ; ++j) {
            for (int k = 0 ; k < n ; ++k) {
                resultat[i][j] = resultat[i][j] + a[i][k]*b[k][j] ;
            }
        }
    }
    return resultat ;
}

int main () {}