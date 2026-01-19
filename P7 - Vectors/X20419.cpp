#include <iostream>
#include <vector>
#include <string>
using namespace std;

char lletra_mes_frequent(const string& paraula) {

    const int LONG_ALFABET = 'z' - 'a' + 1 ;
    vector<int> contador(LONG_ALFABET) ;

    for (int i = 0 ; i < paraula.size() ; ++i) {
        char lletra = paraula[i] ;
        ++contador[lletra - 'a'] ;
    }

    int max = 0 ;
    char lletra_frequent = ' ' ;

    for (int i = 0 ; i < LONG_ALFABET ; ++i) {
        if (contador[i] > max) {
            max = contador[i] ;
            lletra_frequent = char(i + 'a') ;
        }
    }
    return lletra_frequent ;
}

int main () {

    cout.setf(ios::fixed);
    cout.precision(2);

    int n ;
    cin >> n ;
    vector<string> v(n) ;
    int sum = 0 , cont = 0 ;

    for (int i = 0 ; i < n ; ++i) {
        cin >> v[i] ;
        string paraula = v[i] ;
        sum = sum + paraula.size() ;
        ++cont ;
    }
    cout << sum/double(cont) << endl ;

    for (int i = 0 ; i < n ; ++i) {
        string paraula = v[i] ;

        if (paraula.size() >= sum/double(cont)) {
            cout << paraula << ": " << lletra_mes_frequent(paraula) << endl ;
        }
    }
}