#include <iostream>
using namespace std;

int resultat(int n) {

    int result = 0 ;
    int multiplier = 1 ;
    int prev = n%10 ;
    n /= 10 ;

    while (n != 0) {
        int digit = n%10 ;
        int distance = abs(digit - prev) ;
        result = distance*multiplier + result ;
        prev = digit ;
        multiplier *= 10 ;
        n /= 10 ;
    }
    return prev*multiplier + result ;
}

int main () {

    int n ;

    while (cin >> n) cout << resultat(n) << endl ;
}