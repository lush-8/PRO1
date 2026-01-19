#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Punt {
    int x , y ;
};

int dist(const Punt& p) {

    return abs(p.x) + abs(p.y) ;
}

bool ordenacio(const Punt& p1, const Punt& p2) {

    int d1 = dist(p1) ;
    int d2 = dist(p2) ;

    if (d1 != d2) return d1 < d2 ;
    if (p1.x != p2.x) return p1.x < p2.x ;
    return p1.y < p2.y ;
}

int main () {

    int x , y , n , a , b ;
    cin >> x >> y >> n ;
    vector<Punt> v(n) ;

    for (int i = 0 ; i < n ; ++i) {
        cin >> a >> b ;
        v[i].x = a - x ;
        v[i].y = b - y ;
    }
    sort(v.begin(), v.end(), ordenacio) ;

    int d_pre = -1 ;

    for (int i = 0 ; i < n ; ++i) {
        int d = dist(v[i]) ;

        if (d > d_pre) {
            cout << "punts a distancia " << d << endl ;
            d_pre = d ;
        }
        cout << v[i].x + x << " " << v[i].y + y << endl ;
    }
}