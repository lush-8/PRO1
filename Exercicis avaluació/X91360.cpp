#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> llegir_mat(int f, int c) {

    vector<vector<int>> result(f, vector<int>(c)) ;

    for (int i = 0 ; i < f ; ++i) {
        for (int j = 0 ; j < c ; ++j) {
            char n ;
            cin >> n ;
            result[i][j] = n - '0' ;
        }
    }
    return result ;
}

bool isMax(const vector<vector<int>>& mat, int i, int j) {

    int n = mat[i][j] ;

    if (n > mat[i-1][j-1] and n > mat[i-1][j] and n > mat[i-1][j+1]) {
        if (n > mat[i][j-1] and n > mat[i][j+1]) {
            if (n > mat[i+1][j-1] and n > mat[i+1][j] and n > mat[i+1][j+1]) {
                return true ;
            }
            else return false ;
        }
        else return false ;
    }
    else return false ;
}

int calcula(const vector<vector<int>>& mat) {

    int f = mat.size() ;
    int c = mat[0].size() ;
    int result = 0 ;

    for (int i = 0 ; i < f ; ++i) {
        for (int j = 0 ; j < c ; ++j) {
            if (i != 0 and i != f - 1 and j != 0 and j != c - 1) {
                if (isMax(mat, i, j)) ++result ;
            }
        }
    }
    return result ;
}

int main () {

    int f , c ;

    while (cin >> f >> c) {
        vector<vector<int>> mat = llegir_mat(f, c) ;
        cout << calcula(mat) << endl ;
    }
}