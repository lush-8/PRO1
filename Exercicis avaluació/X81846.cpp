#include <iostream>
using namespace std;

int main () {

    int n ;
    cin >> n ;

    for (int i = 0 ; i < n ; ++i) {
        for (int j = 0 ; j < 20 ; ++j) {
            int p , q ;
            cin >> p >> q ;
            int inv_bin_p = 0 , inv_bin_q = 0 ;

            for (int k = 0 ; k < 20 ; ++k) {
                inv_bin_p = inv_bin_p*2 + p%2 ;
                p /= 2 ;
                inv_bin_q = inv_bin_q*2 + q%2 ;
                q/= 2 ;
            }
            for (int k = 0 ; k < 20 and (inv_bin_p > 0 or inv_bin_q > 0) ; ++k) {
                if (inv_bin_p%2) cout << '#' ;
                else if (inv_bin_q%2) cout << '.' ;
                else cout << ' ' ;
                inv_bin_p /= 2 ;
                inv_bin_q /= 2 ;
            }
            cout << endl ;
        }
        cout << endl ;
    }
}