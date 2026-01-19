#include <iostream>
using namespace std;

void n_stars(int n) {

    if (n > 0) {
        cout << "*" ;
        n_stars(n-1) ;
    }
    else cout << endl ;
}

void barres(int n) {

    if (n == 1) n_stars(1) ;
    else {
        barres(n-1) ;
        n_stars(n) ;
        barres(n-1) ;
    }
}

int main () {

    int n ;
    cin >> n ;
    barres(n) ;
}