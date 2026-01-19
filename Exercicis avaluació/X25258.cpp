#include <iostream>
using namespace std;

int main () {
    
    int n ;
    cin >> n ;
    cin.get() ;
    const int len = 2 * n;
    char* window = new char[len] ;
    
    for (int i = 0 ; i < len ; ++i) {
        char c = cin.get() ;
        
        if (c == EOF) {
            delete[] window ;
            cout << "0 0" << endl ;
            return 0 ;
        }
        window[i] = c ;
    }
    int count_anbn = 0 ;
    int count_bnan = 0 ;
    
    while (true) {
        bool is_anbn = true ;
        
        for (int i = 0 ; i < n and is_anbn ; ++i) if (window[i] != 'a') is_anbn = false ;
        for (int i = n ; i < 2*n and is_anbn ; ++i) if (window[i] != 'b') is_anbn = false ;
        count_anbn += is_anbn ;
        bool is_bnan = true ;

        for (int i = 0 ; i < n and is_bnan ; ++i) if (window[i] != 'b') is_bnan = false ;
        for (int i = n ; i < 2*n and is_bnan ; ++i) if (window[i] != 'a') is_bnan = false ;
        count_bnan += is_bnan ;
        char c = cin.get() ;

        if (c == EOF) break ;
        for (int i = 0 ; i < len - 1 ; ++i) window[i] = window[i + 1] ;
        window[len - 1] = c ;
    }
    cout << count_anbn << ' ' << count_bnan << endl ;
    delete[] window ;
}