#include <iostream>
using namespace std;

bool es_creixent(int n) {

    if (n <= 9) return true ;
    if (n%10 >= (n/10)%10) return es_creixent(n/10) ;
    return false ;
}

int main () {}