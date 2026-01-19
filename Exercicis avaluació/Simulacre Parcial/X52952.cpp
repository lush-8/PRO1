#include <iostream>
using namespace std;

int main () {

    int row , column , side ;

    while (cin >> row >> column >> side) {

        for (int i=0 ; i<(side*column)+column+1 ; ++i) cout << "#" ;
        cout << endl ;

        for (int j=0 ; j<row ; ++j) {
            for (int k=0 ; k<side ; ++k) {
                cout << "#" ;
                for (int l=0 ; l<column ; ++l) {
                    for (int m=0 ; m<side ; ++m) cout << " " ;
                    cout << "#" ;
                }
                cout << endl ;
            }
            for (int i=0 ; i<(side*column)+column+1 ; ++i) cout << "#" ;
            cout << endl ;
        }
        cout << endl ;
    }
}