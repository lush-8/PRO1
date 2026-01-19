#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Pre: s is formed with three different characters c1,c2,c3, and is of the form c1...c1c2...c2c3...c3.
// Post: n1, n2, n3 are the number of occurrences of c1, c2, c3 in s, respectively.
void numberOccurrences(const string &s, int &n1, int &n2, int &n3) {

    int t_left , left = 0 ;
    int t_right , right = s.size() - 1 ;

    while (left < right) {
        int mid = left + (right - left)/2 ;

        if (s[mid] == s[s.size()-1]) right = mid ;
        else left = mid + 1 ;
    }
    t_left = left ;
    left = 0 ;
    right = s.size() - 1 ;

    while (left < right) {
        int mid = left + (right - left)/2 ;

        if (s[mid] == s[0]) left = mid + 1 ;
        else right = mid ;
    }
    t_right = left ;
    int d_right = s.size() - t_left ;
    int d_left = t_right ;
    n1 = d_right ;
    n2 = d_left ;
    n3 = s.size() - n1 - n2 ;
}

// Pre: s begins with one or more occurrences of a character c1, followed by one or more
//      occurrences of a character c2, followed by one or more occurrences of a character c3,
//      and there are no more characters in s.
//      moreover, either c1c2c3 = ":-)" or c1c2c3 = "(-:" or c1c2c3 = ":-(" or c1c2c3 = ")-:".
// Post: If c1c2c3 = ":-)" or c1c2c3 = "(-:", the function returns the number of happy subsequences.
//       If c1c2c3 = ":-(" or c1c2c3 = ")-:", the function returns the number of sad subsequences.
int numberHappyOrSadSubsequences(const string &s) {

    int n1 = 0 , n2 = 0 , n3 = 0 ;
    numberOccurrences(s , n1 , n2 , n3) ;
    return n1*n2*n3 ;
}

int main() {}