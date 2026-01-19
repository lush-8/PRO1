#include <vector>
using namespace std;

// Feu una funció recursiva eficient que retorni la posició on es troba x dins del subvector v[esq..dre]. 
// Si x no pertany a v[esq..dre] o si esq > dre, cal retornar -1.
// Precondició: el vector v està ordenat de forma estrictament creixent. A més, es té 0 ≤ esq ≤ mida de v i −1 ≤ dre < mida de v.
int posicio(double x, const vector<double>& v, int esq, int dre) {

    if (esq > dre) return -1 ;
    int meitat = (esq + dre)/2 ;

    if (x < v[meitat]) return posicio(x, v, esq, meitat - 1) ;
    else if (x > v[meitat]) return posicio(x, v, meitat + 1, dre) ;
    else return meitat ;
}

int posicio(double x, const vector<double>& v, int esq, int dre) {

    while (esq <= dre) {
        int meitat = (esq + dre)/2 ;

        if (x < v[meitat]) dre = meitat - 1 ;
        else if (x > v[meitat]) esq = meitat + 1 ;
        else return meitat ;
    }
    return -1 ;
}