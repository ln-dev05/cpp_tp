#include "multipleFilter.h"
 
MultipleFilter::MultipleFilter(Source * inner, int k) : SourceDecorator(inner), _value(k) {}

MultipleFilter::~MultipleFilter() {
    delete _inner;
}

int MultipleFilter::next() {
    int val = 0;
    
    do {
        
        val = _inner->next(); 

    } while (val % _value == 0);

    return val;
} 