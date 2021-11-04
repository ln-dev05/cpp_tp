#include "iostream"
#include "counter.h"

Counter::Counter(const int start) :_value(start){
    // std::cout << "++counter" << std::endl;
}

Counter::~Counter(){
    // std::cout << "--counter" << std::endl;
}

int Counter::next() {
    ++Source::nb_call_to_next;
    return _value++;
}