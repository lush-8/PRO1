#include <iostream>
using namespace std;

struct Racional {
    int num ;
    int den ;
};

int MCD(int a, int b) {
    if (b == 0) return a ;
    else return MCD(b, a%b) ;
}

Racional simplifica(Racional& r) {

    int mcd = MCD(r.num, r.den) ;
    Racional fraccio ;
    fraccio.num = r.num/mcd ;
    fraccio.den = r.den/mcd ;

    if (fraccio.den < 0) {
        fraccio.num = -fraccio.num ;
        fraccio.den = -fraccio.den ;
    }
    return fraccio ;
}

Racional suma(Racional& r1, Racional& r2) {

    Racional r ;
    r.num = r1.num*r2.den + r2.num*r1.den ;
    r.den = r1.den*r2.den ;
    return simplifica(r) ;
}

Racional multiplica(Racional& r1, Racional& r2) {

    Racional r ;
    r.num = r1.num*r2.num ;
    r.den = r1.den*r2.den ;
    return simplifica(r) ;
}

void escriu_racional(Racional& r) {

    if (r.num == 0) cout << 0 ;
    else if (r.den == 1) cout << r.num ;
    else cout << r.num << "/" << r.den ;
    cout << endl ;
}

int main () {

    Racional r1 , r2 ;
    cin >> r1.num >> r1.den ;
    r1 = simplifica(r1) ;
    escriu_racional(r1) ;
    string operacio ;

    while (cin >> operacio) {
        if (operacio == "suma") {
            cin >> r2.num >> r2.den ;
            r1 = suma(r1, r2) ;
        }
        else if (operacio == "resta") {
            cin >> r2.num >> r2.den ;
            r2.num = -r2.num ;
            r1 = suma(r1, r2) ;
        }
        else if (operacio == "multiplica") {
            cin >> r2.num >> r2.den ;
            r1 = multiplica(r1, r2) ;
        }
        else if (operacio == "divideix") {
            cin >> r2.den >> r2.num ;
            r1 = multiplica(r1, r2) ;
        }
        escriu_racional(r1) ;
    }
}