#include <iostream>
using namespace std;

void read_rational(int& num, int& den) {

    int aux_num , aux_den ;
    char c ;
    cin >> num >> c >> den ;
    aux_num = num ;
    aux_den = den ;

    while (aux_den > 0) {
        int r = aux_num%aux_den ;
        aux_num = aux_den ;
        aux_den = r ;
    }
    num = num/aux_num ;
    den = den/aux_num ;
}

int main () {}