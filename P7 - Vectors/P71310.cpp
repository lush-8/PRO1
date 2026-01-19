#include <iostream>
#include <vector>
using namespace std;

double producte_escalar(const vector<double>& u, const vector<double>& v) {

    double prod_escalar = 0 ;

    for (int i = 0 ; i < u.size() ; ++i) prod_escalar += u[i]*v[i] ;
    return prod_escalar ;
}

int main () {}