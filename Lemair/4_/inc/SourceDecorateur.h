#include "IntSource.h"

#ifndef SOURCEDECORATEUR_H
#define SOURCEDECORATEUR_H


class SourceDecorateur : public IntSource 
{
protected:
    IntSource * _inner;
public:
 inline SourceDecorateur(IntSource * inner);
 SourceDecorateur(SourceDecorateur &) = delete;
 virtual ~SourceDecorateur();
};

SourceDecorateur::SourceDecorateur(IntSource * inner) {
    _inner = inner;
}
#endif /* end of include guard SOURCEDECORATEUR_H */



