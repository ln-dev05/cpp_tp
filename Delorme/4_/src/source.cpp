#include "source.h"
#include "iostream"

int Source::nb_call_to_next = 0;

Source::Source() {
    // std::cout << "++Source" << std::endl;
}

Source::~Source() {
    // std::cout << "--Source" << std::endl;
}

void Source::printCounter() {
    std::cout << "Total number of call to next(): " << nb_call_to_next << std::endl;
}

void Source::resetCounter() {
    nb_call_to_next = 0;
}