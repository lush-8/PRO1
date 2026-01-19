#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Person {
    string name;
    int money;
};

typedef vector<Person> VPerson;

// Pre:  v conté com a mínim una persona.
//       Totes les persones tenen name no buit i money major o igual a 0.
// Post: namemax conté el nom de la persona amb màxim nombre de diners.
//       En cas que hi hagi més d'un màxim, namemax conté el nom de la primera persona amb màxim nombre de diners.
//       nummax conté quantes persones tenen màxim nombre de diners.
void compute(const VPerson &v, string &namemax, int &nummax)
{
    int max = v[0].money ;
    namemax = v[0].name ;
    nummax = 1 ;

    for (int i = 1 ; i < v.size() ; ++i) {
        if (v[i].money > max) {
            max = v[i].money ;
            namemax = v[i].name ;
            nummax = 1 ;
        }
        else if (v[i].money == max) ++nummax ;
    }
}

int main()
{
    int n;
    while (cin >> n) {
        VPerson v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i].name >> v[i].money;
        string namemax;
        int nummax;
        compute(v, namemax, nummax);
        cout << namemax << " " << nummax << endl;
    }
}