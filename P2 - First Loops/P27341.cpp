#include <iostream>
using namespace std;

int main () {

    int a , b , sum = 0 ;

    while (cin >> a >> b) {
        if (a <= b) {
            for (int i = a ; i <= b ; ++i) sum += i*i*i ;
        }
        cout << "suma dels cubs entre " << a << " i " << b << ": " << sum << endl ;
        sum = 0 ;
    }
}