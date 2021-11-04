#include "MultipleFilter.h"

int MultipleFilter::next_value() {
    IntSource::INC_NEXT_VALUE_USAGE();
    int suggested_value;
    do {
        suggested_value = _inner->next_value();
    } while (suggested_value%_coef == 0);
    return suggested_value;
}