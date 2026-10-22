#include <iostream>
using namespace std;

void hanoi(const int& n, char origen, char aux, char desti) {

    if (n) {
        hanoi(n - 1, origen, desti, aux) ;
        cout << origen << " => " << desti << endl ;
        hanoi(n - 1, aux, origen, desti) ;
    }
}

int main () {

    int n ;
    cin >> n ;
    hanoi(n, 'A', 'B', 'C') ;
}