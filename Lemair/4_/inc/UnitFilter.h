#include "SourceDecorateur.h"

#ifndef UNITFILTER_H
#define UNITFILTER_H

class UnitFilter : public SourceDecorateur 
{
private:
    int _value;
public:
 inline UnitFilter(IntSource* inner, const int value);
 UnitFilter(UnitFilter&) = delete;
 int next_value() override;
 ~UnitFilter() = default;
};

UnitFilter::UnitFilter(IntSource* inner, const int value) : SourceDecorateur(inner) {
    _value = value;
}

#endif /* end of include guard UNITFILTER_H */
