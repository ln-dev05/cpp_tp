#include "counter.h"

Counter::Counter(int start) :_value(start){}

Counter::~Counter(){}

int Counter::next() {
    _value++;
    return _value - 1;
}