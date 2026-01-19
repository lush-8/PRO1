#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Paraula {
    string paraula;
    int freq;
};

bool ordenacion(const Paraula& a, const Paraula& b) {

    if (a.freq == b.freq) return a.paraula < b.paraula ;
    else return a.freq > b.freq ;
}

int main () {

    int n , k ;

    while (cin >> n >> k) {
        vector<Paraula> v(n) ;

        for (int i = 0 ; i < n ; ++i) cin >> v[i].paraula ;
        sort(v.begin(), v.end(), ordenacion) ;
        int cont = 1 ;

        for (int i = 1 ; i < n ; ++i) {
            if (v[i].paraula == v[i-1].paraula) ++cont ;
            else {
                v[i-1].freq = cont ;
                cont = 1 ;
            }
        }
        v[n-1].freq = cont ;
        sort(v.begin(), v.end(), ordenacion) ;

        for (int i = 0 ; i < k ; ++i) cout << v[i].paraula << endl ;
        cout << "----------" << endl ;
    }
}