#include <iostream>
using namespace std;

int main () {
    char c , c1=0 , c2=0 ;
    int cont_happy=0 , cont_sad=0 ;

    while (cin >> c) {
        if (c2==':' and c1=='-' and c==')') ++cont_happy ;
        else if (c2==':' and c1=='-' and c=='(') ++cont_sad ;
        else if (c2=='(' and c1=='-' and c==':') ++cont_happy ;
        else if (c2==')' and c1=='-' and c==':') ++cont_sad ;

        c2=c1 ;
        c1=c ;
    }
    cout << cont_happy << " " << cont_sad << endl ;
}