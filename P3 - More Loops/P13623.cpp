#include <iostream>
using namespace std;

int main () {

    int f , c , sum_digits = 0 ;
    cin >> f >> c ;

    for (int i = 1 ; i <= f ; ++i) {
        for (int j = 1 ; j <= c ; ++j) {
            char n ;
            cin >> n ;

            if ((i+j)%2 == 0) sum_digits = sum_digits + n - '0' ;
        }
    }
    cout << sum_digits << endl ;
}