#include <iostream>
using namespace std;

int main () {
    char c , c1 = 0 , c2 = 0 , c3 = 0 ;
    bool hola = false ;

    while (cin >> c and c != '.') {
        if (c3 == 'h' and c2 == 'o' and c1 == 'l' and c == 'a') hola = true ;
        c3 = c2 ;
        c2 = c1 ,
        c1 = c ;
    }
    if (hola) cout << "hola" << endl ;
    else cout << "adeu" << endl ;
}