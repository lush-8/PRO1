#include <iostream>
#include <string>
using namespace std;

// Pre: c1,c2,c3 are pairwise different characters.
// Post: returns the number of triples (i1,i2,i3) such that 0<=i1<i2<i3<s.size() and
//       s[i1]=c1, s[i2]=c2, s[i3]=c3.
int numberSubsequences(const string &s, char c1, char c2, char c3) {
    
    int cont_c1 = 0 ;
    int cont_c2 = 0 ;
    int cont_c3 = 0 ;

    for (int i = 0 ; i < s.size() ; ++i) {
        char c = s[i] ;

        if (c == c3) cont_c3 = cont_c3 + cont_c2 ;
        else if (c == c2) cont_c2 = cont_c2 + cont_c1 ;
        else if (c == c1) ++cont_c1 ;
    }
    return cont_c3 ;
}

// Pre:
// Post: returns the number of triples (i1,i2,i3) such that 0<=i1<i2<i3<s.size() and
//       either s[i1]=':', s[i2]='-', s[i3]=')' or s[i1]='(', s[i2]='-', s[i3]=':'.
int numberHappySubsequences(const string &s) {

    int cont_happy = 0 ;

    cont_happy = cont_happy + numberSubsequences(s, ':', '-', ')') ;
    cont_happy = cont_happy + numberSubsequences(s, '(', '-', ':') ;

    return cont_happy ;
}

// Pre:
// Post: returns the number of triples (i1,i2,i3) such that 0<=i1<i2<i3<s.size() and
//       either s[i1]=':', s[i2]='-', s[i3]='(' or s[i1]=')', s[i2]='-', s[i3]=':'.
int numberSadSubsequences(const string &s) {

    int cont_sad = 0 ;

    cont_sad = cont_sad + numberSubsequences(s, ':', '-', '(') ;
    cont_sad = cont_sad + numberSubsequences(s, ')', '-', ':') ;

    return cont_sad ;
}

int main () {

    string line ;

    while (cin >> line) cout << numberHappySubsequences(line) << " " << numberSadSubsequences(line) << endl ;
}