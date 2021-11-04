#include "SourceDecorateur.h"

#ifndef MULTIPLEFILTER_H
#define MULTIPLEFILTER_H


class MultipleFilter : public SourceDecorateur 
{
private:
    int _coef;
public:
 inline MultipleFilter(IntSource* inner, const int coef);
 MultipleFilter(MultipleFilter&) = delete;
 int next_value() override;
 ~MultipleFilter() = default;
};

MultipleFilter::MultipleFilter(IntSource * inner, const int coef) : SourceDecorateur(inner) {
    _coef = coef;
}

#endif /* end of include guard MULTIPLEFILTER_H */

