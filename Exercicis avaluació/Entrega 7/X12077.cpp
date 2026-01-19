#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Fila_char;
typedef vector<Fila_char> Matriu_char;
typedef vector<int> Fila_int;
typedef vector<Fila_int> Matriu_int;

Matriu_char llegir_matriu(int n, int m) { // Llegim una matriu de chars i retornem la matriu

    Matriu_char matriu(n, Fila_char(m)) ;

    for (int i = 0 ; i < n ; ++i) {
        for (int j = 0 ; j < m ; ++j) cin >> matriu[i][j] ;
    }
    return matriu ;
}

int pos_valid(const Matriu_int& matriu, int i, int j) { // Per evitar l'accés a posicions inexistents

    int x = 0 ;

    if (i >= 0 and j >= 0) x = matriu[i][j] ;
    return x ;
}

int Number_Happy_Subsequences(const Matriu_char& matriu, int n, int m) {

    int cont_happy = 0 ;

    Matriu_int punts(n, Fila_int(m)) ;
    Matriu_int guions(n, Fila_int(m)) ;
    Matriu_int parentesis(n, Fila_int(m)) ;

    for (int i = 0 ; i < n ; ++i) {
        for (int j = 0 ; j < m ; ++j) {

            // Calculem ':'

            punts[i][j] = pos_valid(punts, i-1, j) + pos_valid(punts, i, j-1) - pos_valid(punts, i-1, j-1) ;
            if (matriu[i][j] == ':') ++punts[i][j] ;

            // Calculem '-'

            guions[i][j] = pos_valid(guions, i-1, j) + pos_valid(guions, i, j-1) - pos_valid(guions, i-1, j-1) ;
            if (matriu[i][j] == '-') guions[i][j] += pos_valid(punts, i-1, j-1) ;

            // Calculem ')'
            
            parentesis[i][j] = pos_valid(parentesis, i-1, j) + pos_valid(parentesis, i, j-1) - pos_valid(parentesis, i-1, j-1) ;
            if (matriu[i][j] == ')') parentesis[i][j] += pos_valid(guions, i-1, j-1) ;
        }
    }
    cont_happy = pos_valid(parentesis, n-1, m-1) ;
    return cont_happy ;
}

int main() {

    int n , m ;

    while (cin >> n >> m) {
        Matriu_char matriu(n, Fila_char(m)) ;
        matriu = llegir_matriu(n, m) ;
        cout << Number_Happy_Subsequences(matriu, n, m) << endl ;
    }
}