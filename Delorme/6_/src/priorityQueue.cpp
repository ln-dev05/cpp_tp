#include <iostream>
#include <queue>
#include <vector>
#include <time.h>

#include "_iteratorFunction.hpp"
#include "priorityQueue.hpp"

using namespace std;

int main() {

    srand(time(NULL));

    vector<int> vectorOfInt;
    vector<int> vectorOfSortedInt;

    fillVector(vectorOfInt, 40);
    printIterator(vectorOfInt.begin(), vectorOfInt.end());

    vectorOfSortedInt = sortVector<int, greater<int>>(vectorOfInt);

    printIterator(vectorOfSortedInt.begin(), vectorOfSortedInt.end());


}