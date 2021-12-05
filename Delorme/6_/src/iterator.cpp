#include <iostream>
#include <time.h>

#include "_iteratorFunction.hpp"

using namespace std;

int main(void) {

    srand(time(NULL));

    vector<int> vectorOfInt;
    fillVector(vectorOfInt, 20);
    std::cout << "Vector : ";
    printIterator(vectorOfInt.begin(), vectorOfInt.end());

    set<int> setOfInt;
    fillSet(setOfInt, 1000);
    std::cout << "Set : ";
    printIterator(setOfInt.begin(), setOfInt.end());

    stack<int> stackOfInt;
    fillStack(stackOfInt, 20);
    // printContainer<stack<int>>(stackOfInt);

    return EXIT_SUCCESS;
}