#include <iostream>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        int impares = 0;
        int pares = 0;
        int contador_impares = 1;
        int contador_pares = 1;

        while (n > 0) {
            int digito = n % 10;
            
            if (digito % 2 == 0 and digito != 0) {
                pares = digito * contador_pares + pares;
                contador_pares = contador_pares * 10;
            } else if (digito != 0) {
                impares = digito * contador_impares + impares;
                contador_impares = contador_impares * 10;
            }
            n /= 10;
        }

        int resultado = impares * contador_pares + pares;

        cout << resultado << " " << resultado*2 << endl;
    }
}