#include <iostream>
using namespace std;

void draw_rombes(int n, int n_inicial) {

    if (n > 0) {
        for (int i = 0 ; i < n_inicial - n ; ++i) cout << " " ;
        for (int j = 0 ; j < (1 + 2*(n - 1)) ; ++j) cout << "*" ;
        cout << endl ;
    }
}

void rombes_recursius(int n, int n_inicial) {

    if (n > 1) {
        rombes_recursius(n - 1, n_inicial) ;

        for (int i = 1 ; i < n ; ++i) draw_rombes(i, n_inicial) ;
        draw_rombes(n, n_inicial) ;

        for (int j = n - 1 ; j > 1 ; --j) draw_rombes(j, n_inicial) ;
        rombes_recursius(n - 1, n_inicial) ;
    }
}

int main () {

    int n ;

    while (cin >> n) {
        rombes_recursius(n, n) ;
        draw_rombes(1, n) ;
        cout << endl ;
    }
}