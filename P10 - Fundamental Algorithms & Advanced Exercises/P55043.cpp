#include <iostream>
using namespace std;

int sum_of_digits(int riu) {

    int n = riu ;

    while (riu > 0) {
        n = n + riu%10 ;
        riu = riu/10 ;
    }
    return n ;
}

int trobada_de_rius(int n) {

    int riu1 = 1 ;
    int riu3 = 3 ;
    int riu9 = 9 ;

    while (n != riu1 and n != riu3 and n != riu9) {
        while (riu1 < n) riu1 = sum_of_digits(riu1) ;
        while (riu3 < n) riu3 = sum_of_digits(riu3) ;
        while (riu9 < n) riu9 = sum_of_digits(riu9) ;
        if (n != riu1 and n != riu3 and n != riu9) n = sum_of_digits(n) ;
    }
    return n ;
}

int main () {}