#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector<string> Llista;
typedef vector<vector<char>> Matriu;

Llista llegir_paraules(int x) {

    Llista paraules(x) ;

    for (int i = 0 ; i < paraules.size() ; ++i) cin >> paraules[i] ;
    return paraules ;
}

Matriu llegir_sopa(int n, int m) {

    Matriu sopa(n, vector<char>(m)) ;

    for (int i = 0 ; i < sopa.size() ; ++i) {
        for (int j = 0 ; j < sopa[0].size() ; ++j) {
            cin >> sopa[i][j] ;
        }
    }
    return sopa ;
}

void imprimir_sopa(const Matriu& sopa) {

    int f = sopa.size() ;
    int c = sopa[0].size() ;

    for (int i = 0 ; i < f ; ++i) {
        bool first = false ;

        for (int j = 0 ; j < c ; ++j) {
            if (first) cout << " " ;
            else first = true ;
            cout << sopa[i][j] ;
        }
        cout << endl ;
    }
}

void mayusculas(Matriu& sopa, int l, int i, int j, int inici_i, int inici_j) {

    int k = 0 ;

    while (k < l) {
        if ('a' <= sopa[i][j] and sopa[i][j] <= 'z') {
            sopa[i][j] = char(sopa[i][j] - 'a' + 'A') ;
        }
        i = i + inici_i ;
        j = j + inici_j ;
        ++k ;
    }
}

bool found(const Matriu& aux, string paraula, int i, int j, int inici_i, int inici_j) {

    int k = 0 ;

    while (i < aux.size() and j < aux[0].size() and k < paraula.size()) {
        if (paraula[k] != aux[i][j]) return false ;
        i = i + inici_i ;
        j = j + inici_j ;
        ++k ;
    }
    return k == paraula.size() ;
}

void sopa_lletres(const Matriu& aux, Matriu& sopa, Llista paraules) {

    for (int k = 0 ; k < paraules.size() ; ++k) {
        int i = 0 ;
        string paraula = paraules[k] ;

        while (i < sopa.size()) {
            int j = 0 ;

            while (j < sopa[0].size()) {
                if (paraula[0] == aux[i][j]) {
                    if (found(aux, paraula, i, j, 0, 1)) mayusculas(sopa, paraula.size(), i, j, 0, 1) ;
                    if (found(aux, paraula, i, j, 1, 0)) mayusculas(sopa, paraula.size(), i, j, 1, 0) ;
                    if (found(aux, paraula, i, j, 1, 1)) mayusculas(sopa, paraula.size(), i, j, 1, 1) ;
                }
                ++j ;
            }
            ++i ;
        }
    }
}

int main () {

    int x , n , m ;
    bool first = true ;

    while (cin >> x >> n >> m) {
        Llista paraules = llegir_paraules(x) ;
        Matriu sopa = llegir_sopa(n, m) ;
        Matriu aux = sopa ;
        sopa_lletres(aux, sopa, paraules) ;

        if (not first) cout << endl ;
        else first = false ;
        imprimir_sopa(sopa) ;
    }
}