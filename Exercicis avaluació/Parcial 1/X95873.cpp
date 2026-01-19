#include <iostream>
using namespace std;

int main () {

    char c ;
    int cont_a , cont_b , total_a , total_b ;
    cont_a = cont_b = total_a = total_b = 0 ;

    while (cin >> c) {
        if (c == 'a') ++cont_a ;
        else if (c == 'b') ++cont_b ;

        if (c == '.') {
            cont_a = 0 ;
            cont_b = 0 ;
        }
        else if (c == '?') {
            total_a += cont_a ;
            cont_a = 0 ;
            cont_b = 0 ;
        }
        else if (c == '!') {
            total_b += cont_b ;
            cont_a = 0 ;
            cont_b = 0 ;
        }
    }
    cout << total_a << " " << total_b << endl ;
}