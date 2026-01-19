#include <iostream>
using namespace std;

int main () {
    int b , n ;

    while (cin >> b >> n) {
        int n_digits = 1 ;
        
        while (n >= b) {
            n = n/b ;
            ++n_digits ;
        }
        cout << n_digits << endl ;
    }
}