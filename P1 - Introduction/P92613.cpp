#include <iostream>
using namespace std;

int main () {
    double x , a ;
    cin >> x ;
    a = x - int(x) ;

    cout << int(x) << " " ;

    if (x==int(x)) cout << int(x) << " " ;
    else cout << int(x)+1 << " " ;

    if (a>=0.5) cout << int(x)+1 << endl ;
    else cout << int(x) << endl ;
}