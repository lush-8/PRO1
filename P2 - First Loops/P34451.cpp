#include <iostream>
using namespace std;

int main () {

    int x , n , cont = 0 ;
    cin >> x ;

    while (cin >> n) {
        if (n%x == 0) ++cont ;
    }
    cout << cont << endl ;
}