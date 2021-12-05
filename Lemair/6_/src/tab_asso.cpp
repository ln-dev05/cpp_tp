#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> age;
    age["Ismael"] = 21;
    age["Romain"] = 21;
    age["Dimitri"] = 21;
    age["Paul"] = 21;
    for (map<string, int>::iterator it = age.begin(); it != age.end(); ++it) {
        cout << "age[" 
             << get<0>(*it)
             << "]"
             << "=" 
             << get<1>(*it) 
             << endl;
    }
}
// Il trie par ordre alphabetique croissant