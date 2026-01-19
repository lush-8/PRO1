#include <iostream>
using namespace std;

void info_sequencia(int& suma, int& ultim) {

    int x = 1 ;
    ultim = 0 ;

    while (x != 0) {
        cin >> x ;
        suma = suma + x ;

        if (x != 0) ultim = x ;
    }
}

int main () {

    int x0 = 0 , x = 1 , suma0 = 0 , cont = 1 ;

    while (x != 0) {
        cin >> x ;
        suma0 = suma0 + x ;
        if (x != 0) x0 = x ;
    }
    x = 1 ;
    int suma1 = 1 , seq_ultim = 1 ;

    while (x != 0 and seq_ultim != 0) {
        suma1 = 0 ;
        info_sequencia(suma1, seq_ultim) ;

        if (suma0 == suma1 and x0 == seq_ultim) ++cont ;
    }
    cout << cont << endl ;
}