#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Enviament {
    string dni;
    string exer;
    int temps;
    string res;
};

struct Alumne {
    string dni;
    int num;
};

struct Resultats {
    Alumne env_verds;
    Alumne ex_verds;
    Alumne ex_verms;
    Alumne ex_in;
    Alumne max_temp;
};

typedef vector<Enviament> Historia;

void llegeix_env(Enviament& e) {

    cin >> e.dni >> e.exer >> e.temps >> e.res ;
}

void llegeix_historia(Historia& h) {

    for (int i = 0 ; i < h.size() ; ++i) llegeix_env(h[i]) ;
}

bool is_smaller(const Enviament& a, const Enviament& b) {

    if (a.dni == b.dni) return a.exer < b.exer ;
    return a.dni < b.dni ;
}

void actualitza_param(int intent, Alumne& actual, const string& alumneint) {

    if (intent > actual.num) {
        actual.dni = alumneint ;
        actual.num = intent ;
    }
}

void calcula_resultats(const Historia& h, Resultats& r) {

    int i = 0 ;
    r.env_verds.num = r.ex_verds.num = r.ex_verms.num = r.ex_in.num = r.max_temp.num = 0 ;

    while (i < h.size()) {
        string alumne = h[i].dni ;
        int auxenv_verds , auxex_verds , auxex_verms , auxex_in ;
        auxenv_verds = auxex_verds = auxex_verms = auxex_in = 0 ;

        while (i < h.size() and h[i].dni == alumne) {
            string exer = h[i].exer ;
            bool verd , groc , vermell ;
            verd = groc = vermell = false ;

            while (i < h.size() and h[i].dni == alumne and h[i].exer == exer) {
                if (h[i].res == "verd") {
                    ++auxenv_verds ;
                    verd = true ;
                }
                if (h[i].res == "groc") groc = true ;
                if (h[i].res == "vermell")vermell = true ;
                actualitza_param(h[i].temps, r.max_temp, alumne) ;
                ++i ;
            }
            if (verd) ++auxex_verds ;
            if (vermell and not verd and not groc) ++auxex_verms ;
            ++auxex_in ;
        }
        actualitza_param(auxenv_verds, r.env_verds, alumne) ;
        actualitza_param(auxex_verds, r.ex_verds, alumne) ;
        actualitza_param(auxex_verms, r.ex_verms, alumne) ;
        actualitza_param(auxex_in, r.ex_in, alumne) ;
    }
}

void pinta_al(const Alumne& a, const string& m1, bool pinta_num) {

    cout << m1 ;

    if (a.num != 0) {
        cout << a.dni ;

        if (pinta_num) cout << " (" << a.num << ")" ;
        cout << endl ;
    }
    else cout << "-" << endl ;
}

void escriu_resultats(const Resultats& r) {

    pinta_al(r.env_verds, "alumne amb mes enviaments verds:     ", true) ;
    pinta_al(r.ex_verds, "alumne amb mes exercicis verds:      ", true) ;
    pinta_al(r.ex_verms, "alumne amb mes exercicis vermells:   ", true) ;
    pinta_al(r.ex_in, "alumne amb mes exercicis intentats:  ", true) ;
    pinta_al(r.max_temp, "alumne que ha fet l'ultim enviament: ", false) ;
}

int main () {

    int n ;
    cin >> n ;
    Historia h(n) ;
    llegeix_historia(h) ;
    sort(h.begin(), h.end(), is_smaller) ;
    Resultats r ;
    calcula_resultats(h, r) ;
    escriu_resultats(r) ;
}