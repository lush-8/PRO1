#include <iostream>
#include <vector>
using namespace std;

bool quadrat_magic(const vector<vector<int>>& t) {

    int size = t.size() ;
    int aux_comp = 0 ;

    for (int i = 0 ; i < size ; ++i) {
        aux_comp += t[i][0] ;
    }
    for (int i = 0 ; i < size ; ++i) {
        int sum = 0 ;

        for (int j = 0 ; j < size ; ++j) {
            sum += t[i][j] ;
        }
        if (sum != aux_comp) return false ;
    }
    for (int j = 0 ; j < size ; ++j) {
        int sum = 0 ;

        for (int i = 0 ; i < size ; ++i) {
            sum += t[i][j] ;
        }
        if (sum != aux_comp) return false ;
    }
    int i = 0 ;
    int j = 0 ;
    int sum = 0 ;

    while (i < size and j < size) {
        sum += t[i][j] ;
        ++i ;
        ++j ;
    }
    if (sum != aux_comp) return false ;

    i = size - 1 ;
    j = 0 ;
    sum = 0 ;

    while (i >= 0 and j < size) {
        sum += t[i][j] ;
        ++j ;
        --i ;
    }
    if (sum != aux_comp) return false ;

    for (int k = 1 ; k <= size*size ; ++k) {
        bool found = false ;

        for (i = 0 ; i < size and not found ; ++i) {
            for (j = 0 ; j < size and not found ; ++j) {
                if (not found and t[i][j] == k) found = true ;
            }
        }
        if (not found) return false ;
    }
    return true ;
}

int main () {}