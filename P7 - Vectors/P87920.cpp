#include <iostream>
#include <vector>
using namespace std;

int main () {

    int n ;

    while (cin >> n) {
        vector<int> v(n) ;
        int sum = 0 ;

        for (int i = 0 ; i < n ; ++i) {
            cin >> v[i] ;
            sum = sum + v[i] ;
        }

        int i = 0 ;
        bool found = false ;

        while (i < n and not found) {
            if (v[i] == sum - v[i]) found = true ;
            ++i ;
        }
        if (found) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }
}