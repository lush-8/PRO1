#include <iostream>
using namespace std;

int main () {
    int nspaces , nrombes , i , j , k ;

    while (cin >> nspaces >> nrombes) {
        bool final = false ;

        for (i = 1 ; i <= nrombes ; ++i) {
            
            for (j = 1 ; j <= nspaces ; ++j) cout << " " ;
            cout << "*" << endl;

            for (j = 1 ; j <= nspaces ; ++j) {
                for (k = 1 ; k <= nspaces-j ; ++k) cout << " " ;
                cout << "*" ;
                for (k = 1 ; k <= 1+2*(j-1) ; ++k) cout << " " ;
                cout << "*" << endl;
            }

            for (j = 1 ; j <= nspaces-1 ; ++j) {
                for (k = 1 ; k <= j ; ++k) cout << " " ;
                cout << "*" ;
                for (k = 1 ; k <= 2*(nspaces-j)-1 ; ++k) cout << " " ;
                cout << "*" << endl;
            }

            if (i == nrombes) final = true ;
            if (final == true) {
                for (j = 1 ; j <= nspaces ; ++j) cout << " " ;
                cout << "*" << endl;
            }
        }
        cout << endl;
    }
}