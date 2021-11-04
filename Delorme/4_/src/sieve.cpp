#include "sieve.h"
#include "multipleFilter.h"
#include "iostream"


Sieve::Sieve(Source * inner) : SourceDecorator(inner) {}

Sieve::~Sieve(){}

int Sieve::next() {
    ++Source::nb_call_to_next;

    int val = _inner->next();
    _inner = new MultipleFilter(_inner, val);

    return val;
}
