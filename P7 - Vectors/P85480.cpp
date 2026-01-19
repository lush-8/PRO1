#include <iostream>
#include <vector>
using namespace std;

bool es_primer(int n) {

    if (n < 2) return false ;
    for (int i = 2 ; i*i <= n ; ++i) {
        if (n%i == 0) return false ;
    }
    return true ;
}

int main () {

    int n ;

    while (cin >> n) {
        vector<int> v(n) ;

        for (int i = 0 ; i < n ; ++i) cin >> v[i] ;
        int i = 0 ;
        bool found = false ;

        while (not found and i < n) {
            int j = 0 ;

            while (not found and j < n) {
                if (i != j) {
                    if (es_primer(v[i]+v[j])) found = true ;
                }
                ++j ;
            }
            ++i ;
        }
        if (found) cout << "si" << endl ;
        else cout << "no" << endl ;
    }
}