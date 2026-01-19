#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> crear_mat(int n) {

    if (n == 1) {
        vector<vector<char>> mat(3, vector<char>(3, ' ')) ;
        mat[0][1] = '|' ;
        mat[1][0] = mat[1][2] = '-' ;
        mat[1][1] = 'O' ;
        mat[2][1] = '|' ;
        return mat ;
    }
    vector<vector<char>> prev_mat = crear_mat(n - 1) ;
    int prev_f = prev_mat.size() ;
    int prev_c = prev_mat[0].size() ;
    int f = 3*prev_f ;
    int c = 3*prev_c ;
    vector<vector<char>> mat(f, vector<char>(c, ' ')) ;

    for (int i = 0 ; i < 3 ; ++i) {
        for (int j = 0 ; j < 3 ; ++j) {
            if ((i == 1 and j == 1) or (i == 0 and j == 1) or (i == 2 and j == 1) or (i == 1 and j == 0) or (i == 1 and j == 2)) {
                for (int r = 0 ; r < prev_f ; ++r) {
                    for (int s = 0 ; s < prev_c ; ++s) {
                        mat[i*prev_f+r][j*prev_c+s] = prev_mat[r][s] ;
                    }
                }
            }
        }
    }
    return mat ;
}

void imprimir_mat(const vector<vector<char>>& mat) {

    int f = mat.size() ;
    int c = mat[0].size() ;

    for (int i = 0 ; i < f ; ++i) {
        cout << '|' ;

        for (int j = 0 ; j < c ; ++j) {
            cout << mat[i][j] ;
        }
        cout << '|' << endl ;
    }
}

int main() {

    int n ;
    cin >> n ;
    vector<vector<char>> mat = crear_mat(n) ;
    imprimir_mat(mat) ;
}