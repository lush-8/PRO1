#include <iostream>
using namespace std;

void escriu_digits(int n) {

    if (n == 0) cout << n ;
    else {
        for (int i = 0 ; i < n ; ++i) {
            cout << n ;
            escriu_digits(n - 1) ;
        }
        cout << n ;
    }
}

int main () {

    int n ;

    while (cin >> n) {
        escriu_digits(n) ;
        cout << endl ;
    }
}