#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool es_palindrom(const string& s) {

    int i = 0 ;
    int j = s.size() ;
    bool is_palindrome = true ;

    while (i < j - i - 1 and is_palindrome) {
        if (s[i] != s[j - i - 1]) is_palindrome = false ;
        else ++i ;
    }
    return is_palindrome ;
}

int main () {}