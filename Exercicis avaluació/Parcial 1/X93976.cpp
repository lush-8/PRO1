#include <iostream>
using namespace std;

int main () {

    int n ;

    while (cin >> n) {
        int n_girat = 0 ;

        while (n != 0) {
            int digit = n%10 ;
            n_girat = n_girat*10 + digit ;
            n = n/10 ;
        }
        int suma = 0 ;
        int pos = 1 ;
        
        while (n_girat != 0) {
            int digit = n_girat%10 ;
            suma = suma + digit*pos ;
            ++pos ;
            n_girat = n_girat/10 ;
        }
        cout << suma << endl ;
    }
}