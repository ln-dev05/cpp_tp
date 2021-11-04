#include "lastDigitSegregation.h"

    
    
LastDigitSegregation::LastDigitSegregation(Source * inner, const int k) : SourceDecorator(inner) {
    _value = k;
}

LastDigitSegregation::~LastDigitSegregation() {}

int LastDigitSegregation::next() {

    int val = 0;
    do {
        
        val = _inner->next();

    } while (val % 10 == _value);

    return val;

}