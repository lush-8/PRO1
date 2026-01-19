#include <iostream>
using namespace std;

bool es_perfecte(int n) {

    int r = 1 ;

    for (int i = 2 ; i*i <= n ; ++i) {
        if (n%i == 0) r += i + n/i ;
    }
    if (n != 0 and n != 1) return (r == n) ;
    else return false ;

}

int main () {}