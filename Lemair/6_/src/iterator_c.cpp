#include <ctime>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

void fillset(set<int> & a) {
    srand(time(0));
    for (int i = 0; i < 1000; ++i) {
        a.insert(rand() % 21);
    }
}

void fillvect(vector<int> & a) {
    srand(time(0));
    for (int i = 0; i < 40; ++i) {
        a.push_back(rand() % 21);
    }
}

template<typename T>
void print(T begin, T end) {
    for (T it = begin; it != end; ++it) {
        cout << *it << endl;
    }
}

int main(int argc, char const *argv[])
{
    vector<int> a;
    fillvect(a);
    print(a.begin(), a.end());
    set<int> b;
    fillset(b);
    print(b.begin(), b.end());
    return 0;
}
