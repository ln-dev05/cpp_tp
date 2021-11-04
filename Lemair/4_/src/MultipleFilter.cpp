#include "MultipleFilter.h"

int MultipleFilter::next_value() {
    int suggested_value;
    do {
        suggested_value = _inner->next_value();
    } while (suggested_value%_coef == 0);
    return suggested_value;
}