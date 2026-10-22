#include <iostream>
#include <vector>

using namespace std;

// Returns a vector of size n > 0 with n integer values read from cin.
vector<int> read_vector(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
       cin >> v[i];
    return v;
}

// Prints a vector of size n > 0 in the cout.
void print_vector(const vector<int>& v) {
    for (int i = 0 ; i < int(v.size()) ; ++i) {
        if (i>0) cout<<" ";
        cout<<v[i];
    }
    cout<<endl;
}

// add functions or procedures here if you need them

// see the statement of the problem
/*
vector<int> reorganize_vector(const vector<int>& v,int a,int b)
{
    // Write your implementation here.
    vector<int> w ;
    w.reserve(int(v.size())) ;

    for (const auto& x : v) {
        if (x < a) w.push_back(x) ;
    }
    for (const int& x : v) {
        if (a <= x and x <= b) w.push_back(x) ;
    }
    for (int i = 0 ; i < int(v.size()) ; ++i) {
        if (b < v[i]) {
            w.emplace_back(v[i]) ;
        }
    }
    return w ;
}
*/
vector<int> reorganize_vector(const vector<int>& v,int a,int b)
{
    // Write your implementation here.
    int n = v.size() ;
    int count_less = 0 ;
    int count_between = 0 ;

    for (const auto& x : v) {
        if (x < a) ++count_less ;
        else if (x <= b) ++count_between ;
    }
    int idx_less = 0 ;
    int idx_between = count_less ;
    int idx_greater = count_less + count_between ;
    vector<int> w(n) ;

    for (const int& x : v) {
        if (x < a) w[idx_less++] = x ;
        else if (x <= b) w[idx_between++] = x ;
        else w[idx_greater++] = x ;
    }
    return w ;
}

int main() {
    int n;
    while (cin >> n) {
         vector<int> v = read_vector(n);
         int a, b;
         cin >> a >> b;
         print_vector(reorganize_vector(v, a, b));
   }
}