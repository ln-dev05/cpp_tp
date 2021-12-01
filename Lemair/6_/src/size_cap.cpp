#include <iostream>
#include <vector>

using namespace std;

main() {
    vector<double> a;
    int current_cap = a.capacity();
    cout << current_cap << endl;
    for (int i = 0; i < 5000; ++i) {
        a.push_back(double(i));
        if (a.capacity() != current_cap) {
            current_cap = a.capacity();
            cout << current_cap 
                 << "nb elt before changing " 
                 << i << endl;
        }
    }
    return 0;
}


// Barh comme un tableau qui se realloc