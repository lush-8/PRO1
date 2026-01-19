#include <vector>
using namespace std;

// Pre:  Let n be v.size(). Then n >= 3 and for all i in {0..n-1}, v[i] >= 0.
//       Also, there exists i in {1..n-2} such that v[0..i] is strictly increasing and
//                                                  v[i..n-1] is strictly decreasing.
// Post: Returns the maximum value of v.
int summitOfMountain(const vector<int> &v) {

    int left = 0 , right = v.size() - 1 ;

    while (left < right) {
        int mid = (left + right)/2 ;

        if (v[mid] < v[mid+1]) left = mid + 1 ;
        else right = mid ;
    }
    return v[left] ;
}