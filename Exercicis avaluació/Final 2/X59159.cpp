#include <iostream>
using namespace std;

void dibuixa(int n) {
    
    if (n == 1) cout << '*' << endl ;
    else {
        for (int i = 0 ; i < n ; ++i) cout << '*' ;
        cout << endl ;

        for (int i = 0 ; i < 3 ; ++i) dibuixa(n - 1) ;
        for (int i = 0 ; i < n ; ++i) cout << '*' ;
        cout << endl ;
    }
}

int main () {

    int n ;

    while (cin >> n) {
        dibuixa(n) ;
        cout << endl ;
    }
}