#include <vector>
#include <cmath>
using namespace std;

// Pre: Let n be v.size(). n>=2 and d>=0 and |v[0]-v[1]| < |v[1]-v[2]| < ... < |v[n-2]-v[n-1]|
// Post: If there exists i in {0..n-2} holding |v[i]-v[i+1]| = d, then the function returns this i.
//       Otherwise, it returns -1.
int findDistance(int d, const vector<int> &v) {

    int left = 0 ;
    int right = v.size() - 2 ;
    int result = -1 ;

    while (left <= right) {
        int mid = left + (right - left)/2 ;

        if (abs(v[mid] - v[mid+1]) == d) {
            result = mid ;
            right = mid - 1 ;
        }
        else if (abs(v[mid] - v[mid+1]) < d) {
            left = mid + 1 ;
        }
        else right = mid - 1 ;
    }
    return result ;
}