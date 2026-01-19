#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Professor {
    string nom ;
    int caramel , pastanaga ;
};

bool ordenacio(Professor& a, Professor& b) {

    if (a.caramel == b.caramel) {
        if (a.pastanaga == b.pastanaga) {
            if (a.nom.size() == b.nom.size()) {
                return a.nom < b.nom ;
            }
            return a.nom.size() < b.nom.size() ;
        }
        return a.pastanaga > b.pastanaga ;
    }
    return a.caramel > b.caramel ;
}

int main () {

    int n ;
    cin >> n ;
    vector<vector<Professor>> v(n, vector<Professor>(0)) ;

    for (int i = 0 ; i < n ; ++i) {
        int p ;
        cin >> p ;
        v[i].resize(p) ;

        for (int j = 0 ; j < p ; ++j) {
            cin >> v[i][j].nom >> v[i][j].caramel >> v[i][j].pastanaga ;
        }
        sort(v[i].begin(), v[i].end(), ordenacio) ;
    }
    for (int i = 0 ; i < n ; ++i) {
        int p = v[i].size() ;

        for (int j = 0 ; j < p ; ++j) {
            cout << v[i][j].nom << endl ;
        }
        cout << endl ;
    }
}