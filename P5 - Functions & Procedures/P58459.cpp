#include <iostream>
using namespace std;

bool es_any_de_traspas(int any) {

    return any%4 == 0 and (any%100 != 0 or any%400 == 0) ;
}

int quants_dies(int m, int a) {

    if (m == 2) {
        if (es_any_de_traspas(a)) return 29 ;
        return 28 ;
    }
    else if (m == 4 or m == 6 or m == 9 or m == 11) return 30 ;
    else return 31 ;
}

bool es_data_valida(int d, int m, int a) {

    if (not (1 <= m and m <= 12)) return false ;
    return 1 <= d and d <= quants_dies(m, a) ;
}

int main () {}