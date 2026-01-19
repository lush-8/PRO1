#include <iostream>
#include <vector>
using namespace std;

struct Punt {
    double x, y;
};

bool prop1(const vector<Punt>& v) {

    int cont = 0 ;

    for (int i = 0 ; i < v.size()-1 ; ++i) {
        if (v[i].x != v[i+1].x or v[i].y != v[i+1].y) ++cont ;
    }
    return cont > 1 ;
}

bool prop2(const vector<Punt>& v) {

    Punt p ;
    p.x = p.y = 0 ;

    for (int i = 0 ; i < v.size() ; ++i) {
        p.x += v[i].x ;
        p.y += v[i].y ;
    }
    return p.x == p.y ;
}

bool barycenter(const vector<Punt>& v, Punt& b) {

    int n = v.size() ;

    for (int i = 0 ; i < n ; ++i) {
        if (v[i].x == b.x and v[i].y == b.y) return false ;
    }
    return true ;
}

int main () {

    cout.setf(ios::fixed);
    cout.precision(2);

    int n ;

    while (cin >> n) {
        vector<Punt> v(n) ;
        Punt b ;
        b.x = b.y = 0 ;

        for (int i = 0 ; i < n ; ++i) {
            cin >> v[i].x >> v[i].y ;
            b.x += v[i].x ;
            b.y += v[i].y ;
        }
        Punt baricenter ;
        baricenter.x = b.x/n ;
        baricenter.y = b.y/n ;
        cout << "baricentre: (" << baricenter.x << "," << baricenter.y << ")" << endl ;

        if (not prop1(v)) cout << "el vector no compleix la propietat 1" << endl ;
        else {
            if (not prop2(v)) cout << "el vector no compleix la propietat 2" << endl ;
            else {
                if (not barycenter(v, baricenter)) cout << "el vector no compleix la propietat 3" << endl ;
                else cout << "vector normalitzat" << endl ;
            }
        }
    }
}