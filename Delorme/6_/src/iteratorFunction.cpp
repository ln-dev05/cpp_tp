#include "iteratorFunction.hpp"

void fillVector(std::vector<int> & set, unsigned int num) {
    for (unsigned int i = 0; i < num; ++i) {
        set.push_back(rand() % 21);
    }
}

void fillSet(std::set<int> & set, unsigned int num) {
    for (unsigned int i = 0; i < num; ++i) {
        set.insert(rand() % 21);
    }
}

void fillStack(std::stack<int> & set, unsigned int num) {
    for (unsigned int i = 0; i < num; ++i) {
        set.push(rand() % 21);
    }
}