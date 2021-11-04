#include "UnitFilter.h"

int UnitFilter::next_value() {
    IntSource::INC_NEXT_VALUE_USAGE();

    int suggested_value;
    do {
        suggested_value = _inner->next_value();
    } while (suggested_value%10 == _value);
    return suggested_value;
}