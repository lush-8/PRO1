#include <iostream>
using namespace std;

bool es_capicua(int n) {

    if (n < 0 or (n != 0 and n%10 == 0)) return false ;
    else {
        int half = 0 ;

        while (half < n) {
            half = half*10 + n%10 ;
            n = n/10 ;
        }
        return n == half or n == half/10 ;
    }
}

int main () {}