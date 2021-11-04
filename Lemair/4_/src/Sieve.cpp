#include "Sieve.h"
#include "MultipleFilter.h"

int Sieve::next_value() {
    int current_value = _inner->next_value();
    _inner = new MultipleFilter(_inner, current_value);
    return current_value;
}