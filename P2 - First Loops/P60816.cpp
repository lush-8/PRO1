#include <iostream>
using namespace std;

int main () {

    int n , hexa ;
    cin >> n ;

    if (n == 0) cout << n ;
    while (n != 0) {
        hexa = n%16 ;

        if (hexa == 10) cout << "A" ;
        else if (hexa == 11) cout << "B" ;
        else if (hexa == 12) cout << "C" ;
        else if (hexa == 13) cout << "D" ;
        else if (hexa == 14) cout << "E" ;
        else if (hexa == 15) cout << "F" ;
        else cout << hexa ;
        n = n/16 ;
    }
    cout << endl ;
}