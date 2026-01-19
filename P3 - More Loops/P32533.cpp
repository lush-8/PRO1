#include <iostream>
using namespace std;

int main () {

    int n ;
    cin >> n ;

    for (int i = 1 ; i <= n ; ++i) {
        for (int j = n - 2 ; j > i - 2 ; --j) cout << "+" ;
        cout << "/" ;
        
        for (int k = n - i - 1 ; k < n - 2 ; ++k) cout << "*" ;
        cout << endl ;
    }
}