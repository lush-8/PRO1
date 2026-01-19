#include <iostream>
#include <vector>
using namespace std;

int min(int a, int b) {

    if (a < b) return a ;
    return b ;
}

int main () {

    int n , m ;

    while (cin >> n >> m) {
        vector<vector<int>> mat(n, vector<int>(m)) ;

        for (int i = 0 ; i < n ; ++i) {
            for (int j = 0 ; j < m ; ++j) {
                char c ;
                cin >> c ;
                mat[i][j] = c - '0' ;
            }
        }
        int result = 0 ;
        vector<vector<int>> dp(n, vector<int>(m)) ;

        for (int i = 0 ; i < n ; ++i) {
            for (int j = 0 ; j < m ; ++j) {
                if (i == 0 or j == 0 or (mat[i-1][j] != mat[i][j]) or (mat[i][j-1] != mat[i][j]) or (mat[i-1][j-1] != mat[i][j])) dp[i][j] = 1 ;
                else {
                    dp[i][j] = min(dp[i-1][j], dp[i][j-1]) ;
                    dp[i][j] = min(dp[i][j], dp[i-1][j-1]) ;
                    dp[i][j] += 1 ;
                }
                result += dp[i][j] ;
            }
        }
        cout << result << endl ;
    }
}