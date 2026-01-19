#include <iostream>
using namespace std;

int main () {

    string s_inicial , s ;
    int cont = 1 , cont_max = 1 ;
    cin >> s_inicial ;

    while (cin >> s) {
        if (s == s_inicial) {
            ++cont ;

            if (cont > cont_max) cont_max = cont ;
        }
        else cont = 0 ;
    }
    cout << cont_max << endl ;
}