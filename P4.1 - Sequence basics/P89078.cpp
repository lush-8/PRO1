#include <iostream>
using namespace std;

int main () {
    int n , cont = 0 ;
    bool found = false ;

    while (cin >> n and not found) {
        if (n%2 == 0) found = true ;
        ++cont ;
    }
    cout << cont << endl ;
}