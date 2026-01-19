#include <vector>
using namespace std;

// Pre: Sigui n la mida v.size(). Llavors, n>=2.
//      A més, per a cada i a {0..n-2}, es cumpleix |v[i]-v[i+1]|<=1.
//      A més, hi ha exactament un i a {0..n-2} que cumpleix |v[i]-v[i+1]|=0.
// Post: La funció retorna el i particular a {0..n-2} que cumpleix |v[i]-v[i+1]|=0.
int positionDistance0(const vector<int>& v) {

    int l = 0 ;
    int r = v.size() - 2 ;

    while (l <= r) {
        int m = (l + r)/2 ;
        int diff = v[m] - v[l] ;
        int mov = m - l ;

        if (v[m] == v[m + 1]) return m ;
        else if ((diff%2 == 0 and mov%2 == 0) or (diff%2 != 0 and mov%2 != 0)) {
            l = m + 1 ;
        }
        else r = m - 1 ;
    }
    return -1 ;
}