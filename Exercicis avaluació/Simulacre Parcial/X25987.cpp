#include <iostream>
using namespace std;

int main() {
    int n , digit_1 , digit_2 , digit_3 ;

    while (cin >> n) {
        int cont=0 ;
        
        while (n >= 100) {
            digit_1 = n%10 ;
            digit_2 = (n%100)/10 ;
            digit_3 = (n%1000)/100 ;

            if (digit_1 < digit_2 and digit_2 > digit_3) ++cont ;

            n=n/10 ;
        }
        cout << cont << endl ;
    }
}