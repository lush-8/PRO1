#include <iostream>
using namespace std;

int main () {

    int n , cont_lines = 0 ;
    bool found = false ;

    while (cin >> n and not found) {
        string paraula_actual , paraula_anterior ;
        bool ordenat = true ;

        for (int i = 1 ; i <= n ; ++i) {
            cin >> paraula_actual ;
            if (i == 1) paraula_anterior = paraula_actual ;

            if (paraula_anterior > paraula_actual) ordenat = false ;
            paraula_anterior = paraula_actual ;
        }
        if (ordenat) found = true ;
        ++cont_lines ;
    }
    if (found) cout << "La primera linia ordenada creixentment es la " << cont_lines << "." << endl ;
    else cout << "No hi ha cap linia ordenada creixentment." << endl ;
}