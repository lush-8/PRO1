#include <iostream>
using namespace std;

bool primer(int a) {

    if (a <= 1) return false ;
    for (int i = 2 ; i*i <= a ; ++i) {
        if (a%i == 0) return false ;
    }
    return true ;
}

int main () {

    int a ;

    while (cin >> a and primer(a)) {
        bool next_primer = false ;

        while (not next_primer) {
            a = a + 1 ;
            next_primer = primer(a) ;
        }
        cout << a << endl ;
    }
}