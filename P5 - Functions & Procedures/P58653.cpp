#include <iostream>
using namespace std;

bool is_letter(const char& c) {

    return ('A' <= c and c <= 'Z') or ('a' <= c and c <= 'z') ;
}

bool is_vowel(const char& c) {

    return c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U' or c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' ;
}

bool is_consonant(const char& c) {

    return not is_vowel(c) ;
}

bool is_uppercase(const char& c) {

    return 'A' <= c and c <= 'Z' ;
}

bool is_lowercase(const char& c) {

    return 'a' <= c and c <= 'z' ; 
}

bool is_digit(const char& c) {

    return '0' <= c and c <= '9' ;
}

void escriu_linia(char c, string s, bool b) {

    cout << s << "('" << c << "') = " ;

    if (b) cout << "cert" << endl ;
    else cout << "fals" << endl ;
}

int main () {

    char c ;
    cin >> c ;
    escriu_linia(c, "lletra", is_letter(c)) ;
    escriu_linia(c, "vocal", is_vowel(c)) ;
    escriu_linia(c, "consonant", is_letter(c) and is_consonant(c)) ;
    escriu_linia(c, "majuscula", is_uppercase(c)) ;
    escriu_linia(c, "minuscula", is_lowercase(c)) ;
    escriu_linia(c, "digit", is_digit(c)) ;
}