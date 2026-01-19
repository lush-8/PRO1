#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Rectangle {
    int x_esq, x_dre, y_baix, y_dalt ;
};

Rectangle interseccio(const Rectangle& r1, const Rectangle& r2) {

    Rectangle inter ;
    inter.x_esq = max(r1.x_esq, r2.x_esq) ;
    inter.x_dre = min(r1.x_dre, r2.x_dre) ;
    inter.y_baix = max(r1.y_baix, r2.y_baix) ;
    inter.y_dalt = min(r1.y_dalt, r2.y_dalt) ;
    return inter ;
}

bool es_interseccio_buida(const Rectangle& r) {

    return r.x_esq >= r.x_dre or r.y_baix >= r.y_dalt ;
}

int main() {

    int n ;

    while (cin >> n and n != 0) {
        vector<Rectangle> rectangles(n) ;

        for (int i = 0 ; i < n ; ++i) {
            cin >> rectangles[i].x_esq >> rectangles[i].x_dre >> rectangles[i].y_baix >> rectangles[i].y_dalt ;
        }
        Rectangle inter = rectangles[0] ;
        int i = 1 ;
        bool stop = false ;

        while (i < n and not stop) {
            inter = interseccio(inter, rectangles[i]) ;

            if (es_interseccio_buida(inter)) stop = true ;
            ++i ;
        }
        if (es_interseccio_buida(inter)) {
            cout << "interseccio buida" << endl ;
        } 
        else {
            cout << "punt inferior esquerre = (" << inter.x_esq << ", " << inter.y_baix << "); " ;
            cout << "punt superior dret = (" << inter.x_dre << ", " << inter.y_dalt << ")" << endl ;
        }
    }
}