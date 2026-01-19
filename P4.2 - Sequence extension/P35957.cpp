#include <iostream>
using namespace std;

int main () {

    int n , a , num ;
    int pos = 1 ;
    bool guanyador = false ;
    cin >> n ;
    n = 2*n ;
    cin >> a ;
    int j = 1 ;
    int k = 0 ;

    while (a/j != 0) {
        j = j*10 ;
        ++k ;
    }
    if (k%2 != 0 or a == 0) {
        k = k/2 ;
        for (int i = 0 ; i < k ; ++i) a = a/10 ;
        a = a%10 ;
    }
    else guanyador = true ;
    
    while (pos < n and not guanyador) {
        cin >> num ;
        int j2 = 1 ;
        int k2 = 0 ;

        while (num/j2 != 0) {
            j2 = j2*10 ;
            ++k2 ;
        }
        if (k2%2 != 0 or num == 0) {
            k2 = k2/2 ;
            for (int i = 0 ; i < k2 ; ++i) num = num/10 ;
            if (a != num%10) guanyador = true ;
        }
        else guanyador = true ;
        ++pos ;
    }
    if (guanyador and pos%2 == 0) cout << "A" << endl ;
    else if (guanyador and pos%2 != 0) cout << "B" << endl ;
    else cout << "=" << endl ;
}