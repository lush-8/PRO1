#include <iostream>
using namespace std;

int main () {
    int n , n_stars = 1 ;
    cin >> n ;

    for (int i = 1 ; i <= n ; ++i) {
        for (int j = 1 ; j <= n_stars ; ++j) cout << "*" ;
        n_stars = n_stars + 1 ;
        cout << endl ;
    }
}