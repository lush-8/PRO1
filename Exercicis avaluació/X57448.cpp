#include <iostream>
using namespace std;

int main () {

    char x ;

    while (cin >> x) {
        int a , c , g , t ;
        a = c = g = t = 0 ;
        int max_a , max_c , max_g , max_t ;
        max_a = max_c = max_g = max_t = 0 ;
        int pos_a , pos_c , pos_g , pos_t ;
        pos_a = pos_c = pos_g = pos_t = 0 ;
        int pos = 0 ;

        while (x != '.') {
            ++pos ;

            if (x == 'A') {
                ++a ;

                if (a > max_a) {
                    max_a = a ;
                    pos_a = pos ;
                }
                c = 0 ;
                g = 0 ;
                t = 0 ;
            }
            else if (x == 'C') {
                ++c ;

                if (c > max_c) {
                    max_c = c ;
                    pos_c = pos ;
                }
                a = 0 ;
                g = 0 ;
                t = 0 ;
            }
            else if (x == 'G') {
                ++g ;

                if (g > max_g) {
                    max_g = g ;
                    pos_g = pos ;
                }
                a = 0 ;
                c = 0 ;
                t = 0 ;
            }
            else if (x == 'T') {
                ++t ;

                if (t > max_t) {
                    max_t = t ;
                    pos_t = pos ;
                }
                a = 0 ;
                c = 0 ;
                g = 0 ;
            }
            cin >> x ;
        }
        if (not max_a) cout << '"' << 'A' << '"' << " = " << max_a << ", " ;
        else cout << '"' << 'A' << '"' << " = " << max_a << '(' << pos_a - (max_a - 1) << "), " ;
        if (not max_c) cout << '"' << 'C' << '"' << " = " << max_c << ", " ;
        else cout << '"' << 'C' << '"' << " = " << max_c << '(' << pos_c - (max_c - 1) << "), " ;
        if (not max_g) cout << '"' << 'G' << '"' << " = " << max_g << ", " ;
        else cout << '"' << 'G' << '"' << " = " << max_g << '(' << pos_g - (max_g - 1) << "), " ;
        if (not max_t) cout << '"' << 'T' << '"' << " = " << max_t << endl ;
        else cout << '"' << 'T' << '"' << " = " << max_t << '(' << pos_t - (max_t - 1) << ')' << endl ;
    }
}