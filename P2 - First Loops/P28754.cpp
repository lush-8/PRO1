#include <iostream>
using namespace std;

int main () {

    int n , binari ;
    cin >> n ;

    if (n == 0) cout << n ;
    while (n != 0) {
        binari = n%2 ;
        n = n/2 ;
        cout << binari ;
    }
    cout << endl ;
}