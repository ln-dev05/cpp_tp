#ifndef COMPARATOR_H
#define COMPARATOR_H


template<typename T>
class LessThan {

public:
    LessThan();
    ~LessThan();

    bool operator()(T a, T b) const;

};

template<typename T>
bool LessThan<T>::operator()(T a, T b) const {
    return a < b;
}

template<typename T>
LessThan<T>::LessThan() {}

template<typename T>
LessThan<T>::~LessThan(){}



template<typename T>
class GreaterThan {

public:
    GreaterThan();
    ~GreaterThan();

    bool operator()(T a, T b) const;

};


template<typename T>
bool GreaterThan<T>::operator()(T a, T b) const {
    return a > b;
}

template<typename T>
GreaterThan<T>::GreaterThan() {}

template<typename T>
GreaterThan<T>::~GreaterThan(){}

#endif