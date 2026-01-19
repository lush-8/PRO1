#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

void min_max(const Matriu& mat, int& minim, int& maxim) {

    maxim = minim = mat[0][0] ;
    int f = mat.size() ;
    int c = mat[0].size() ;

    for (int i = 0 ; i < f ; ++i) {
        for (int j = 0 ; j < c ; ++j) {
            if (mat[i][j] > maxim) maxim = mat[i][j] ;
            if (mat[i][j] < minim) minim = mat[i][j] ;
        }
    }
}

int main () {

    int f , c ;
    int max = 0 , min = 0 , dif = -1 ;
    int number = 0 ;
    int max_num = 0 ;

    while (cin >> f >> c) {
        Matriu m(f, vector<int>(c)) ;

        for (int i = 0 ; i < f ; ++i) {
            for (int j = 0 ; j < c ; ++j) {
                cin >> m[i][j] ;
            }
        }
        min_max(m, min, max) ;
        ++number ;

        if (max - min > dif) {
            dif = max - min ;
            max_num = number ;
        }
    }
    cout << "la diferencia maxima es " << dif << endl ;
    cout << "la primera matriu amb aquesta diferencia es la " << max_num << endl ;
}