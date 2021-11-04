#include <iostream>
#include "Sieve.h"
#include "Counter.h"
#include "UnitFilter.h"
using namespace std;

int main(int argc, char const *argv[])
{
#if 0 
    Sieve s(new Counter);
    int i;
    do {
        i = s.next_value();
        cout << i << endl;
    }
    while (i < 7000);
#endif
#if 1
    UnitFilter s(new UnitFilter(new Sieve(new Counter), 7), 3);
    int i;
    do {
        i = s.next_value();
        cout << i << endl;
    }
    while (i < 100);
#endif
    return 0;
}
