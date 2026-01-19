#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<vector<int>> llegir_mat(int f, int c) {

    vector<vector<int>> result(f, vector<int>(c)) ;

    for (int i = 0 ; i < f ; ++i) {
        for (int j = 0 ; j < c ; ++j) {
            char x ;
            cin >> x ;
            result[i][j] = x - '0' ;
        }
    }
    return result ;
}

bool AllDigits(const vector<vector<int>>& mat, int row, int col) {

    set<int> digits ;
    
    for (int i = row ; i < row + 3 ; ++i) {
        for (int j = col ; j < col + 3 ; ++j) {
            digits.insert(mat[i][j]) ;
        }
    }
    return digits.size() == 9 ;
}

int calcula(vector<vector<int>>& mat) {

    int cont = 0 ;
    int f = mat.size() ;
    int c = mat[0].size() ;

    for (int i = 0 ; i <= f - 3 ; ++i) {
        for (int j = 0 ; j <= c - 3 ; ++j) {
            if (AllDigits(mat, i, j)) ++cont ;
        }
    }
    return cont ;
}

int main () {

    int f , c ;

    while (cin >> f >> c) {
        vector<vector<int>> mat = llegir_mat(f, c) ;
        cout << calcula(mat) << endl ;
    }
}