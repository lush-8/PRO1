#include <iostream>
using namespace std;

int main () {
    
    int n ;

    while (cin >> n) {
        int n_trans = 0 , multiplicador = 1 ;

        while (n > 0) {
            int digit = n%10 ;

            if (digit%2 == 0) ++digit ;
            n_trans = n_trans + digit*multiplicador ;
            multiplicador = multiplicador*10 ;
            n = n/10 ;
        }
        cout << n_trans << endl ;
    }
}