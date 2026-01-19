#include <iostream>
#include <cmath>
using namespace std;

int main () {

    cout.setf(ios::fixed);
    cout.precision(6);

    double n ;

    while (cin >> n) {
        double angle = 2*M_PI*n/360 ;
        cout << sin(angle) << " " << cos(angle) << endl ;
    }
}