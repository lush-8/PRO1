#include <iostream>
using namespace std;

int main () {

    int n , m ;
    bool first = true ;

    while (cin >> n >> m) {
        if (first == true) first = false ;
        else cout << endl ;
        int x = 9 ;

        for (int i = 1 ; i <= n ; ++i) {
            for (int j = 1 ; j <= m ; ++j) {
                cout << x ;
                --x ;

                if (x < 0) x = 9 ;
            }
            cout << endl ;
        }
    }
}