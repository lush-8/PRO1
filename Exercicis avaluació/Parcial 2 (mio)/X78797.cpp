#include <iostream>
using namespace std;

int main() {
    
    int height , width ;
    
    while (cin >> height >> width) {
        bool asc = true ;
        int line_count = 0 ;
        int number_of_chars = width/2 ;
        int previous_stars = 0 ;
        int post_stars = number_of_chars ;
        
        for (int i = 0 ; i < height ; ++i) {
            for (int j = 0 ; j < previous_stars ; ++j) cout << '*' ;
            for (int k = 0 ; k < number_of_chars ; ++k) cout << '#' ;
            for (int l = 0 ; l < post_stars ; ++l) cout << '*' ;

            if (line_count < number_of_chars and asc) {
                ++previous_stars ;
                --post_stars ;
                ++line_count ;

                if (line_count == number_of_chars) {
                    line_count = 0 ;
                    asc = false ;
                }
            }
            else if (line_count < number_of_chars and not asc) {
                --previous_stars ;
                ++post_stars ;
                ++line_count ;

                if (line_count == number_of_chars) {
                    line_count = 0 ;
                    asc = true ;
                }
            }
            cout << endl ;
        }
        cout << endl ;
    }
}