#include <iostream>
using namespace std;

int main () {

    int n ;

    while (cin >> n) {
        int n_inicial = n , sum_digits = 0 ;

        while (n > 0) {
            sum_digits = sum_digits + n%10 ;
            n = n/10 ;
        }
        cout << "La suma dels digits de " << n_inicial << " es " << sum_digits << "." << endl ;
    }
}