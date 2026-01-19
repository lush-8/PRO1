#include <iostream>
using namespace std;

int main () {

    int n ;

    while (cin >> n) {
        int aux = n ;
        int longitud = 0 ;

        while (aux != 0) {
            ++longitud ;
            aux /= 10 ;
        }
        int meitat_longitud = longitud/2 ;
        int meitat = 1 ;

        for (int i = 0 ; i < meitat_longitud ; ++i) {
            meitat *= 10 ;
        }
        int a = n/meitat ;
        int b = n%meitat ;
        int a_reversed = 0 ;

        while (a != 0) {
            a_reversed = a_reversed*10 + a%10 ;
            a /= 10 ;
        }
        cout << n << " -> " << a_reversed + b << endl ;
    }
}