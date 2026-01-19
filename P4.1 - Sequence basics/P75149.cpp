#include <iostream>
using namespace std;

int main () {
    char a ;
    bool found = false ;

    while (cin >> a and a != '.' and not found) {
        if (a == 'a') found = true ;
    }
    if (found) cout << "si" << endl ;
    else cout << "no" << endl ;
}