#if !defined(COMPARATOR_H)
#define COMPARATOR_H

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
#endif // COMPARATOR_H
