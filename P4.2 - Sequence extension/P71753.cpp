#include <iostream>
using namespace std;

int main () {

    int n ;
    
    while (cin >> n) {
        int x , max ;
        cin >> x ;
        max = x ;
        
        for (int i = 2 ; i <= n ; ++i) {
            cin >> x ;

            if (x > max) max = x ;
        }
        cout << max << endl ;
    }
}