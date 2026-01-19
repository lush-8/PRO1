#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Player {
    string name ;
    int level ;
    int wins ;
    int original_index ;
};

bool ordenacio(const Player& a, const Player& b) {

    return a.level > b.level ;
}

bool reordenacio(const Player& a, const Player& b) {

    return a.original_index < b.original_index ;
}

vector<Player> llegir_jugadors(int n) {

    vector<Player> result(n) ;

    for (int i = 0 ; i < n ; ++i) {
        result[i].original_index = i ;
        cin >> result[i].name >> result[i].level ;
    }
    return result ;
}

void calcular(int n, vector<Player>& v_rus, vector<Player>& v_usa) {

    sort(v_rus.begin(), v_rus.end(), ordenacio) ;
    sort(v_usa.begin(), v_usa.end(), ordenacio) ;
    int i = 0 , j = 0 ;

    while (i < n and j < n) {
        if (v_rus[i].level > v_usa[j].level) {
            v_rus[i].wins = 2*(n - j) ;
            ++i ;
        } 
        else if (v_rus[i].level < v_usa[j].level) {
            v_usa[j].wins = 2*(n - i) ;
            ++j ;
        } 
        else {
            int same_level_rus = 0 , same_level_usa = 0 ;

            while (i + same_level_rus < n and v_rus[i+same_level_rus].level == v_rus[i].level) {
                ++same_level_rus ;
            }
            while (j + same_level_usa < n and v_usa[j+same_level_usa].level == v_usa[j].level) {
                ++same_level_usa ;
            }
            for (int k = 0 ; k < same_level_rus ; ++k) {
                v_rus[i+k].wins = same_level_usa + 2*(n - j - same_level_usa) ;
            }
            for (int k = 0 ; k < same_level_usa ; ++k) {
                v_usa[j+k].wins = same_level_rus + 2*(n - i - same_level_rus) ;
            }
            i += same_level_rus ;
            j += same_level_usa ;
        }
    }
    while (i < n) {
        v_rus[i].wins = 0 ;
        ++i ;
    }
    while (j < n) {
        v_usa[j].wins = 0 ;
        ++j ;
    }
    sort(v_rus.begin(), v_rus.end(), reordenacio) ;
    sort(v_usa.begin(), v_usa.end(), reordenacio) ;
}

void escriu(const vector<Player>& v_rus, const vector<Player>& v_usa) {

    for (int i = 0 ; i < v_rus.size() ; ++i) {
        if (not i) cout << v_rus[i].name << ' ' << v_rus[i].wins ;
        else {
            cout << ' ' << v_rus[i].name << ' ' << v_rus[i].wins ;
        }
    }
    cout << endl ;

    for (int i = 0 ; i < v_usa.size() ; ++i) {
        if (not i) cout << v_usa[i].name << ' ' << v_usa[i].wins ;
        else {
            cout << ' ' << v_usa[i].name << ' ' << v_usa[i].wins ;
        }
    }
    cout << endl ;
}

int main () {

    int n ;

    while (cin >> n) {
        vector<Player> v_rus = llegir_jugadors(n) ;
        vector<Player> v_usa = llegir_jugadors(n) ;
        calcular(n, v_rus, v_usa) ;
        escriu(v_rus, v_usa) ;
        cout << endl ;
    }
}