#include <iostream>
#include <vector>
using namespace std;

int avalua(const vector<int>& p, int x) {

    int sum = 0 ;

    for (int i = p.size()-1 ; i >= 1 ; --i) {
        sum = sum*x + p[i]*x;
    }
    return sum + p[0] ;
}

int main () {}