#ifndef MULTIPLE_FILTER_H
#define MULTIPLE_FILTER_H

#include "sourceDecorator.h"

class MultipleFilter : public SourceDecorator {
public:

    MultipleFilter(Source * inner, const int k); 
    MultipleFilter(MultipleFilter &) = delete;

    virtual ~MultipleFilter();
    virtual int next() override; 


private:
    
    int _value;
};


#endif