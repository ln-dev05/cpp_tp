#include "sourceDecorator.h"

SourceDecorator::SourceDecorator(Source * inner) :_inner(inner) {}

SourceDecorator::~SourceDecorator() {
    delete _inner;
}