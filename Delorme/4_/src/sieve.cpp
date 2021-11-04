#include "sieve.h"
#include "multipleFilter.h"
#include "iostream"


Sieve::Sieve(Source * inner) : SourceDecorator(inner) {}

Sieve::~Sieve(){}

int Sieve::next() {
    int val = _inner->next();
    _inner = new MultipleFilter(_inner, val);

    return val;
}
