#include <stdio.h>
#include <math.h>

struct Point {
    int x, y;
};

typedef struct Point Point;

// Afegiu funcions auxiliars si voleu.
// ...

int distancia_quadrada(const Point* a, const Point* b) {

    return (a->x - b->x)*(a->x - b->x) + (a->y - b->y)*(a->y - b->y) ;
}

// Pre:  v conté com a mínim un punt.
//       d >= 1
// Post: Retorna el nombre de parelles de punts que apareixen consecutivament a v,
//       i tals que la distància entre ells és menor o igual a d.
int compute(Point* v, int n, int distance)
{
    int cont = 0 ;
    distance *= distance ;

    for (int i = 1 ; i < n ; ++i) {
        if (distancia_quadrada(&v[i-1], &v[i]) <= distance) ++cont ;
    }
    return cont ;
}

int main()
{
    int n, d;
    while (scanf("%d %d", &n, &d) == 2) {
        Point v[n];
        for (int i = 0; i < n; i++)
            scanf("%d %d", &v[i].x, &v[i].y);
        printf("%d\n", compute(v, n, d));
    }
    return 0;
}