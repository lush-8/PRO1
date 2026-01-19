#include <iostream>
#include <vector>
using namespace std;

vector<double> diferencia(const vector<double>& v1, const vector<double>& v2) {

    int size1 = v1.size() ;
    int size2 = v2.size() ;
    vector<double> aux(size1) ;
    int i , j , k ;
    i = j = k = 0 ;

    while (i < size1 and j < size2) {
        if (v1[i] < v2[j]) {
            if (k == 0 or v1[i] != aux[k-1]) {
                aux[k] = v1[i] ;
                ++k ;
            }
            ++i ;
        }
        else if (v1[i] > v2[j]) ++j ;
        else ++i ;
    }
    while (i < size1) {
        if (k == 0 or aux[k-1] != v1[i]) {
            aux[k] = v1[i] ;
            ++k ;
        }
        ++i ;
    }
    vector<double> dif(k) ;

    for (i = 0 ; i < k ; ++i) dif[i] = aux[i] ;
    return dif ;
}

int main () {}