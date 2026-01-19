#include <iostream>
using namespace std;

int main () {

    int a , b , c , d ;
    cin >> a >> b >> c >> d ;
    int cont = 0 ;

    int suma = a + b ;

    if (c + d == suma) ++cont ;

    suma = a + c ;

    if (b + d == suma) ++cont ;

    suma = a + d ;

    if (b + c == suma) ++cont ;

    if (cont != 0) cout << "YES" << endl ;
    else cout << "NO" << endl ;
}