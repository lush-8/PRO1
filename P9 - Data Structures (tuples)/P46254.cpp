#include <iostream>
#include <cmath>
using namespace std;

struct Punt {
    double x , y ;
};

double distancia(const Punt& a, const Punt& b) {

    return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y)) ;
}

int main () {}