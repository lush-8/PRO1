#include <iostream>
using namespace std;

void llegir_i_escriure_inversament() {

    string paraula ;
    cin >> paraula ;

    if (paraula != "fi") {
        llegir_i_escriure_inversament() ;
        cout << paraula << endl ;
    }
}

int main () {

    llegir_i_escriure_inversament() ;
}