#include <iostream>
using namespace std;

int main () {
    char c ;
    int position=0 ;
    int contador_a=0 ;
    int contador_b=0 ;
    int contador_c=0 ;
    int contador_d=0 ;
    bool found=false ;

    while (cin >> c and found==false) {
        if (c=='a') ++contador_a ;
        else if (c=='b') ++contador_b ;
        else if (c=='c') ++contador_c ;
        else if (c=='d') ++contador_d ;
        ++position ;
        if (contador_a==2 or contador_b==2 or contador_c==2 or contador_d==2) found=true ;
    }
    if (contador_a==2) cout << "a " ;
    else if (contador_b==2) cout << "b " ;
    else if (contador_c==2) cout << "c " ;
    else if (contador_d==2) cout << "d " ;
    cout << position-1 << endl;
}