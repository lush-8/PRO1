#include <iostream>
#include <vector>
using namespace std;

void printDouble(double d) {
    
    if (abs(d) < 1e-7) cout << 0.0;
    else cout << d;
}

struct Point {
    double x , y , z ;
};

struct Particle {
    Point p , v ;
    double m ;
};

// Pre:
// Post: returns the sum of p1 and p2.
Point sum(Point p1, Point p2) {

    Point p ;
    p.x = p1.x + p2.x ;
    p.y = p1.y + p2.y ;
    p.z = p1.z + p2.z ;
    return p ;
}

// Pre:
// Post: returns a times p.
Point mul(double a, Point p) {

    Point point ;
    point.x = a*p.x ;
    point.y = a*p.y ;
    point.z = a*p.z ;
    return point ;
}

int main () {

    ios::sync_with_stdio(false);
    cin.tie(0);    
    cout.setf(ios::fixed);
    cout.precision(5);

    int n , k ;

    while (cin >> n >> k) {
        double massa_total = 0 ;
        vector<Particle> vector_particles(n) ;
        Point sumatori_pos , sumatori_vel ;
        sumatori_pos.x = sumatori_pos.y = sumatori_pos.z = 0 ;
        sumatori_vel.x = sumatori_vel.y = sumatori_vel.z = 0 ;

        for (int i = 0 ; i < n ; ++i) {
            cin >> vector_particles[i].p.x >> vector_particles[i].p.y >> vector_particles[i].p.z ;
            cin >> vector_particles[i].v.x >> vector_particles[i].v.y >> vector_particles[i].v.z ;
            cin >> vector_particles[i].m ;
            massa_total = massa_total + vector_particles[i].m ;
            sumatori_pos = sum(sumatori_pos, mul(vector_particles[i].m, vector_particles[i].p)) ;
            sumatori_vel = sum(sumatori_vel, mul(vector_particles[i].m, vector_particles[i].v)) ;
        }
        Particle mass_center ;
        mass_center.p = mul(1.0/massa_total, sumatori_pos) ;
        mass_center.v = mul(1.0/massa_total, sumatori_vel) ;

        int t , t_total = 0 ;

        for (int i = 0 ; i < k ; ++i) {
            cin >> t ;
            mass_center.p = sum(mass_center.p, mul(t, mass_center.v)) ;
            printDouble(mass_center.p.x) ;
            cout << " " ;
            printDouble(mass_center.p.y) ;
            cout << " " ;
            printDouble(mass_center.p.z) ;
            cout << "\n" ;
            t_total = t_total + t ;
        }
        for (int i = 0 ; i < n ; ++i) {
            vector_particles[i].p = sum(vector_particles[i].p, mul(t_total, vector_particles[i].v)) ;
            printDouble(vector_particles[i].p.x) ;
            cout << " " ;
            printDouble(vector_particles[i].p.y) ;
            cout << " " ;
            printDouble(vector_particles[i].p.z) ; 
            cout << "\n" ;
        }
        cout << "\n" ;
    }
}