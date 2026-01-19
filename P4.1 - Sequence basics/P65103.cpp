#include <iostream>
using namespace std;

int main () {

    int n , m , position = 0 ;
    bool found = false ;
    cin >> n ;

    while (not found and cin >> m) {
        ++position ;
        
        if (position==n) found = true ;
    }
    if (found) cout << "A la posicio " << position << " hi ha un " << m << "." << endl ;
    else cout << "Posicio incorrecta." << endl ;
}