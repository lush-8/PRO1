#include <iostream>
using namespace std;

void dibuixa(int n, string s) {

    if (n == 1) cout<< s << endl ;
    else {
        dibuixa(n - 1, " " + s) ;
        cout << string(s.size() - 1, ' ') ;
        cout << string(n, 'X') << endl ;
        dibuixa(n - 1, " " + s) ;
    }
}

int main () {

    int n ;

    while (cin >> n) {
        dibuixa(n, "X") ;
        cout << endl ;
    }
}