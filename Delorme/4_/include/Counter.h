#ifndef COUNTER_H
#define COUNTER_H

#include "IntegerSource.h"

class Counter : public IntegerSource {
public:

    inline Counter(int start = 2) :_value(start){}
    Counter(Counter &) = delete;
    ~Counter() = default;

    inline int next() override {
        _value++;
        return _value - 1;
    }

private:

    int _value;

};

#endif