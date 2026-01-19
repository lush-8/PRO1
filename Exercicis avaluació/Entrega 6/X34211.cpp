#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main () {

    int n ;
    cin >> n ;
    vector<int> vector(n) ;

    for (int i = 0 ; i < n ; ++i) cin >> vector[i] ;

    string line ;
    char operation ;

    while (cin >> line) {
        int sum_line = 0 ;

        for (int j = 0 ; j < n ; ++j) {
            operation = line[j] ;
            
            if (operation == '+') sum_line = sum_line + vector[j] ;
            else if (operation == '-') sum_line = sum_line - vector[j] ;
        }
        cout << sum_line << endl ;
    }
}