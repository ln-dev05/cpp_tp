#include "iostream"
#include "sourceDecorator.h"

SourceDecorator::SourceDecorator(Source * inner) :_inner(inner) {
    std::cout << "++SourceDecorator" << std::endl;
}

SourceDecorator::~SourceDecorator() {
    std::cout << "--SourceDecorator" << std::endl;
    delete _inner;
}