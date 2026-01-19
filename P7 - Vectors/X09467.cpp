#include <iostream>
#include <vector>
using namespace std;

vector<bool> pos_rampas(const vector<int>& V) {

    vector<bool> vec(V.size(), false) ;

    for (int i = 0 ; i < V.size()-2 ; ++i) {
        if (V[i] < V[i+1] and V[i+1] < V[i+2]) vec[i] = true ;
        else if (V[i] > V[i+1] and V[i+1] > V[i+2]) vec[i] = true ;
    }
    return vec ;
}

int pot_conflictives(const vector<bool>& B) {

    int cont = 0 ;

    for (int i = 0 ; i < B.size() ; ++i) {
        if (B[i] == true and B[i+1] == true and B[i+2] == true) cont = cont + 2 ;
        else if (B[i] == true and B[i+1] == true) ++cont ;
        else if (B[i] == true and B[i+2] == true) ++cont ;
    }
    return cont ;
}

int main () {

    int n ;

    while (cin >> n) {
        vector<int> v(n) ;

        for (int i = 0 ; i < n ; ++i) {
            cin >> v[i] ;
        }
        vector<bool> vec(n) ;
        vec = pos_rampas(v) ;
        cout << "posicions amb rampa:" ;

        for (int i = 0 ; i < vec.size() ; ++i) {
            if (vec[i] == true) cout << " " << i ;
        }
        cout << endl ;
        cout << "potencialment conflictives: " << pot_conflictives(vec) << endl ;
        cout << "---" << endl ;
    }
}