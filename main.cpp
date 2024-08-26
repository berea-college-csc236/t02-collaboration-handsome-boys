/*  T02: Collaboration Teamwork

    Have yov ever heard of rubber duck debugging?
    See https://en.wikipedia.org/wiki/Rubber_duck_debugging 
    Original code and ASCII art by Dr. Jan Pearce, Berea College

    Edits made by:
    TODO: <Sugarragchaa1> -- to be added by student 1
    TODO: <Add name of student 2 Here> -- to be added by student 2
    TODO: <Add name of student 3 Here> -- to be added by student 3 (if relevant otherwise, student 2 should remove this line)
 */
#include <iostream>
using namespace std;

int main() {

    string animal = 0;

    cout << " Have you ever hver heard of rubber duck FISHING" << endl;
    cout  << " If not, see See https://en.wikipedia.org/wiki/Rubber_duck_debugging.\n" << endl;
    cout << " Which animal do you want to kill";
    cout << " Duck";
    cout << " Fish";
    cout << "Alien";
    cin >> animal;
            cout << "      ________  " << endl; 
            cout << "     /        \ " << endl;
            cout << "    /  __  __  \ " << endl; 
            cout << "    |            |" << endl;
            cout << "    |     /\     |" << endl;
            cout << "    \            /" << endl;
            cout << "     \   \___/  /" << endl;
            cout << "      \_______/" << endl;
            cout << "        |   |" << endl;
            cout << "        |   |" << endl;
            cout << "        |   |" << endl;
            cout << "        |   |";
        if (animal == "Duck") {
        cout << "                __     " << endl; // TODO: student 1 may change this line and may add additional lines immediately above
        cout << "              <(o )___-" << endl; // student 3(1) may change this line and add additional lines between this line and immediately below
        cout << "               ( .__> /" << endl; // student 3(2) may change this line
        cout << "                `----' " << endl; // TODO student 2 may change this line and may add lines below
    }

    return 0;
}