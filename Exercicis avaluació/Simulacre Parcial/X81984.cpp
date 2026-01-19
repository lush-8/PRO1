#include <iostream>
using namespace std;

int main () {

    int a , b , c ;
    cin >> a >> b >> c ;

    if ((a + b)/2.0 == c or (a + c)/2.0 == b or (b + c)/2.0 == a) cout << "YES" << endl ;
    else cout << "NO" << endl ;
}