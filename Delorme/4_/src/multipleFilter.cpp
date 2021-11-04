#include "iostream"
#include "multipleFilter.h"
 
MultipleFilter::MultipleFilter(Source * inner, const int k) : SourceDecorator(inner), _value(k) {
    // std::cout << "++multipleFilter" << std::endl;
}

MultipleFilter::~MultipleFilter() {
    // std::cout << "--multipleFilter" << std::endl;
}

int MultipleFilter::next() {
    int val = 0;
    
    do {
        
        val = _inner->next(); 

    } while (val % _value == 0);

    return val;
} 