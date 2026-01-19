#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

int suma_linia(const Matriu& mat, int of, int oc, int df, int dc) {

    int sum = 0 ;

    if (oc == dc) {
        if (of < df) {
            for (int i = of+1 ; i <= df ; ++i) {
                sum = sum + mat[i][oc] ;
            }
        }
        else {
            for (int i = of-1 ; i >= df ; --i) {
                sum = sum + mat[i][oc] ;
            }
        }
    }
    else if (of == df) {
        if (oc < dc) {
            for (int j = oc+1 ; j <= dc ; ++j) {
                sum = sum + mat[of][j] ;
            }
        }
        else {
            for (int j = oc-1 ; j >= dc ; --j) {
                sum = sum + mat[of][j] ;
            }
        }
    }
    return sum ;
}

int main () {

    int f , c ;
    cin >> f >> c ;
    Matriu mat(f, vector<int>(c)) ;

    for (int i = 0 ; i < f ; ++i) {
        for (int j = 0 ; j < c ; ++j) {
            cin >> mat[i][j] ;
        }
    }
    int i1 , j1 , i2 , j2 ;
    cin >> i1 >> j1 ;
    int sum = mat[i1][j1] ;

    while (cin >> i2 >> j2) {
        sum = sum + suma_linia(mat, i1, j1, i2, j2) ;
        i1 = i2 ;
        j1 = j2 ;
    }
    cout << "suma = " << sum << endl ;
}