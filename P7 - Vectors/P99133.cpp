#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main () {

    int n ;
    cin >> n ;
    vector<string> v(n) ;

    for (int i = 0 ; i < n ; ++i) cin >> v[i] ;
    for (int j = n-1 ; j >= 0 ; --j) {
        string paraula = v[j] ;

        for (int k = paraula.size()-1 ; k >= 0 ; --k) cout << paraula[k] ;
        cout << endl ;
    }
}