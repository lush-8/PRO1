#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Point {
    int x, y;
};

typedef vector<Point> VPoint;

// Afegiu funcions auxiliars si voleu.
// ...

int distancia_quadrada(const Point& a, const Point& b) {

    return (a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y) ;
}

// Pre:  v conté com a mínim un punt.
//       d >= 1
// Post: Retorna el nombre de parelles de punts que apareixen consecutivament a v,
//       i tals que la distància entre ells és menor o igual a d.
int compute(VPoint &v, int distance) {
    
    int n = v.size() ;
    int cont = 0 ;
    distance *= distance ;

    for (int i = 1 ; i < n ; ++i) {
        if (distancia_quadrada(v[i-1], v[i]) <= distance) ++cont ;
    }
    return cont ;
}

int main() {

    int n , d ;

    while (cin >> n >> d) {
        VPoint v(n) ;

        for (int i = 0 ; i < n ; ++i) cin >> v[i].x >> v[i].y ;
        cout << compute(v, d) << endl ;
    }
}