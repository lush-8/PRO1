#include <iostream>
using namespace std;

void swap(int& n) {

    string s ;

    if (cin >> s) {
        swap(n) ;

        if (n != 0) {
            cout << s << endl ;
            --n ;
        }
    }
}

int main () {

    int n ;
    cin >> n ;
    swap(n) ;
}