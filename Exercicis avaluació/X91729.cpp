#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> llegir_mat(char c) {

    vector<vector<char>> result(3, vector<char>(3)) ;
    result[0][0] = c ;

    for (int i = 0 ; i < 3 ; ++i) {
        if (i == 0) for (int j = 1 ; j < 3 ; ++j) cin >> result[i][j] ;
        else for (int j = 0 ; j < 3 ; ++j) cin >> result[i][j] ;
    }
    return result ;
}

bool is_valid(const vector<vector<char>>& mat) {

    int cont_diana = 0 ;

    for (int i = 0 ; i < 3 ; ++i) {
        for (int j = 0 ; j < 3 ; ++j) {
            if (mat[i][j] != '.' and mat[i][j] != 'X') return false ;
            if (mat[i][j] == 'X') ++cont_diana ;
        }
    }
    return cont_diana == 1 ;
}

bool is_diana(const vector<vector<char>>& mat) {

    return mat[1][1] == 'X' ;
}

int main () {

    char c ;

    while (cin >> c) {
        vector<vector<char>> mat = llegir_mat(c) ;

        if (is_valid(mat)) {
            if (is_diana(mat)) {
                cout << "Bona punteria!" ;
            }
            else cout << "Prova un altre cop..." ;
        }
        else cout << "ERROR: Diana il.legal!" ;
        cout << endl ;
    }
}