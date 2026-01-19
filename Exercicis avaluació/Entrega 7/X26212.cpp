#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char>> Matriu;

void llegir_matriu(Matriu& matriu, int n, int m) {

    for (int i = 0 ; i < n ; ++i) {
        for (int j = 0 ; j < m ; ++j) cin >> matriu[i][j] ;
    }
}

int main () {

    int n , m ;

    while (cin >> n >> m) {

        Matriu matriu(n, vector<char>(m)) ;
        llegir_matriu(matriu, n, m) ;

        int cont_happy = 0 ;
        
        for (int i = 0 ; i < n ; ++i) {
            for (int j = 0 ; j < m ; ++j) {
                if (j-2 >= 0 and matriu[i][j-2] == ':' and matriu[i][j-1] == '-' and matriu[i][j] == ')') ++cont_happy ;
                else if (j-2 >= 0 and matriu[i][j-2] == '(' and matriu[i][j-1] == '-' and matriu[i][j] == ':') ++cont_happy ;
            }
        }
        for (int j = 0 ; j < m ; ++j) {
            for (int i = 0 ; i < n ; ++i) {
                if (i-2 >= 0 and matriu[i-2][j] == '"' and matriu[i-1][j] == '|' and matriu[i][j] == 'v') ++cont_happy ;
                else if (i-2 >= 0 and matriu[i-2][j] == '^' and matriu[i-1][j] == '|' and matriu[i][j] == '"') ++cont_happy ;
            }
        }
        cout << cont_happy << endl ;
    }
}