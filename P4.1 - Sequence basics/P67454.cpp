#include <iostream>
using namespace std;

int main () {
    char a ;
    int cont = 0 ;

    while (cin >> a and a != '.') {
        if (a == 'a') ++cont ;
    }
    cout << cont << endl ;
}