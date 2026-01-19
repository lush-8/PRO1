#include <iostream>
using namespace std;

int main () {

    int x ;
    cin >> x ;
    int a = x%10 ;
    int b = (x/10)%10 ;
    int c = (x/100)%10 ;
    cout << a + b + c << endl ;
}