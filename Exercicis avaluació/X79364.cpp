#include <vector>
using namespace std;

int my_lower_bound(const vector<double>& v, double target) {

    int l = 0 ;
    int r = v.size() ;

    while (l < r) {
        int m = l + (r - l)/2 ;
        
        if (v[m] < target) l = m + 1 ;
        else r = m ;
    }
    return l ;
}

// Pre:  Sigui n el tamany v.size().
//       v està ordenat creixentment, és a dir, per a tot i de {0..n-2}, v[i]<=v[i+1].
//       Els valors de v estan entre 0 i 10, és a dir, per a tot i de {0..n-1}, 0<=v[i]<=10.
// Post: numA conté el nombre de valors x de v que cumpleixen 9<=x<=10.
//       numB conté el nombre de valors x de v que cumpleixen 7<=x<9.
//       numC conté el nombre de valors x de v que cumpleixen 5<=x<7.
//       numD conté el nombre de valors x de v que cumpleixen 0<=x<5.
void classify(const vector<double> &v, int &numA, int &numB, int &numC, int &numD) {

    int n = v.size() ;

    if (not n) {
        numA = numB = numC = numD = 0 ;
        return ;
    }
    int pos5 = my_lower_bound(v, 5.0) ;
    int pos7 = my_lower_bound(v, 7.0) ;
    int pos9 = my_lower_bound(v, 9.0) ;
    numA = n - pos9 ;
    numB = pos9 - pos7 ;
    numC = pos7 - pos5 ;
    numD = pos5 ;
}