#include <iostream>
using namespace std;

int main () {

    int n ;

    while (cin >> n) {

        // Part superior de l'octàgon

        int n_spaces = n - 1 ;
        int n_X = n ;

        for (int i = n_spaces ; i > 0 ; --i) {
            for (int j = 0 ; j < i ; ++j) cout << " " ;
            for (int j = 0 ; j < n_X ; ++j) cout << "X" ;
            cout << endl ;
            n_X = n_X + 2 ;
        }

        // Part central de l'octàgon

        for (int i = 0 ; i < n ; ++i) {
            for (int j = 0 ; j < n_X ; ++j) cout << "X" ;
            cout << endl ;
        }

        // Part inferior de l'octàgon

        n_spaces = 1 ;
        n_X = n_X - 2 ;
        
        for (int i = n_spaces ; i < n ; ++i) {
            for (int j = 0 ; j < i ; ++j) cout << " " ;
            for (int j = 0 ; j < n_X ; ++j) cout << "X" ;
            cout << endl ;
            n_X = n_X -2 ;
        }
        cout << endl ;
    }
}