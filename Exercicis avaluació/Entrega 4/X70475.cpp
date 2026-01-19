#include <iostream>
using namespace std;

int main() {
    char c=0 , c1=0 , c2=0 ;
    int cont_happy=0 , cont_sad=0 ;
    
    while (cin >> c) {
        if (c=='-') {
            c2=c1 ;
            while (c=='-' and cin >> c) {
                if (c==':') {
                    if (c2=='(') ++cont_happy ;
                    else if (c2==')') ++cont_sad ;
                }
                
                if (c=='(') {
                    if (c2==':') ++cont_sad ;
                }
                
                if (c==')') {
                    if (c2==':') ++cont_happy ;
                }
            }
        }
        c2=c1 ;
        c1=c ;
    }
    cout << cont_happy << ' ' << cont_sad << endl ;
}