#include <iostream>
#include <vector>
using namespace std;

int posicio_maxim(const vector<double>& v, int m) {

    int pos = 0 ;
    double max_value = v[0] ;

    for (int i = 0 ; i <= m ; ++i) {
        if (v[i] > max_value) {
            pos = i ;
            max_value = v[i] ;
        }
    }
    return pos ;
}

int main () {}