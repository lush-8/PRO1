#include <iostream>
using namespace std;

int max2(int a, int b) {

    if (a >= b) return a ;
    else return b ;
}

int engreixa(int x) {

    if (x <= 9) return x ;
    else {
        int en = engreixa(x/10) ;
        int max = max2(en%10, x%10) ;
        return en*10 + max ;
    }
}

int main () {}