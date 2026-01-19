#include <iostream>
using namespace std;

int main () {
    int spendings , savings , weeks_allowance ;
    cin >> spendings >> savings >> weeks_allowance ;
    int income = 0 ;
    int cont = 0 ;

    for (int i = 0 ; i < weeks_allowance ; ++i) {
        int allowance ;
        cin >> allowance ;
        income = income - spendings + allowance ;

        if (savings + income > 0) ++cont ;
    }
    cout << cont << endl ;
}