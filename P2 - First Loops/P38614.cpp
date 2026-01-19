#include <iostream>
using namespace std;

int main () {

    int n , n_inicial , position = 1 , sum_senars = 0 ;
    cin >> n ;
    n_inicial = n ;

    while (n > 0) {
        int digits = n%10 ;

        if (position%2 == 1) sum_senars += digits ;
        n = n/10 ;
        ++position ;
    }
    if (sum_senars%2 == 0) cout << n_inicial << " ES TXATXI" << endl ;
    else cout << n_inicial << " NO ES TXATXI" << endl ;
}