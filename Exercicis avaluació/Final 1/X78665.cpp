#include <iostream>
using namespace std;

void dibuixa(int n) {

    if (n == 1) cout << '*' << endl ;
    else {
        dibuixa(n - 1) ;
        
        for (int i = 0 ; i < n ; ++i) {
            for (int j = 0 ; j < n ; ++j) cout << '*' ;
            cout << endl ;
        }
        dibuixa(n - 1) ;
    }
}

int main () {

    int n ;

    while (cin >> n) {
        dibuixa(n) ;
        cout << endl ;
    }
}