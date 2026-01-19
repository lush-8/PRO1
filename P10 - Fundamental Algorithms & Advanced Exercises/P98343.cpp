#include <iostream>
#include <vector>
#include <string>
using namespace std;

const vector<string> units = {"zero", "un", "dos", "tres", "quatre", "cinc", "sis", "set", "vuit", "nou"} ;
const vector<string> teens = {"deu", "onze", "dotze", "tretze", "catorze", "quinze", "setze", "disset", "divuit", "dinou"} ;
const vector<string> tens = {"", "deu", "vint", "trenta", "quaranta", "cinquanta", "seixanta", "setanta", "vuitanta", "noranta"} ;
const vector<string> hundreds = {"", "cent", "dos-cents", "tres-cents", "quatre-cents", "cinc-cents", "sis-cents", "set-cents", "vuit-cents", "nou-cents"} ;

string convertir_menor_que_mil(int n) {

    if (n < 10) return units[n] ;
    else if (n < 20) return teens[n-10] ;
    else if (n < 100) {
        if (n%10 == 0) return tens[n/10] ;
        else {
            if (21 <= n and n <= 29) return tens[n/10] + "-i-" + units[n%10] ;
            else return tens[n/10] + "-" + units[n%10] ;
        }
    }
    else if (n < 1000) {
        if (n%100 == 0) return hundreds[n/100] ;
        else if (n%100 < 10) return hundreds[n/100] + " " + units[n%100] ;
        else if (n%100 < 20) return hundreds[n/100] + "-" + teens[n%100-10] ;
        else if (n%10 == 0) return hundreds[n/100] + " " + tens[(n%100)/10] ;
        else {
            if (21 <= n%100 and n%100 <= 29) return hundreds[n/100] + " " + tens[(n%100)/10] + "-i-" + units[n%10] ;
            else return hundreds[n/100] + " " + tens[(n%100)/10] + "-" + units[n%10] ;
        }
    }
    return "" ;
}

string nombre_a_lletres(int n) {

    if (not n) return "zero" ;
    else {
        string result ;
        int mil_milions = n/1000000000 ;
        n %= 1000000000 ;
        int milions = n/1000000 ;
        n %= 1000000 ;
        int milers = n/1000 ;
        n %= 1000 ;
        int centenes = n ;

        if (mil_milions) {
            if (mil_milions == 1) result += "mil" ;
            else result += convertir_menor_que_mil(mil_milions) + " mil milions" ;
        }
        if (milions) {
            if (!result.empty()) result += " " ;
            if (milions == 1) result += "un milio" ;
            else result += convertir_menor_que_mil(milions) + " milions" ;
        }
        if (milers) {
            if (!result.empty()) result += " " ;
            if (milers == 1) result += "mil" ;
            else result += convertir_menor_que_mil(milers) + " mil" ;
        }
        if (centenes) {
            if (!result.empty()) result += " " ;
            result += convertir_menor_que_mil(centenes) ;
        }
        return result ;
    }
}

int main() {

    int n ;

    while (cin >> n) {
        cout << n << ": " << nombre_a_lletres(n) << "." << endl ;
    }
}