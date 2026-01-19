#include <iostream>
#include <vector>
using namespace std;

int main () {

    int n ;

    while (cin >> n) {
        vector<int> u(n) ;
        vector<int> v(n) ;

        for (int i = 0 ; i < n ; ++i) {
            cin >> u[i] ;
        }
        for (int i = 0 ; i < n ; ++i) {
            cin >> v[i] ;
        }
        vector<int> result(n) ;
        int j = 0 ;

        for (int i = 0 ; i < n ; ++i) {
            while (j < n and v[j] <= u[i]) ++j ;
            result[i] = j ;
        }
        for (int i = 0 ; i < n ; ++i) {
            if (i) cout << ' ' ;
            cout << result[i] ;
        }
        cout << endl ;
    }
}