#include <iostream>
using namespace std;

int nombre_digits(int n) {

    if (n < 10) return 1 ;
    else return 1 + nombre_digits(n/10) ;
}

void print_n_with_hyphens(int n, int n_cont) {

    for (int i = 0 ; i < n_cont ; ++i) {
        if (i > 0) cout << '-' ;
        cout << n ;
    }
}

void print_dot(int n_dot) {

    for (int i = 0 ; i < n_dot ; ++i) {
        cout << '.' ;
    }
}

int main () {

    int n , f ;
    cin >> n >> f ;
    int n_digits = nombre_digits(n) ;
    int size = 2*f*(n_digits + 1) ;

    for (int i = 0 ; i < f ; ++i) {
        int n_cont = i + 1 ;
        int n_length = n_cont*n_digits + (n_cont - 1) ;
        int n_dot = size - 2*n_length - 1 ;
        print_n_with_hyphens(n, n_cont) ;
        print_dot(n_dot) ;
        print_n_with_hyphens(n, n_cont) ;
        cout << endl ;
    }
}