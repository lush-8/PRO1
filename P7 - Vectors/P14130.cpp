#include <iostream>
#include <vector>
using namespace std;

int main () {

    int n , cont = 0 ;
    cin >> n ;
    vector<int> v(n) ;

    for (int i = 0 ; i < n ; ++i) cin >> v[i] ;
    for (int j = 0 ; j < n-1 ; ++j) {
        if (v[j] == v[n-1]) ++cont ;
    }
    cout << cont << endl ;
}