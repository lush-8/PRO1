#include <iostream>
using namespace std;

int main () {

    char a , op , b , eq , c ;

    while (cin >> a >> op >> b >> eq >> c) {
        if (a == 'x') {
            cout << (c - '0') - (b - '0') ;
        }
        else if (b == 'x') {
            cout << (c - '0') - (a - '0') ;
        }
        else if (c == 'x') {
            cout << (a - '0') + (b - '0') ;
        }
        cout << endl ;
    }
}