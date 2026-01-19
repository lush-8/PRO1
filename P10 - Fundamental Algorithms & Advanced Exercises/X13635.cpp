#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track {
    string artist, title, genre;
    int year;
};

void read_tracks(int n, vector<Track>& songs) {

    for (int i = 0 ; i < n ; ++i) {
        cin >> songs[i].artist >> songs[i].title >> songs[i].genre >> songs[i].year ;
    }
}

void print_track(const Track &t) {
    
    cout << t.artist;
    cout << " (" << t.year;
    cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

bool ordenacion(const Track &a, const Track &b) {

    if (a.artist != b.artist) return a.artist < b.artist ;
    if (a.year != b.year) return a.year < b.year ;
    return a.title < b.title ;
}

int main() {

    int n ;
    cin >> n ;
    vector<Track> songs(n) ;
    read_tracks(n, songs) ;
    string genre ;

    while (cin >> genre) {
        vector<Track> output ;

        for (int i = 0 ; i < n ; ++i) {
            if (songs[i].genre == genre) output.push_back(songs[i]) ;
        }
        sort(output.begin(), output.end(), ordenacion) ;
        
        for (int i = 0 ; i < output.size() ; ++i) {
            print_track(output[i]) ;
        }
    }
}