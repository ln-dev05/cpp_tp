#include <iostream>
#include <queue>
#include <vector>
#include <time.h>

#include "iteratorFunction.hpp"
#include "priorityQueue.hpp"

using namespace std;

int main() {

    srand(time(NULL));

    vector<int> vectorOfInt;
    vector<int> vectorOfSortedInt;

    fillVector(vectorOfInt, 40);
    printContainer<vector<int>>(vectorOfInt);

    vectorOfSortedInt = sortVector<int, greater<int>>(vectorOfInt);

    printContainer<vector<int>>(vectorOfSortedInt);


}