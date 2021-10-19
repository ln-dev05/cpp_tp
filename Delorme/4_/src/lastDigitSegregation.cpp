#include "lastDigitSegregation.h"

    
    
LastDigitSegregation::LastDigitSegregation(Source * inner) : SourceDecorator(inner) {}

LastDigitSegregation::~LastDigitSegregation() {}

int LastDigitSegregation::next() {

    int val = 0;
    do {
        
        val = _inner->next();

    } while (val % 10 == 7 || val % 10 == 3);
    return val;

}