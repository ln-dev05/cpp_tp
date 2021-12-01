#ifndef PRIORITY_QUEUE_HPP
#define PRIORITY_QUEUE_HPP

#include <vector>
#include <queue>

template<typename T, typename Comp>
std::vector<T> sortVector(std::vector<T> vect) {

    std::priority_queue<T, std::vector<T>, Comp> prio;
    for (auto iter = vect.begin(); iter != vect.end(); ++iter) {
        prio.push(*iter);
    }

    std::vector<T> sortedVector;
    while (!prio.empty()) {
        sortedVector.push_back(prio.top());
        prio.pop();
    }

    return sortedVector;
}

#endif