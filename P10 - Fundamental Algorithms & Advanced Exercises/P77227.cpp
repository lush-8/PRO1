#include <iostream>
#include <vector>
using namespace std;

string sortida(int p, vector<int>& v) {

    int size = v.size() ;
    vector<bool> aux(size, false) ;

    while (not aux[p]) {
        aux[p] = true ;

        if (v[p] > 0) {
            if (p + v[p] >= size) return "dreta" ;
            p = p + v[p] ;
        }
        else if (v[p] < 0) {
            if (p + v[p] < 0) return "esquerra" ;
            p = p + v[p] ;
        }
    }
    return "mai" ;
}

int main () {}