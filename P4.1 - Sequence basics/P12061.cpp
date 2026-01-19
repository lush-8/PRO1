#include <iostream>
using namespace std;

int main () {
    string s ;
    int cont = 0 ;
    bool found = false ;

    while (cin >> s) {
        if (s == "principi") {
            while (not found and cin >> s) {
                ++cont ;

                if (s == "final") found = true ;
            }
        }
    }
    if (found) cout << cont - 1 << endl ;
    else cout << "sequencia incorrecta" << endl ;
}