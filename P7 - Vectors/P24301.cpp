#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2) {

    int size = v1.size() + v2.size() ;
    vector<int> v_concatenacio(size) ;

    for (int i = 0 ; i < v1.size() ; ++i) {
        v_concatenacio[i] = v1[i] ;
    }
    for (int i = 0 ; i < v2.size() ; ++i) {
        v_concatenacio[i + v1.size()] = v2[i] ;
    }
    return v_concatenacio ;
}

int main () {}