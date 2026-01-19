#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool containsAllDigits(const vector<char>& sub) {

    set<char> digits(sub.begin(), sub.end()) ;

    if (digits.size() != 9) return false ;
    for (char c = '1' ; c <= '9' ; ++c) {
        if (digits.find(c) == digits.end()) return false ;
    }
    return true ;
}

void calcula(const vector<vector<char>>& mat, int n, int m) {

    int subfilas_count = 0 , subcolumnas_count = 0 ;

    for (int i = 0 ; i < n ; ++i) {
        for (int j = 0 ; j <= m - 9 ; ++j) {
            vector<char> sub(mat[i].begin() + j, mat[i].begin() + j + 9) ;

            if (containsAllDigits(sub)) {
                ++subfilas_count ;
            }
        }
    }
    for (int j = 0 ; j < m ; ++j) {
        for (int i = 0 ; i <= n - 9 ; ++i) {
            vector<char> sub ;

            for (int k = 0 ; k < 9 ; ++k) {
                sub.push_back(mat[i+k][j]) ;
            }
            if (containsAllDigits(sub)) {
                ++subcolumnas_count ;
            }
        }
    }
    cout << subfilas_count << " " << subcolumnas_count << endl ;
}

int main() {

    int n , m ;

    while (cin >> n >> m) {
        vector<vector<char>> mat(n, vector<char>(m)) ;

        for (int i = 0 ; i < n ; ++i) {
            for (int j = 0 ; j < m ; ++j) {
                cin >> mat[i][j] ;
            }
        }
        calcula(mat, n, m) ;
    }
}