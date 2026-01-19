#include <iostream>
#include <vector>
using namespace std;

struct Coord {
    int x , y ;
};

Coord seguentD(const Coord& p, int n) {

    if (p.x == 0 or p.y == n - 1) {
        if (p.x == n - 1 and p.y == n - 1) {
            return {0, 0} ;
        }
        if (p.x == 0 and p.y == n - 1) {
            return {p.y, p.x + 1} ;
        }
        if (p.x == 0) {
            return {p.y + 1, p.x} ;
        }
        else return {p.y, p.x + 1} ;
    }
    else return {p.x - 1, p.y + 1} ;
}

vector<vector<char>> llegir_mat(int n) {

    vector<vector<char>> mat(n, vector<char>(n)) ;

    for (int i = 0 ; i < n ; ++i) {
        for (int j = 0 ; j < n ; ++j) {
            cin >> mat[i][j] ;
        }
    }
    return mat ;
}

string descodificar(const vector<vector<char>>& mat, int jumps, int chars, int i_inicial, int j_inicial) {

    string result ;
    result.push_back(mat[i_inicial][j_inicial]) ;
    --chars ;
    Coord actual ;
    actual.x = i_inicial ;
    actual.y = j_inicial ;

    while (chars != 0) {
        int n_jumps = jumps ;
        actual = seguentD(actual, mat.size()) ;

        while (n_jumps != 0) {
            actual = seguentD(actual, mat.size()) ;
            --n_jumps ;
        }
        char c = mat[actual.x][actual.y] ;
        result.push_back(c) ;
        --chars ;
    }
    return result ;
}

int main () {

    int n , jumps , chars , i_inicial , j_inicial ;

    while (cin >> n >> jumps >> chars >> i_inicial >> j_inicial) {
        vector<vector<char>> mat = llegir_mat(n) ;
        string missatge = descodificar(mat, jumps, chars, i_inicial, j_inicial) ;
        int size = missatge.size() ;

        for (int i = 0 ; i < size ; ++i) {
            if (missatge[i] == 'X' and i + 1 < size and missatge[i+1] == 'X') {
                cout << ' ' ;
                ++i ;
            }
            else cout << missatge[i] ;
        }
        cout << endl ;
    }
}