#include <iostream>
using namespace std;

int main () {
    int n , n_inicial , digits = 0 ;
    cin >> n ;
    n_inicial = n ;
    
    if (n == 0) cout << "El nombre de digits de 0 es 1." << endl ; 
    else {
        while (n > 0) {
            ++digits ; 
            n = n/10 ;
        }
        cout << "El nombre de digits de " << n_inicial << " es " << digits << "." << endl ;
    }
}