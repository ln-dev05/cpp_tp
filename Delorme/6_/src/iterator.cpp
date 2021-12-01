#include <iostream>
#include <time.h>

#include "_iteratorFunction.hpp"

using namespace std;

int main(void) {

    srand(time(NULL));

    vector<int> vectorOfInt;
    fillVector(vectorOfInt, 20);
    printContainer<vector<int>>(vectorOfInt);

    set<int> setOfInt;
    fillSet(setOfInt, 1000);
    printContainer<set<int>>(setOfInt);

    stack<int> stackOfInt;
    fillStack(stackOfInt, 20);
    // printContainer<stack<int>>(stackOfInt);

    return EXIT_SUCCESS;
}