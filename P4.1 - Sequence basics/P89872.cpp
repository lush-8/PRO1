#include <iostream>
using namespace std;

int main () {

    string max , second_max ;
    cin >> max >> second_max ;

    if (second_max > max) {
        string aux = max ;
        max = second_max ;
        second_max = aux ;
    }

    string next ;

    while (cin >> next) {
        if (next != max and next != second_max) {
            if (next > second_max and next > max) {
                second_max = max ;
                max = next ;
            }
            else if (next > second_max) second_max = next ;
            else if (max == second_max) second_max = next ;
        }
    }
    cout << second_max << endl ;
}