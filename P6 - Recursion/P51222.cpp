#include <iostream>
using namespace std;

int nombre_digits(int n) {

    if (n <= 9) return 1 ;
    else return 1 + nombre_digits(n/10) ;
}

int main () {}