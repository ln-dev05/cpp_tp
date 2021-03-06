#ifndef CUSTOM_FILTER_H
#define CUSTOM_FILTER_H

#include "sourceDecorator.h"

class LastDigitSegregation : public SourceDecorator {
    
public:

    LastDigitSegregation(Source * inner, const int k);
    LastDigitSegregation(LastDigitSegregation &) = delete;

    virtual ~LastDigitSegregation();
    virtual int next() override;

private:

    int _value;
};



#endif