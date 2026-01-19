#include <iostream>
using namespace std;

void cross(int n, char c) {

    // Part superior de la creu

    for (int i = 1 ; i <= n/2 ; ++i) {
        for (int j = 1 ; j <= n/2 ; ++j) cout << " " ;
        cout << char(c) << endl ;
    }

    // Part del mig de la creu

    for (int i = 1 ; i <= n ; ++i) cout << char(c) ;
    cout << endl ;

    // Part inferior de la creu

    for (int i = 1 ; i <= n/2 ; ++i) {
        for (int j = 1 ; j <= n/2 ; ++j) cout << " " ;
        cout << char(c) << endl ;
    }
}

int main () {}