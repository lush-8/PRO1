#include <iostream>
using namespace std;

int main () {
    char c ;
    int cont_c=0 , cont_d=0 , result_d=0 ;
    bool found_a=false , found_d=false ;

    while (cin >> c) {

        if (c=='a') {
            found_a=true ;
            if (found_d) result_d = result_d + cont_d ;
            cont_d=0 ;
        }
        else if (c=='c') {
            if (found_a) ++cont_c ;
        }
        else if (c=='b') {
            found_a=false ;
            found_d=false ;
            cont_d=0 ;
        }
        else if (c=='d') {
            ++cont_d ;
            found_d=true ;
        }
    }
    cout << cont_c << " " << result_d << endl ;
}