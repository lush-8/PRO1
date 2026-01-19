#include <iostream>
using namespace std;

int main () {

    int a , b , c , d , cont = 0 ;
    cin >> a >> b >> c >> d ;

    if (a == b or a == c or a == d) ++cont ;
    if (b == c or b == d) ++cont ;
    if (c == d) ++cont ;

    if (cont == 1) cout << "YES" << endl ;
    else cout << "NO" << endl ;
}