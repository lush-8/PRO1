#include <iostream>
using namespace std;

int main () {
    int x = 0 , y = 0 ;
    char c ;

    while (cin >> c) {
        if (c == 'n') --y ;
        else if (c == 's') ++y ;
        else if (c == 'e') ++x ;
        else if (c == 'o') --x ;
    }
    cout << "(" << x << ", " << y << ")" << endl ;
}