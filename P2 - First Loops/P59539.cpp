#include <iostream>
using namespace std;

int main () {

    cout.setf(ios::fixed);
    cout.precision(4);

    int n ;
    double result = 0 ;
    cin >> n ;

    for (int i = 1 ; i <= n ; ++i) result = result + 1/double (i) ;
    cout << result << endl ;
}