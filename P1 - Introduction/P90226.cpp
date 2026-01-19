#include <iostream>
using namespace std;

int main () {
    string a , b ;
    cin >> a >> b ;
    if (a<b) cout << a << ' ' << '<' << ' ' << b << endl ;
    if (a>b) cout << a << ' ' << '>' << ' ' << b << endl ;
    if (a==b) cout << a << ' ' << '=' << ' ' << b << endl ;
}