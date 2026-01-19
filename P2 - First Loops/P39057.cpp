#include <iostream>
#include <cmath>
using namespace std;

int main () {

    cout.setf(ios::fixed);
    cout.precision(6);

    string s ;
    int n ;
    cin >> n ;

    for (int i = 0 ; i < n ; ++i) {
        cin >> s ;

        if (s == "rectangle") {
            double x , y ;
            cin >> x >> y ;
            cout << x*y << endl ;
        }
        else if (s=="cercle") {
            double r ;
            cin >> r ;
            cout << M_PI*r*r << endl ;
        }
    }
}