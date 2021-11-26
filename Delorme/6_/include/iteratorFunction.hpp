#ifndef ITERATOR_FUNCTION_HPP
#define ITERATOR_FUNCTION_HPP

#include <iostream>
#include <vector>
#include <set>
#include <stack>

void fillVector(std::vector<int> & set, unsigned int num);

void fillSet(std::set<int> & set, unsigned int num);

void fillStack(std::stack<int> & set, unsigned int num);

template<typename T>
void printContainer(T & container);

template<typename T>
void printIterator(T begin, T end);

template<typename T>
void printContainer(T & container) {
    for (typename T::iterator iter = container.begin(); iter != container.end(); ++iter) {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}

template<typename T>
void printIterator(T begin, T end) {
    for (T iter = begin; iter != end; ++iter){
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}


#endif