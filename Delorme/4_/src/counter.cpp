#include "iostream"
#include "counter.h"

Counter::Counter(int start) :_value(start){
    // std::cout << "++counter" << std::endl;
}

Counter::~Counter(){
    // std::cout << "--counter" << std::endl;
}

int Counter::next() {
    _value++;
    return _value - 1;
}