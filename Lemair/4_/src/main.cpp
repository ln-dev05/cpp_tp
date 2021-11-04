#include <fstream>
#include <iostream>

#include "Counter.h"
#include "Sieve.h"
#include "UnitFilter.h"
using namespace std;

int main(int argc, char const *argv[])
{
#if 0 
    Sieve s(new Counter);
    int i;
    do {
        i = s.next_value();
        cout << i << " ";
    }
    while (i < 7000);
    cout << "" << endl;
#endif
#if 0
    UnitFilter s(new UnitFilter(new Sieve(new Counter), 7), 3);
    int i;
    do {
        i = s.next_value();
        cout << i << " ";
    }
    while (i < 100);
    cout << "" << endl;
#endif
#if 1
    ofstream file("output_gnuplot.data");
    ofstream file_diff("output_gnuplot_diff.data");
    int n = 5000;
    int s_n_1 = 0;
    do {
        Sieve s(new Counter);
        int i;
        IntSource::RESET_NEXT_VALUE_USAGE();
        do {
            i = s.next_value();
        } while (i < n);
        file << n << " " << IntSource::GET_NEXT_VALUE_USAGE() << endl;
        file_diff << n << " " << IntSource::GET_NEXT_VALUE_USAGE() - s_n_1 << endl;
        s_n_1 = IntSource::GET_NEXT_VALUE_USAGE();
        --n;
    } while (n > 1);
    file.close();
#endif
    return 0;
}
