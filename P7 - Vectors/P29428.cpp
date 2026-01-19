#include <iostream>
#include <vector>
using namespace std;

bool conte(string s1, string s2) {

    char first = s2[0] ;
    int n = s1.size() ;

    for (int i = 0 ; i < n ; ++i) {
        if (s1[i] == first) {
            int j = 0 ;

            while (j < s2.size() and s1[i+j] == s2[j]) {
                ++j ;
            }
            if (j == s2.size()) return true ;
        }
    }
    return false ;
}

int main () {

    int n ;
    cin >> n ;
    vector<string> v(n) ;

    for (int i = 0 ; i < n ; ++i) {
        cin >> v[i] ;
    }
    for (int i = 0 ; i < n ; ++i) {
        cout << v[i] << ":" ;

        for (int j = 0 ; j < n ; ++j) {
            if (conte(v[i], v[j])) cout << " " << v[j] ;
        }
        cout << endl ;
    }
}