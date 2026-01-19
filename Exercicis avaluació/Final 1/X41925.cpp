#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Person {
    int id ;
    string name ;
};

bool cmpId(const Person& a, const Person& b) {

    if (a.id != b.id) {
        return a.id < b.id ;
    }
    else return a.name < b.name ;
}

bool cmpName(const Person& a, const Person& b) {

    if (a.name != b.name) {
        return a.name < b.name ;
    }
    else return a.id < b.id ;
}

void calculate_repetitions(const vector<Person>& v, int id, string name, int temp_cont, int& repetitions) {

    for (int i = 0 ; i < v.size() ; ++i) {
        if (v[i].id == id and v[i].name == name) ++temp_cont ;
        else {
            repetitions += temp_cont*(temp_cont + 1)/2 ;
            temp_cont = 0 ;
            id = v[i].id ;
            name = v[i].name ;
        }
    }
    repetitions += temp_cont*(temp_cont + 1)/2 ;
}

void calculate_conflicts(const vector<Person>& v, int id, string name, int temp_cont, int& conflicts) {

    for (int i = 0 ; i < v.size() ; ++i) {
        if (v[i].id == id) ++temp_cont ;
        else {
            conflicts += temp_cont*(temp_cont + 1)/2 ;
            temp_cont = 0 ;
            id = v[i].id ;
            name = v[i].name ;
        }
    }
    conflicts += temp_cont*(temp_cont + 1)/2 ;
}

void calculate_coincidences(const vector<Person>& v, string name, int temp_cont, int& coincidences) {

    for (int i = 0 ; i < v.size() ; ++i) {
        if (v[i].name == name) ++temp_cont ;
        else {
            coincidences += temp_cont*(temp_cont + 1)/2 ;
            temp_cont = 0 ;
            name = v[i].name ;
        }
    }
    coincidences += temp_cont*(temp_cont + 1)/2 ;
}

int main () {

    int n ;

    while (cin >> n) {
        vector<Person> v(n) ;

        for (int i = 0 ; i < n ; ++i) {
            cin >> v[i].id >> v[i].name ;
        }
        sort(v.begin(), v.end(), cmpId) ;
        int repetitions = 0 , conflicts = 0 , coincidences = 0 ;
        int id = -1 ;
        string name = "" ;
        int temp_cont = 0 ;
        calculate_repetitions(v, id, name, temp_cont, repetitions) ;
        calculate_conflicts(v, id, name, temp_cont, conflicts) ;
        sort(v.begin(), v.end(), cmpName) ;
        calculate_coincidences(v, name, temp_cont, coincidences) ;
        conflicts -= repetitions ;
        coincidences -= repetitions ;
        cout << repetitions << ' ' << conflicts << ' ' << coincidences << endl ;
    }
}