#include <iostream>
using namespace std;

int main () {

    int n ;
    cin >> n ;
    bool creixent = true ;

    for (int i = 0 ; i < n and creixent ; ++i) {
        double anterior , actual ;
        cin >> actual ;
        anterior = actual ;
        
        while (actual != -1 and creixent) {
            if (anterior > actual) creixent = false ;
            anterior = actual ;
            cin >> actual ;
        }
    }
    if (creixent) cout << "Si" ;
    else cout << "No" ;
    cout << endl ;
}