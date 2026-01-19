#include <iostream>
using namespace std;

int suma_digits(int n) {

    if (n < 10) return n ;
    else return n%10 + suma_digits(n/10) ;
}

bool es_primer(int n) {

    if (n < 2) return false ;
    for (int i = 2 ; i*i <= n ; ++i) {
        if (n%i == 0) return false ;
    }
    return true ;
}

bool es_primer_perfecte(int n) {

    if (n < 10) return es_primer(n) ;
    return es_primer(n) and es_primer_perfecte(suma_digits(n)) ;
}

int main () {}