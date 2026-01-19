#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

struct Slot {
    vector<string> listsubjects;
    vector<string> listteachers;
};

typedef vector<vector<Slot>> TableSlots;

void actualitzar_mat(string subject, string teacher, string day, int hi, int hf, TableSlots& taula) {

    int j = 0 ;

    if (day == "monday") j = 0 ;
    else if (day == "tuesday") j = 1 ;
    else if (day == "wednesday") j = 2 ;
    else if (day == "thursday") j = 3 ;
    else if (day == "friday") j = 4 ;

    for (int i = hi ; i < hf ; ++i) {
        taula[i][j].listsubjects.push_back(subject) ;
        taula[i][j].listteachers.push_back(teacher) ;
    }
}

void escriu_mat_subjects(const TableSlots& taula, int start, int end) {

    cout << "number of subjects per slot:" << endl ;
    cout << " h    monday   tuesday wednesday  thursday    friday" << endl ;

    int c = taula[0].size() ;

    for (int i = start ; i < end ; ++i) {
        if (i < 10) cout << " " << i ;
        else cout << i ;
        for (int j = 0 ; j < c ; ++j) {
            if (taula[i][j].listsubjects.size() >= 10000) {
                cout << "     " << taula[i][j].listsubjects.size() ;
            }
            else if (taula[i][j].listsubjects.size() < 10000 and taula[i][j].listsubjects.size() >= 1000) {
                cout << "      " << taula[i][j].listsubjects.size() ;
            }
            else if (taula[i][j].listsubjects.size() < 1000 and taula[i][j].listsubjects.size() >= 100) {
                cout << "       " << taula[i][j].listsubjects.size() ;
            }
            else if (taula[i][j].listsubjects.size() < 100 and taula[i][j].listsubjects.size() >= 10) {
                cout << "        " << taula[i][j].listsubjects.size() ;
            }
            else cout << "         " << taula[i][j].listsubjects.size() ;
        }
        cout << endl ;
    }
}

void escriu_mat_teachers(const TableSlots& taula, int start, int end) {
    
    cout << "number of teachers per slot:" << endl ;
    cout << " h    monday   tuesday wednesday  thursday    friday" << endl ;

    int c = taula[0].size() ;

    for (int i = start ; i < end ; ++i) {
        if (i < 10) cout << " " << i ;
        else cout << i ;
        for (int j = 0 ; j < c ; ++j) {
            const vector<string>& teachers = taula[i][j].listteachers ;
            set<string> unique_teachers ;

            for (int k = 0 ; k < teachers.size() ; ++k) {
                unique_teachers.insert(teachers[k]) ;
            }
            if (unique_teachers.size() >= 10000) {
                cout << "     " << unique_teachers.size() ;
            }
            else if (unique_teachers.size() < 10000 and unique_teachers.size() >= 1000) {
                cout << "      " << unique_teachers.size() ;
            }
            else if (unique_teachers.size() < 1000 and unique_teachers.size() >= 100) {
                cout << "       " << unique_teachers.size() ;
            }
            else if (unique_teachers.size() < 100 and unique_teachers.size() >= 10) {
                cout << "        " << unique_teachers.size() ;
            }
            else cout << "         " << unique_teachers.size() ;
        }
        cout << endl ;
    }
}

int calcula_conflictes(const TableSlots& taula, int start, int end) {

    int conflicts = 0 ;
    int c = taula[0].size() ;

    for (int i = start ; i < end ; ++i) {
        for (int j = 0 ; j < c ; ++j) {
            vector<string> teachers = taula[i][j].listteachers ;
            sort(teachers.begin(), teachers.end()) ;
            teachers.erase(unique(teachers.begin(), teachers.end()), teachers.end()) ;
            conflicts += taula[i][j].listteachers.size() - teachers.size() ;
        }
    }
    return conflicts ;
}

int main () {

    string subject , teacher , day ;
    int hi , hf ;
    TableSlots taula(24, vector<Slot>(5)) ;

    while (cin >> subject >> teacher >> day >> hi >> hf) {
        actualitzar_mat(subject, teacher, day, hi, hf, taula) ;
    }
    int f = taula.size() ;
    int c = taula[0].size() ;

    int start = 24 , end = 0 ;

    for (int i = 0 ; i < f ; ++i) {
        for (int j = 0 ; j < c ; ++j) {
            if (not taula[i][j].listsubjects.empty()) {
                start = min(start , i) ;
                end = max(end , i + 1) ;
            }
        }
    }
    escriu_mat_subjects(taula, start, end) ;
    escriu_mat_teachers(taula, start, end) ;
    cout << "number of replacements needed to avoid conflicts:" << endl ;
    cout << calcula_conflictes(taula, start, end) << endl ;
}