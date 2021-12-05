#include <iostream>
#include <queue>

using namespace std;

template<typename T>
vector<T> sort(vector<T> & vec) {
    priority_queue<T, vector<T>, std::greater<T>> temp;
    for (auto it = vec.begin(); it !=  vec.end(); ++it) {
        temp.push(*it);
    }
    vector<T> ret;
    while(!temp.empty()) {
        ret.push_back(temp.top());
        temp.pop();
    }
    return ret;
}

int main() {
    vector<int> vec;
    for (int i = 0; i < 100; ++i) {
        vec.push_back(rand()%100);
    }
    vec = sort(vec);
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << endl;
    }
}