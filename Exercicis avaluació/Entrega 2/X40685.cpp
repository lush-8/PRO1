#include <iostream>
using namespace std;

int main () {
    int n1 , n2 , n3 , aux ;
    char operador ;
    string comparador ;

    while (cin >> n1 >> operador >> n2 >> comparador >> n3) {
        aux = 0;

        if (operador == '+') aux=n1+n2 ;
        else if (operador == '-') aux=n1-n2 ;
        else if (operador == '*') aux=n1*n2 ;

        bool ans = false ;

        if (comparador == "<") ans = aux < n3 ;
        else if (comparador == ">") ans = aux > n3 ;
        else if (comparador == "<=") ans = aux <= n3 ;
        else if (comparador == ">=") ans = aux >= n3 ;
        else if (comparador == "==") ans = aux == n3 ;
        else if (comparador == "!=") ans = aux != n3 ;

        if (ans == 1) cout << "true" << endl;
        else cout << "false" << endl;
    }
}