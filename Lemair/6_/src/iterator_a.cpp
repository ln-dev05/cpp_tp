#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main() {
    vector<int> a;
    srand(time(0));
    for (int i = 0; i < 40; ++i) {
        a.push_back(rand()%21);
    }

    for (vector<int>::iterator it = a.begin(); it != a.end(); ++it) {
        cout << *it << endl;
    }
}