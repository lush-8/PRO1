#include <iostream>
using namespace std;

int main() {

    int cont_a = 0 , cont_b = 0 , cont_frase = 0 ;
    char c ;
    bool pregunta = false ;
    
    while (cin >> c) {
        if (c == 'a') ++cont_a ;
        else if (c == 'b') ++cont_b ;

        if (pregunta and (c == '.' or c == '?' or c == '!')) {
            if (cont_a > cont_b) ++cont_frase ;
        }

        if (c == '?') pregunta = true ;
        else if (c == '.' or c == '!') pregunta = false ;

        if (c == '.' or c == '?' or c == '!') {
            cont_a = 0 ;
            cont_b = 0 ;
        }
    }
    cout << cont_frase << endl ;
}