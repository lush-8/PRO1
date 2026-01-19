#include <iostream>
using namespace std;

int main () {

    int k , k_inicial ;
    cin >> k ;
    k_inicial = k ;

    for (int b = 2 ; b <= 16 ; ++b) {
        int digits = 1 ;
        
        while (k >= b) {
            ++digits ; 
            k = k/b ;
        }
        cout << "Base " << b << ": " << digits << " cifras." << endl ;
        k = k_inicial ;
    }
}