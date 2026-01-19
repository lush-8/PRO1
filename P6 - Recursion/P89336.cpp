#include <iostream>
using namespace std;

void swap(int& n) {

    string s ;

    if (cin >> s) {
        ++n ;
        swap(n) ;

        if (n <= 0) cout << s << endl ;
        n = n - 2 ;
    }
}

int main () {

    int n = 0 ;
    swap(n) ;
}