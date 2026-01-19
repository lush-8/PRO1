#include <iostream>
using namespace std;

int main () {

    char c ;
    int cont_open = 0 ;

    while (cin >> c and cont_open >= 0) {
        if (c == '(') ++cont_open ;
        else --cont_open ;
    }
    if (cont_open == 0) cout << "si" << endl ;
    else cout << "no" << endl ;
}