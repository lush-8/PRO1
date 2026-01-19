#include <iostream>
using namespace std;

void Draw(int j, int n) {

    if (j <= n) {
        Draw(j + 1, n) ;

        for (int i = 0 ; i < j ; ++i) cout << '*' ;
        cout << endl ;
        Draw(j + 1, n) ;
    }
}

int main () {

    int n ;

    while (cin >> n) {
        Draw(1, n) ;
        cout << endl ;
    }
}