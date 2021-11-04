#include "IntSource.h"

#ifndef COUNTER_H
#define COUNTER_H


class Counter : public IntSource
{
private:
    int _current_value;
public:
    inline Counter(const int initial_value = 2);
    Counter(Counter &) = delete;
    ~Counter() = default;
    inline int next_value() override;
};

Counter::Counter(const int initial_value) {
    _current_value = initial_value;
}

int Counter::next_value() {
    _current_value++;
    return _current_value-1;
}

#endif /* end of include guard COUNTER_H */

