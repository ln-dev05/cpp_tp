#ifndef SOURCE_DECORATOR_H
#define SOURCE_DECORATOR_H

#include "source.h"

class SourceDecorator : public Source {

public:

    SourceDecorator(Source * inner);
    SourceDecorator(SourceDecorator &) = delete;
    
    virtual ~SourceDecorator();
    virtual int next() override;

protected:
    Source * _inner;

};

#endif