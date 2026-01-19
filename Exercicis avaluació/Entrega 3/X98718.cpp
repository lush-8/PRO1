#include <iostream>
using namespace std;

int main() {
    char c , c_anterior1=0 , c_anterior2=0 ;
    int position=0 ;
    int cont_aaa=0 ;
    int cont_baa=0 ;
    int cont_aba=0 ;
    int cont_aab=0 ;
    int cont_bba=0 ;
    int cont_abb=0 ;
    int cont_bab=0 ;
    int cont_bbb=0 ;
    bool found=false ;

    while (cin >> c and found==false) {
        if (c_anterior2=='a' and c_anterior1=='a' and c=='a') ++cont_aaa ;
        else if (c_anterior2=='b' and c_anterior1=='a' and c=='a') ++cont_baa ;
        else if (c_anterior2=='a' and c_anterior1=='b' and c=='a') ++cont_aba ;
        else if (c_anterior2=='a' and c_anterior1=='a' and c=='b') ++cont_aab ;
        else if (c_anterior2=='b' and c_anterior1=='b' and c=='a') ++cont_bba ;
        else if (c_anterior2=='a' and c_anterior1=='b' and c=='b') ++cont_abb ;
        else if (c_anterior2=='b' and c_anterior1=='a' and c=='b') ++cont_bab ;
        else if (c_anterior2=='b' and c_anterior1=='b' and c=='b') ++cont_bbb ;
        ++position ;

        if (cont_aaa==2 or cont_baa==2 or cont_aba==2 or cont_aab==2 or cont_bba==2 or cont_abb==2 or cont_bab==2 or cont_bbb==2) {
            found=true ;
            cout << c_anterior2 << c_anterior1 << c << " " << position-3 << endl ;
        }
        c_anterior2=c_anterior1 ;
        c_anterior1=c ;
    }
}