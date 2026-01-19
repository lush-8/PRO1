#include <iostream>
using namespace std;

// Pre: n >= 1
// Post: Returns 1-2+3-4+...+(-1)^(n+1)*n
int simpleAlternatedSum(int n) {

    if (n == 1) return 1 ;
    else {
        if (n%2 == 0) return -n + simpleAlternatedSum(n - 1) ;
        else return n + simpleAlternatedSum(n - 1) ;
    }
}