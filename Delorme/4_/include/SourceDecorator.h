#ifndef SOURCE_DECORATOR_H
#define SOURCE_DECORATOR_H

#include "IntegerSource.h"

class SourceDecorator : public IntegerSource {

public:

    inline SourceDecorator(IntegerSource * inner) :_inner(inner) {}
    SourceDecorator(MultipleFilter &) = delete;
    inline ~SourceDecorator() {
        delete _inner;
    }

    virtual int next() override;

protected:
    IntegerSource * _inner;

}

#endif