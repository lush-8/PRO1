#include <iostream>
#include <vector>
using namespace std;

const int ABC = 26 ;

int main () {

    int n ;
    cin >> n ;

    for (int i = 0 ; i < n ; ++i) {
        vector<int> alfabet(ABC, 0) ;
        char c ;

        while (cin >> c and c != '.') {
            if ('A' <= c and c <= 'Z') ++alfabet[c-'A'] ;
        }
        while (cin >> c and c != '.') {
            if ('A' <= c and c <= 'Z') --alfabet[c-'A'] ;
        }
        int j = 0 ;
        bool found = false ;

        while (not found and j < ABC) {
            if (alfabet[j] != 0) found = true ;
            else ++j ;
        }
        if (found) cout << "NO" << endl ;
        else cout << "SI" << endl ;
    }
}