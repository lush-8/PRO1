#include <iostream>
using namespace std;

int main () {
    int n1 , n2 , n3 ;
    bool found = false ;

    cin >> n1 >> n2 >> n3 ;
    while (n3 != 0 and not found) {

        if (n2 > 3143 and n2 > n1 and n2 > n3) found = true ;
        else {
            n1 = n2 ;
            n2 = n3 ;
            cin >> n3 ;
        }
    }
    if (found == true) cout << "SI" << endl ;
    else cout << "NO" << endl ;
}