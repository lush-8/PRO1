#include <iostream>
using namespace std;

int main () {

    cout.setf(ios::fixed);
    cout.precision(4);

    int n ;
    cin >> n ;

    for (int i = 1 ; i <= n ; ++i) {
        int m ;
        cin >> m ;

        double x , min = 0 , max = 0 , sum = 0 ;
        int cont = 0 ;

        for (int j = 1 ; j <= m ; ++j) {
            cin >> x ;

            if (j == 1) {
                min = x ;
                max = x ;
            }

            if (x < min) min = x ;
            if (x > max) max = x ;

            sum = sum + x ;
            ++cont ;
        }
        cout << min << " " << max << " " << sum/cont << endl ;
    }
}