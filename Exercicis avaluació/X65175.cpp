#include <iostream>
using namespace std;

bool capicua(int n) {

    int original = n ;
    int reversed = 0 ;

    while (n != 0) {
        int digit = n%10 ;
        reversed = reversed*10 + digit ;
        n /= 10 ;
    }
    return original > 99 and original == reversed ;
}

int main () {

    int n ;
    bool found = false ;

    while (not found and cin >> n) {
        found = capicua(n) ;
    }
    if (found) cout << n << '!' << endl ;
    else cout << "Res." << endl ;
}