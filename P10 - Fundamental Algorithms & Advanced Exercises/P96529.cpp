#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool is_correct_sequence(string input) {

    vector<char> stack ;

    for (int i = 0 ; i < input.size() ; ++i) {
        char current = input[i] ;

        if (current == '[' or current == '(') {
            stack.push_back(current) ;
        }
        else {
            if (stack.size() == 0) return false ;
            else if (stack[stack.size()-1] == (current == ')' ? '(' : '[')) {
                stack.pop_back() ;
            }
            else return false ;
        }
    }
    return !stack.size() ;
}

int main () {

    string input ;

    while (cin >> input) {
        cout << (is_correct_sequence(input) ? "si" : "no") << endl ;
    }
}