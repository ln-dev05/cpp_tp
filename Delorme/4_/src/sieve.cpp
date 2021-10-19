#include "iostream"
#include "counter.h"
#include "multipleFilter.h"


using namespace std;

int main(void) {

    Source * sieve = new MultipleFilter(new Counter(), 2);

    for (int i = 0; i < 20; i++) {
        cout << sieve->next() << endl;
    } 

    delete sieve;

}