#include <iostream>
using namespace std;

int main () {

    cout.setf(ios::fixed);
    cout.precision(4);

    double capital , interest , t ;
    string s ;
    cin >> capital >> interest >> t >> s ;

    if (s == "simple") {
        capital = capital + capital*(interest/100)*t ;
        cout << capital << endl ;
    }
    else if (s == "compost") {
        for (int i = 0 ; i < t ; ++i) {
            capital = capital + capital*(interest/100) ;
        }
        cout << capital << endl ;
    }
}