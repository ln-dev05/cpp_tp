#if !defined(COMPARATOR_H)
#define COMPARATOR_H

#include "Item.h"

template <typename T>
class LessThan {
    public:
        LessThan() {}
        ~LessThan() {}
        bool operator()(const T & a, const T & b) const;
};

template <typename T>
class GreaterThan {
    public:
        GreaterThan() {}
        ~GreaterThan() {}
        bool operator()(const T & a, const T & b) const;
};

template <typename T>
bool GreaterThan<T>::operator()(const T & a, const T & b) const {
    return b < a;
}

template <typename T>
bool LessThan<T>::operator()(const T & a, const T & b) const {
    return a < b;
}

template <>
bool GreaterThan<Item>::operator()(const Item& a, const Item& b) const {
    return b.price < a.price;
}

template <>
bool LessThan<Item>::operator()(const Item& a, const Item& b) const {
    return a.price < b.price;
}
#endif // COMPARATOR_H
