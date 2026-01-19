#include <iostream>
using namespace std;

int cal(int month, int day) {

    return month*100 + day ;
}

string season(int calendar) {

    if (321 <= calendar and calendar <= 619) return "primavera" ;
    else if (620 <= calendar and calendar <= 921) return "estiu" ;
    else if (922 <= calendar and calendar <= 1221) return "tardor" ;
    else return "hivern" ;
}

int winter_year(int calendar, int year) {

    if (calendar < 321) return --year ;
    else return year ;
}

int main () {

    int date1 , date2 ;

    while (cin >> date1 >> date2) {
        int year1 =  date1/10000 ;
        int year2 = date2/10000 ;
        int month1 = date1%10000/100 ;
        int month2 = date2%10000/100 ;
        int day1 = date1%100 ;
        int day2 = date2%100 ;
        int calendar1 = cal(month1, day1) ;
        int calendar2 = cal(month2, day2) ;
        string season1 = season(calendar1) ;
        string season2 = season(calendar2) ;

        if (season1 == "hivern") year1 = winter_year(calendar1, year1) ;
        if (season2 == "hivern") year2 = winter_year(calendar2, year2) ;
        if (season1 == season2 and year1 == year2) {
            cout << "Iguals: " << season1 << " de " << year1 << endl ;
        }
        else cout << "Diferents: " << season1 << " de " << year1 << " i " << season2 << " de " << year2 << endl ;
    }
}