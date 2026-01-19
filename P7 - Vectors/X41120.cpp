#include <iostream>
#include <vector>
using namespace std;

// PRE: |v|≥ 3
// POST: retorna un vector amb l’alçada de tots els cims de v (en el mateix ordre)
vector<int> calcula_cims(const vector<int>& v) {

    int n = v.size() ;
    int cont_cims = 0 ;

    for (int i = 1 ; i < n - 1 ; ++i) {
        if (v[i-1] < v[i] and v[i] > v[i+1]) ++cont_cims ;
    }
    vector<int> v_cims(cont_cims) ;
    int pos = 0 ;
    
    for (int i = 1 ; i < n - 1 ; ++i) {
        if (v[i-1] < v[i] and v[i] > v[i+1]) {
            v_cims[pos] = v[i] ;
            ++pos ;
        }
    }
    return v_cims ;
}

int main () {

    int n ;
    cin >>  n ;
    vector<int> v(n) ;

    for (int i = 0 ; i < n ; ++i) cin >> v[i] ;
    
    vector<int> v_cims = calcula_cims(v) ;

    if (v_cims.size() == 0) cout << "0:" << endl << "-" << endl ;
    else {
        cout << v_cims.size() << ":" ;

        for (int i = 0 ; i < v_cims.size() ; ++i) cout << " " << v_cims[i] ;
        cout << endl ;

        bool first = true , found = false ;
        int last_peak = v_cims[v_cims.size()-1] ;

        for (int i = 0 ; i < v_cims.size()-1 ; ++i) {
            if (v_cims[i] > last_peak) {
                found = true ;
                
                if (first) {
                    cout << v_cims[i] ;
                    first = false ;
                }
                else cout << " " << v_cims[i] ;
            }
        }
        if (not found) cout << "-" ;
        cout << endl ;
    }
}