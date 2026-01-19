#include <iostream>
#include <vector>
using namespace std;

struct Assignatura {
    string nom;                 // Nom de l’assignatura
    double nota;                // Entre 0 i 10, -1 indica NP
};

struct Alumne {
    string nom;                 // Nom de l’alumne
    int dni;                    // DNI de l’alumne
    vector<Assignatura> ass;    // Llista d’assignatures de l’alumne
};

double nota(const vector<Alumne>& alums, int dni, string nom) {
    
    bool found = true ;
    
    for (int i = 0 ; i < alums.size() and found ; ++i) {
        Alumne alumne = alums[i] ;
        if (alumne.dni == dni) {
            for (int j = 0 ; j < alumne.ass.size() ; ++j) {
                if (alumne.ass[j].nom == nom and alumne.ass[j].nota >= 0)
                return alumne.ass[j].nota ;
	        }
	    found = false ;
	    }
    }
    return -1 ;
}

double mitjana(const vector<Assignatura>& ass) {
    
    double m = 0 ;
    int c = 0 ;
    
    for (int i = 0 ; i < ass.size() ; ++i) {
        if (ass[i].nota >= 0) {
            ++c ;
            m += ass[i].nota ;
	    }
    }
    return m/c ;
}

void compta(const vector<Alumne>& alums, int dni, string nom, int& com) {
    
    com = 0 ;
    double n = nota(alums, dni, nom) ;
  
    for (int i = 0 ; i < alums.size() ; ++i) {
        Alumne alumne = alums[i] ;
        
        if (mitjana(alumne.ass) > n) ++com ;
    }
}

int main () {
    
    int n ;
    cin >> n ;
    vector <Alumne> v(n) ;
    int j = 0 ;

    while (n--) {
        cin >> v[j].nom >> v[j].dni ;
        int ns ;
        cin >> ns ;
        int i = 0 ;
        vector <Assignatura> vs(ns) ;
        
        while (i < ns) {
            cin >> vs[i].nom >> vs[i].nota ;
            ++i ;
	    }
        v[j].ass = vs ;
        ++j ;
    }
    int i ;
    string s ;
    
    while (cin >> i >> s) {
        int c ;
        compta(v, i, s, c) ;
        cout << c << endl ;
    }
}