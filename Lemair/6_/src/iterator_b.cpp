#include <iostream>
#include <set>
#include <ctime>

using namespace std;

int main() {
    set<int> a;
    srand(time(0));
    for (int i = 0; i < 1000; ++i) {
        a.insert(rand()%21);
    }

    for (set<int>::iterator it = a.begin(); it != a.end(); ++it) {
        cout << *it << endl;
    }
    
}
// Comme les elements sont uniques, il n'y a pas plus de 20 elements dans le set
// P'tet pour la recherche, j'en sais rien.
