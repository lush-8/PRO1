#include <iostream>
using namespace std;

void infoSequencia(int& max, int& lpos) {

    if (lpos > max) max = lpos ;
}

int main () {

    int n1 , n0 , c = 0 , p1 = 0 , max = 0 , n2 , p2 = 1 ;

    while (cin >> n1 and n1 != 0) {
        n0 = n1 ;
        infoSequencia(max, n0) ;
        ++c ;
        if (max == n0) p1 = c ;
    }
    while (cin >> n2 and n2 != max and n2 != 0) ++p2 ;

    cout << max << " " << p1 << " " ;
    if (n2 == max) cout << p2 << endl ;
    else cout << "-" << endl ;
}