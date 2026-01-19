#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector<int> v ;
    int n ; 

    while (cin >> n) v.push_back(n) ;
    int pendent_up = 0, length_up = 0, start_up = -1 ;
    int pendent_down = 0, length_down = 0, start_down = -1 ;
    
    for (int i = 0 ; i < v.size() - 1 ; ++i) {
        int d = v[i + 1] - v[i] ;

        if (not d) continue ;
        int length = 2 ;
        int j = i + 1 ;

        while (j + 1 < v.size() and v[j + 1] - v[j] == d) {
            ++length ;
            ++j ;
        }
        if (d > 0 and length >= 3 and length > length_up) {
            pendent_up = d ;
            length_up = length ;
            start_up = i ;
        }
        if (d < 0 and length >= 3 and length > length_down) {
            pendent_down = d ;
            length_down = length ;
            start_down = i ;
        }
        i = j - 1 ;
    }
    if (length_up) {
        cout << "/ " << start_up + 1 << ':' << pendent_up << ':' << length_up << endl ;
    }
    if (length_down) {
        cout << "\\ " << start_down + 1 << ':' << pendent_down << ':' << length_down << endl ;
    }
}