#include "multipleFilter.h"
 
MultipleFilter::MultipleFilter(Source * inner, int k) {
    SourceDecorator(inner);
    _value = k;
}


MultipleFilter::~MultipleFilter() {
    delete _inner;
}

int MultipleFilter::next() {

} 