#include <iostream>
using namespace std;

void descompon(int n, int& h, int& m, int& s) {

    h = n/3600 ;
    m = (n%3600)/60 ;
    s = n%60 ;
}

int main () {}