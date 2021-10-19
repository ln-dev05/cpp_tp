#ifndef COUNTER_H
#define COUNTER_H

#include "source.h"

class Counter : public Source {
public:

    Counter(int start = 2);
    Counter(Counter &) = delete;
    virtual ~Counter();

    virtual int next() override;

private:

    int _value;

};

#endif