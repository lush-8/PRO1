#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Here you can add more includes if you wish.

using namespace std;

struct Activity {
  string name;
  int t1, t2; // t1<t2 must be satisfied for a correct activity
};

typedef vector<Activity> ListActivities;

// Auxiliary functions (you can add more functions if you wish)

// Pre:  The input contains a description of an activity with the format:
//
//       name t1 t2
//
//       where name is a non-empty string with lowercase letters and t1<t2
// Post: Returns the activity read from the input adapted to the format of struct Activity.
Activity readActivity()
{
  Activity a;
  cin >> a.name >> a.t1 >> a.t2;
  return a;
}

// Pre:  listactivities represents a list of correct activities
// Post: Prints all activities from first to last, one per line, and with the format:
//
//       name t1 t2
void printActivities(const ListActivities &listactivities)
{
  for (int i = 0; i < int(listactivities.size()); i++) {
    const Activity &a = listactivities[i];
    cout << a.name << " " << a.t1 << " " << a.t2 << endl;
  }
}

// Pre:  a, b represent correct activities.
// Post: Returns true iff the activities have a compatible timeline,
//       i.e. they do not overlap in time.
//       Note: if one of them finishes exactly when the other starts, then they are compatible.
bool compatibleActivities(Activity a, Activity b)
{
    if (a.t2 < b.t1) return true ;
    else if (b.t2 < a.t1) return true ;
    else if (a.t2 == b.t1 or b.t2 == a.t1) return true ;
    return false ;
}

// Pre:  a, b represent correct activities.
// Post: Returns true iff one of the following conditions holds:
//         - a starts strictly before b.
//         - a and b start at the same time but a finishes before b.
//         - a and b coincide in start and end time, but a has lexicographically-smaller name than b.
bool smallerActivity(Activity a, Activity b)
{
    if (a.t1 == b.t1) {
        if (a.t2 == b.t2) {
            return a.name < b.name ;
        }
        return a.t2 < b.t2 ;
    }
    return a.t1 < b.t1 ;
}

int main()
{
  ListActivities listactivities;
  string command;
  while (cin >> command) {
    if (command == "NEW") {
      listactivities.push_back(readActivity());
    } else if (command == "SORT") {
      sort(listactivities.begin(), listactivities.end(), smallerActivity);
    } else if (command == "PRINT") {
      cout << "Current list activities:" << endl;
      printActivities(listactivities);
      cout << endl;
    } else if (command == "CHECKCOMPATIBLE") {
      int i, j;
      cin >> i >> j;
      string namei = listactivities[i].name;
      string namej = listactivities[j].name;
      if (compatibleActivities(listactivities[i], listactivities[j]))
        cout << "Activities " << namei << " and " << namej << " are compatible" << endl;
      else
        cout << "Activities " << namei << " and " << namej << " are incompatible" << endl;
      cout << endl;
    }
  }
}