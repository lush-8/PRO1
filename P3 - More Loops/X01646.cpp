#include <iostream>
using namespace std;

int main () {

    int b , n ;
    cin >> b ;

    while (cin >> n) {
        int n_inicial = n , digit , sum = 0 ;
        
        while (n > 0) {
            digit = n%b ; 
            sum = sum + digit ;
            n = n/b ;
        }
        cout << n_inicial << ": " << sum << endl ;
    }
}