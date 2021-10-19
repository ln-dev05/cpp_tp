#ifndef SIEVE_H
#define SIEVE_H

#include "sourceDecorator.h"

class Sieve : public SourceDecorator {

public:
    Sieve(Source * inner);
    Sieve(Sieve &) = delete;
    
    virtual ~Sieve();
    virtual int next() override;
};


#endif