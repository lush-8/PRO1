#include <iostream>
using namespace std;

int main () {
    int n , a , cont = 0 ;
    cin >> n ;
    a = n%1000 ;
    cout << "nombres que acaben igual que " << n << ":" << endl ;

    while (cin >> n) {
        if (n%1000 == a) {
            cout << n << endl ;
            ++cont ;
        }
    }
    cout << "total: " << cont << endl ;
}