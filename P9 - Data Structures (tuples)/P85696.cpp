#include <iostream>
using namespace std;

struct Racional {
    int num , den ;
};

int gcd(int a, int b) {

    if (b == 0) return a ;
    else return gcd(b, a%b) ;
}

Racional racional(int n, int d) {

    Racional r ;
    int mcd = gcd(n, d) ;

    r.num = n/mcd ;
    r.den = d/mcd ;

    if (r.den < 0) {
        r.den = -r.den ;
        r.num = -r.num ;
    }
    return r ;
}

int main () {}