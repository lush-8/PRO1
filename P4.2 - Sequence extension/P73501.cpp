#include <iostream>
using namespace std;

int main () {

    int n ;
    cin >> n ;

    for (int i = 1 ; i <= n ; ++i) {
        int x_actual , cont = 0 ;
        cin >> x_actual ;
        int x_anterior = x_actual ;

        while (x_actual != 0) {
            if (x_anterior < x_actual) ++cont ;
            x_anterior = x_actual ;
            cin >> x_actual ;
        }
        cout << cont << endl ;
    }
}