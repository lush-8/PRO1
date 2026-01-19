#include <iostream>
using namespace std;

int main () {

    cout.setf(ios::fixed);
    cout.precision(2);

    int n ;
    double a , sum1 = 0.0 , sum2 = 0.0 , result = 0.0 , cont = 0.0 ;
    cin >> n ;

    for (int i = 0 ; i < n ; ++i) {
        cin >> a ;
        ++cont ;
        sum1 = sum1 + a*a ;
        sum2 = sum2 + a ;
        result = ((1/(cont-1))*sum1) - ((1/(cont*(cont-1)))*sum2*sum2) ;
    }
    cout << result << endl ;
}