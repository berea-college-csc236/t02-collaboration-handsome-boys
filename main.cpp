/*  T02: Collaboration Teamwork

    Have yov ever heard of rubber duck debugging?
    See https://en.wikipedia.org/wiki/Rubber_duck_debugging 
    Original code and ASCII art by Dr. Jan Pearce, Berea College


    Edits made by:
    TODO: <Sugarragchaa Tumur-Ochir> -- to be added by student 1
    TODO: <Michael Vargas> -- to be added by student 2
    TODO: <Add name of student 3 Here> -- to be added by student 3 (if relevant otherwise, student 2 should remove this line)
*/


#include <iostream>
using namespace std;

int main() {

    string animal = "";

    cout << " Have you ever hver heard of rubber duck FISHING" << endl;
    cout  << " If not, see See https://en.wikipedia.org/wiki/Rubber_duck_debugging.\n" << endl;
    cout << " Which animal do you want to kill";
    cout << " Duck\n";
    cout << " Fish\n";
    cout << "Alien\n";
    cin >> animal;
            cout << "      ________  " << endl; 
            cout << "     /        \\ " << endl;
            cout << "    /  __  __  \\" << endl; 
            cout << "    |            |" << endl;
            cout << "    |     /\\     |" << endl;
            cout << "    \\            /" << endl;
            cout << "     \\   \\___/  /" << endl;
            cout << "      \\_______/" << endl;
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
            else if (animal == "Alien") {
                cout << "                __     " << endl; // TODO: student 1 may change this line and may add additional lines immediately above
                cout << "              <(o )___-" << endl; // student 3(1) may change this line and add additional lines between this line and immediately below
                cout << "              -----------------" << endl; // student 3(2) may change this line
                cout << "              |               |" << endl;
                cout << "              |               |" << endl;
                cout << "              -----------------" << endl; // student 3(2) may change this line
            }
            else{
                cout << "                                     `--'--' " << endl; // TODO student 2 may change this line and may add lines below
                cout << "                                   ,/ 0'     \\ " << endl; 
                cout << "                                  'o           -'-'-'-> " << endl;
                cout << "                                    \\--------/ " << endl;
             }
    return 0;
}
