#ifndef ALGORITHMES_HPP
#define ALGORITHMES_HPP

#include <queue>

template<typename iT>
bool include(const iT & begin1, const iT & end1, const iT & begin2, const iT end2) {

    for (iT currentElem = begin1; currentElem != end1; ++currentElem) {
        bool isCurrentElemIn = false;        

        for (iT iter = begin2; iter != end2; ++iter) {
            if (*currentElem == *iter) {
                isCurrentElemIn = true;
                break;
            }
        }
        if (!isCurrentElemIn) {
            return false;
        }
    }
    return true;
}

template<typename Iter>
void sortContainer(Iter begin, Iter end) {

    std::priority_queue<typename Iter::value_type> prio;
    for (auto iter = begin; iter != end; ++iter) {
        prio.push(*iter);
    }

    auto iter = begin;
    while(!prio.empty()) {
        *iter = prio.top();
        prio.pop();
        ++iter;
    }
}

template<typename Iter>
void swap(Iter item1, Iter item2) {
    typename Iter::value_type temp = *item1;
    *item1 = *item2;
    *item2 = temp;
}


#endif