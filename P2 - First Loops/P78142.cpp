#include <iostream>
using namespace std;

int main () {

    cout.setf(ios::fixed);
    cout.precision(2);

    double n , sum = 0.0 , avg = 0.0 ;
    int cont = 0 ;

    while (cin >> n) {
        sum = sum + n ;
        ++cont ;
        avg = sum/cont ;
    }
    cout << avg << endl ;
}