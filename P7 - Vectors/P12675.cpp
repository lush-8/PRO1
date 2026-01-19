#include <iostream>
#include <vector>
using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y) {

    int size_1 = X.size() ;
    int size_2 = Y.size() ;
    int pos1 = 0 , pos2 = 0 , cont = 0 ;

    while (pos1 < size_1 and pos2 < size_2) {
        if (X[pos1] == Y[pos2]) {
            ++cont ;
            ++pos1 ;
            ++pos2 ;
        }
        else if (X[pos1] >= Y[pos2]) ++pos2 ;
        else ++pos1 ;
    }
    return cont ;
}

int main () {}