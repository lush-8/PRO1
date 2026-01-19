#include <iostream>
#include <vector>
using namespace std;

int main () {

    int n ;

    while (cin >> n) {
        int h = 4*(n/2) + 4 ;
        int w = n%2 ? 10*(n/2) + 7 : 10*(n/2) + 6 ;
        vector<vector<char>> m(h, vector<char>(w, ' ')) ;

        for (int i = h - 1 , j = 0 ; i >= 0 ; --i) {
            for (int k = 0 , pos = j ; k < n ; ++k) {
                m[i][pos] = 'A' ;
                ++pos ;
            }
            ++j ;
        }
        for (int i = h - 1 , j = w - 1 ; i >= 0 ; --i) {
            for (int k = 0 , pos = j ; k < n ; ++k) {
                m[i][pos] = 'A' ;
                --pos ;
            }
            --j ;
        }
        int pos = (n/2) + 1 ;

        for (int i = h - 1 - pos , count = 0 ; count < pos ; --i) {
            bool found1 = false ;
            bool found2 = false ;
            int prev ;

            for (int j = 0 ; j < w ; ++j) {
                if (found1 and m[i][j] == 'A' and j - prev > n) found2 = true ;
                if (found1 and not found2) m[i][j] = 'A' ;
                if (not found1 and not found2 and m[i][j] == 'A') {
                    found1 = true ;
                    prev = j ;
                }
            }
            ++count ;
        }
        for (int i = 0 ; i < h ; ++i) {
            bool found1 = false ;
            bool found2 = false ;

            for (int j = 0 ; not found2 and j < w ; ++j) {
                if (found1 and m[i][j] == ' ') found2 = true ;
                else cout << m[i][j] ;
                if (w/2 <= j and m[i][j] == 'A') found1 = true ;
            }
            cout << endl ;
        }
        cout << endl ;
    }
}