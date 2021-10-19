#include "source.h"
#include "iostream"

Source::Source() {
    std::cout << "++Source" << std::endl;
}

Source::~Source() {
    std::cout << "--Source" << std::endl;
}