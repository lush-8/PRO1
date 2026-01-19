#include <iostream>
using namespace std;

struct Fraccio {
    int num, den;   // sempre estrictament positius
};

int MCD(int a, int b) {

    if (b == 0) return a ;
    else return MCD(b, a%b) ;
}

Fraccio suma(const Fraccio& x, const Fraccio& y) {

    Fraccio suma ;
    suma.num = x.num*y.den + y.num*x.den ;
    suma.den = x.den*y.den ;
    return suma ;
}

int main () {

    Fraccio fraccio ;
    char barra , operacio ;
    cin >> fraccio.num >> barra >> fraccio.den >> operacio ;
    Fraccio result ;
    result.num = fraccio.num ;
    result.den = fraccio.den ;

    while (operacio != '=') {
        cin >> fraccio.num >> barra >> fraccio.den >> operacio ;
        result = suma(result, fraccio) ;
        int mcd = MCD(result.num, result.den) ;
        result.num /= mcd ;
        result.den /= mcd ;
    }
    int mcd = MCD(result.num, result.den) ;
    cout << result.num/mcd << "/" << result.den/mcd << endl ;
}