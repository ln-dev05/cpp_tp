#include <iostream>
#include <map>

using namespace std;

int main(void) {

    map<string, int> age;

    age["Ismaël"] = 21;
    age["Paul"] = 21;
    age["Julien"] = 22;
    age["Roméo"] = 20;

    for (map<string, int>::iterator iter = age.begin(); iter != age.end(); ++iter) {
        cout << "Name: " << get<0>(*iter) << " - Age: " << get<1>(*iter) << endl; 
    }

    cout << " (1, 10) < (2, 3) " << (make_pair<int, int>(1, 10) < make_pair<int, int>(2, 3)) << endl;
    cout << " (1, 10) < (1, 20) " << (make_pair<int, int>(1, 10) < make_pair<int, int>(1, 20)) << endl;
    cout << " (1, 10) < (1, 5) " << (make_pair<int, int>(1, 10) < make_pair<int, int>(1, 5)) << endl;
    cout << " (1, 10) < (0, 8.5) " << (make_pair<int, double>(1, 10) < make_pair<int, double>(0, 8.5)) << endl;
    cout << " (0, 0) != (0, 8) " << (make_pair<int, int>(0, 0) != make_pair<int, int>(0, 8)) << endl;
    cout << " (0, 5) < (0, 5) " << (make_pair<int, int>(0, 5) < make_pair<int, int>(0, 5)) << endl;
    cout << " ('pomme', 10) < ('orange', 40) " << (make_pair<string, int>("pomme", 10) < make_pair<string, int>("orange", 40)) << endl;

    std::map <int ,double > tab;
    tab [10] = 5.0;
    tab [5] = 2.5;
    if (tab[0] == 0.0) {
        std::cout << tab.size() << std::endl;
    }

}