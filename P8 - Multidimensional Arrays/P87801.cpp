#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<pair<char, int>>> Matriu ;

Matriu llegir_mat(int f, int c) {

    Matriu result(f, vector<pair<char, int>>(c)) ;

    for (int i = 0 ; i < f ; ++i) {
        for (int j = 0 ; j < c ; ++j) {
            cin >> result[i][j].first ;
        }
    }
    return result ;
}

void assign_score(Matriu& mat) {

    int f = mat.size() ;
    int c = mat[0].size() ;

    for (int i = 0 ; i < f ; ++i) {
        for (int j = 0 ; j < c ; ++j) {
            cin >> mat[i][j].second ;
        }
    }
}

bool is_valid_vertical(const Matriu& mat, string paraula, int i, int j) {

    int n = paraula.size() ;

    for (int k = 0 ; k < n ; ++k) {
        if (mat[i+k][j].first != paraula[k]) return false ;
    }
    return true ;
}

bool is_valid_horizontal(const Matriu& mat, string paraula, int i, int j) {

    int n = paraula.size() ;

    for (int k = 0 ; k < n ; ++k) {
        if (mat[i][j+k].first != paraula[k]) return false ;
    }
    return true ;
}

int calculate_score(const Matriu& mat, string paraula) {

    int f = mat.size() ;
    int c = mat[0].size() ;
    int n = paraula.size() ;
    int max_score = -1 ;

    for (int i = 0 ; i < f ; ++i) {
        for (int j = 0 ; j < c ; ++j) {
            int temp_score = -1 ;

            if (i + n <= f and is_valid_vertical(mat, paraula, i, j)) {
                temp_score = 0 ;

                for (int k = 0 ; k < n ; ++k) temp_score += mat[i+k][j].second ;
                if (temp_score > max_score) max_score = temp_score ;
            }
            if (j + n <= c and is_valid_horizontal(mat, paraula, i, j)) {
                temp_score = 0 ;

                for (int k = 0 ; k < n ; ++k) temp_score += mat[i][j+k].second ;
                if (temp_score > max_score) max_score = temp_score ;
            }
        }
    }
    return max_score ;
}

int main () {

    int f , c ;

    while (cin >> f >> c) {
        Matriu mat = llegir_mat(f, c) ;
        assign_score(mat) ;
        int n ;
        cin >> n ;

        for (int i = 0 ; i < n ; ++i) {
            string paraula ;
            cin >> paraula ;
            int score = calculate_score(mat, paraula) ;

            if (score != -1) cout << score ;
            else cout << "no" ;
            cout << endl ;
        }
    }
}