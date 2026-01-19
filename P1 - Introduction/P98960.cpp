#include <iostream>
using namespace std;

int main () {
    char c ;
    cin >> c ;

    if ('A' <= c and c <= 'Z') c = c + ('a'-'A') ;
    else if ('a' <= c and c <= 'z') c = c + ('A'-'a') ;
    cout << c << endl ;
}