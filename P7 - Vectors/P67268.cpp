#include <iostream>
#include <vector>
using namespace std;

int main () {

    int n ;

    while (cin >> n) {

        vector<int> v(n) ;

        for (int i = 0 ; i < n ; ++i) cin >> v[i] ;
        for (int j = n-1 ; j > 0 ; --j) cout << v[j] << " " ;
        if (n > 0) cout << v[0] << endl ;
        else cout << endl ;
    }
}