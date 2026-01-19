#include <iostream>
#include <vector>
using namespace std;

// Pre: Sigui n el tamany v.size(). Llavors, per a cada i a {0..n-2}, es compleix |v[i]-v[i+1]|<=2.
//      A més, només hi ha un i a {0..n-2} que compleixi |v[i]-v[i+1]|=1.
// Post: La funció retorna el i praticular que compleix |v[i]-v[i+1]|=1.
int positionDistance1(const vector<int> &v) {

    int n = v.size() ;
    int left = 0 , right = n - 1 ;

    while (left < right) {
        int mid = (left + right + 1)/2 ;
        
        if (v[mid]%2 == v[0]%2) {
            left = mid ;
        }
        else right = mid - 1 ;
    }
    return left ;
}

int main () {}