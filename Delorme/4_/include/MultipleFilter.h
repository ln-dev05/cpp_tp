#ifndef MULTIPLE_FILTER_H
#define MULTIPLE_FILTER_H

#include "SourceDecorator.h"

class MultipleFilter : public SourceDecorator {
public:

    inline MultipleFilter(IntegerSource * inner, int k) :_value(k) {
        SourceDecorator(inner);
    }


private:
    
    int _value;
};


#endif