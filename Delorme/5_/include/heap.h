#ifndef HEAP_H
#define HEAP_H

#include "comparator.h"
#include <iostream>
#include <math.h>

template<typename T, typename C>
class Heap {

public:
    
    Heap(unsigned int capacity);
    Heap(const Heap<T,C> & ) = delete;
    ~Heap();

    bool isEmpty() const;
    bool isFull() const;
    
    T top() const;

    void add(T elem);
    void pop();
    std::ostream & display(std::ostream & out) const;

    Heap<T,C> & operator=(const Heap<T,C> & ) = delete;

private:

    inline void swap(unsigned int i, unsigned int j);

    T * _array;
    C _comparator;
    unsigned int _capacity;
    unsigned int _size;
};

template<typename T, typename C>
std::ostream & operator<<(std::ostream & out, const Heap<T, C> & heap);

template<typename T, typename C>
Heap<T,C>::Heap(unsigned int capacity) : _capacity(capacity), _size(0) {

    _array = new T[capacity + 1];

}

template<typename T, typename C>
Heap<T,C>::~Heap() {

    _capacity = 0;
    _size = 0;
    delete _array;

}

template<typename T, typename C>
bool Heap<T,C>::isEmpty() const {
    return _size == 0;
}

template<typename T, typename C>
bool Heap<T,C>::isFull() const {
    return _size == _capacity;
}

template<typename T, typename C>
T Heap<T,C>::top() const {
    if (isEmpty()) throw "Heap is empty";
    return _array[1];
}

template<typename T, typename C>
void Heap<T,C>::add(T elem) {

    if (isFull()) throw "Heap is full";

    _array[++_size] = elem;
    int currentInd = _size;
    int parentInd = currentInd / 2;

    while (_comparator(_array[currentInd], _array[parentInd]) && parentInd != 0) {
        swap(currentInd, parentInd);
        currentInd = parentInd;
        parentInd = currentInd / 2;
    }    
}
    
template<typename T, typename C>
void Heap<T,C>::pop() {

    if (isEmpty()) throw "Heap is empty";
    swap(1, _size);
    
    _array[_size] = 0;
    
    --_size;
    unsigned int currentPos = 1; 
    unsigned int childLeft = 2;
    unsigned int childRight = 3;
    bool hasSwaped = false;
    unsigned int max;

    while (childLeft < _size) {
        hasSwaped = false;

        if (childRight < _size) {
            max = _comparator(_array[childRight], _array[childLeft]) ? childRight : childLeft;

            if (_comparator(_array[childRight], _array[currentPos])){
                swap(currentPos, max);
                hasSwaped = true;
                currentPos = childRight;
            }
        }

        if (_comparator(_array[childLeft], _array[currentPos])){
            swap(currentPos, childLeft);
            hasSwaped = true;
            currentPos = childLeft;
        }
        

        childLeft = 2*currentPos;
        childRight = 2*currentPos+1;

        if (!hasSwaped) {
            break;
        }
    }
}

template<typename T, typename C>
std::ostream & Heap<T,C>::display(std::ostream & out) const {

    unsigned int max_deepth = log2(_capacity) + 1;
    unsigned int limit = _size + 1;
    unsigned int deepth = 1;
    unsigned int count = 0;

    for (unsigned int i = 1; i < limit; ++i) {
        out << _array[i] << " ";
        ++count;
        if (count == deepth) {
            out << std::endl;
            deepth *= 2;
            count = 0;
        }
    }

    out << std::endl;
    return out;
}

template<typename T, typename C>
std::ostream & operator<<(std::ostream & out, const Heap<T,C> & heap) {
    heap.display(out);
    return out;
}


template<typename T, typename C>
inline void Heap<T, C>::swap(unsigned int i, unsigned int j) {
    T temp = _array[j];
    _array[j] = _array[i];
    _array[i] = temp;
}

#endif