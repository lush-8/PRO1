#include <iostream>
using namespace std;

int main() {

    int l , w , s ;

    while (cin >> l >> w >> s) {
        while (l > 0) {
            for (int j = 0 ; j <= s ; ++j) {
                if (l == 0) break ;
                int aux = j ;

                while (aux > 0) {
                    cout << ' ' ;
                    --aux ;
                }
                for (int k = 0 ; k < w ; ++k) {
                    cout << '*' ;
                }
                cout << endl ;
                --l ;
            }
            for (int i = s - 1 ; i > 0 ; --i) {
                if (l == 0) break ;
                int aux = i ;

                while (aux > 0) {
                    cout << ' ' ;
                    --aux ;
                }
                for (int k = 0 ; k < w ; ++k) {
                    cout << '*' ;
                }
                cout << endl ;
                --l ;
            }
        }
        cout << endl ;
    }
}