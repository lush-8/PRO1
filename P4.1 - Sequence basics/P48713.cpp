#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int n , p ;
    cin >> n ;

    for (int i = 0 ; i < n ; ++i) {
        cin >> p ;
        bool is_prime = true ;

        if (p < 2) is_prime = false ;
        else if (p == 2) is_prime = true ;
        else if (p > 2 and p%2 == 0) is_prime = false ;
        else {
            int j = 3 ;
            
            while (j <= sqrt(p) and is_prime) {
                if (p%j == 0) is_prime = false ;
                ++j ;
            }
        }
        if (is_prime) cout << p << " es primer" << endl ;
        else cout << p << " no es primer" << endl ;
    }
}