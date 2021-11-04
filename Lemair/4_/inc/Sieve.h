#include "SourceDecorateur.h"

#ifndef SIEVE_H
#define SIEVE_H

class Sieve : public SourceDecorateur
{
private:
    
public:
    inline Sieve(IntSource * base_source);
    Sieve(Sieve &) = delete;
    inline ~Sieve();
    int next_value() override;
};

Sieve::Sieve(IntSource* base_source) : SourceDecorateur(base_source) {}

Sieve::~Sieve() {}

#endif /* end of include guard SIEVE_H */


