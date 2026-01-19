#include <iostream>
using namespace std;

int suma_digits(int x) {

    if (x <= 9) return x ;
    else return x%10 + suma_digits(x/10) ;
}

int reduccio_digits(int x) {

    if (x <= 9) return x ;
    else return reduccio_digits(suma_digits(x)) ;
}

int main () {}