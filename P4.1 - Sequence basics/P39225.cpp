#include <iostream>
using namespace std;

int main () {
    int a , b , c = 1;
    bool found = false ;
    cin >> a ;

    while (b != -1 and not found) {
        if (a == c) found = true ;
        cin >> b ;
        ++c ;
    }
    cout << "A la posicio " << a << " hi ha un " << b << "." << endl ;
}