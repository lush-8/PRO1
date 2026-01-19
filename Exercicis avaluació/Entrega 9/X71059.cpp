#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Programador {
    string nom ;
    int nivell ;
};

int main () {

    int membres_equip , n_israel , n_palestina ;

    while (cin >> membres_equip >> n_israel) {
        vector<Programador> pro_israel(n_israel) ;

        for (int i = 0 ; i < n_israel ; ++i) {
            cin >> pro_israel[i].nom >> pro_israel[i].nivell ;
        }
        cin >> n_palestina ;
        vector<Programador> pro_palestina(n_palestina) ;

        for (int i = 0 ; i < n_palestina ; ++i) {
            cin >> pro_palestina[i].nom >> pro_palestina[i].nivell ;
        }
        vector<string> equip(membres_equip) ;
        int pos_i = 0 , pos_p = 0 ;
        int cont_israel = 0 , cont_palestina = 0 ;

        for (int i = 0 ; i < (n_israel + n_palestina) ; ++i) {
            int index = i%membres_equip ;

            if (pos_p == n_palestina) {
                equip[index] = pro_israel[pos_i].nom ;
                ++pos_i ;
                ++cont_israel ;
            }
            else if (pos_i == n_israel) {
                equip[index] = pro_palestina[pos_p].nom ;
                ++pos_p ;
                ++cont_palestina ;
            }
            else if (pro_israel[pos_i].nivell > pro_palestina[pos_p].nivell) {
                equip[index] = pro_israel[pos_i].nom ;
                ++pos_i ;
                ++cont_israel ;
            }
            else if (pro_israel[pos_i].nivell < pro_palestina[pos_p].nivell) {
                equip[index] = pro_palestina[pos_p].nom ;
                ++pos_p ;
                ++cont_palestina ;
            }
            else if (pro_israel[pos_i].nivell == pro_palestina[pos_p].nivell) {
                if (cont_israel < cont_palestina) {
                    equip[index] = pro_israel[pos_i].nom ;
                    ++pos_i ;
                    ++cont_israel ;
                }
                else if (cont_israel > cont_palestina) {
                    equip[index] = pro_palestina[pos_p].nom ;
                    ++pos_p ;
                    ++cont_palestina ;
                }
                else {
                    if (pro_israel[pos_i].nom < pro_palestina[pos_p].nom) {
                        equip[index] = pro_israel[pos_i].nom ;
                        ++pos_i ;
                        ++cont_israel ;
                    }
                    else {
                        equip[index] = pro_palestina[pos_p].nom ;
                        ++pos_p ;
                        ++cont_palestina ;
                    }
                }
            }
            if ((i + 1)%membres_equip == 0) {
                sort(equip.begin(), equip.end()) ;
                cout << equip[0] ;
                
                for (int j = 1 ; j < membres_equip ; ++j) {
                    cout << " " << equip[j] ;
                }
                cout << endl ;
                cont_israel = 0 ;
                cont_palestina = 0 ;
            } 
        }
        cout << endl ;
    }
}