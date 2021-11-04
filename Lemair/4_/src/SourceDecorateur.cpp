#include "SourceDecorateur.h"

SourceDecorateur::~SourceDecorateur() {
    delete _inner;
}