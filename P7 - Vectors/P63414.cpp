#include <iostream>
#include <vector>
using namespace std;

int main () {

    int const interval = 1000001000 - 1000000000 + 1 ;
    vector<int> v(interval) ;

    int n ;
    cin >> n ;

    for (int i = 0 ; i < n ; ++i) {
        int x ;
        cin >> x ;
        ++v[x - 1000000000] ;
    }
    for (int i = 0 ; i < interval ; ++i) {
        if (v[i] != 0) cout << i + 1000000000 << " : " << v[i] << endl ;
    }
}