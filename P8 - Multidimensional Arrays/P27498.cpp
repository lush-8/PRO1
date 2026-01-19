#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

void transposa(Matriu& m) {

    for (int i = 1 ; i < m.size() ; ++i) {
        for (int j = 0 ; j < i ; ++j) {
            int aux = m[i][j] ;
            m[i][j] = m[j][i] ;
            m[j][i] = aux ;
        }
    }
}

int main () {}