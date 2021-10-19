#include "iostream"
#include "sieve.h"
#include "counter.h"
#include "multipleFilter.h"


using namespace std;

int main(void) {

    Source * sieve = new Sieve(new Counter());

    for (int i = 0; i < 700000; i++) {
        cout << sieve->next() << endl;
    } 

    delete sieve;

}