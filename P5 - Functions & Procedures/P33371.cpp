#include <iostream>
using namespace std;

char codificat(char c, int k) {

    if ('a' <= c and c <= 'z') {
        return (c + k - 'a')%('z' - 'a' + 1) + 'A' ;
    }
    if (c == '_') return ' ' ;
    return c ;
}

int main () {

    int n ;

    while (cin >> n) {
        char c ;
        cin >> c ;

        while (c != '.') {
            cout << codificat(c, n) ;
            cin >> c ;
        }
        cout << endl ;
    }
}