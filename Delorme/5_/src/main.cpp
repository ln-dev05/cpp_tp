#include <iostream>
#include <time.h>
#include "comparator.h"
#include "heap.h"

using namespace std;

int main() {
    
    srand(time(NULL));

    if (false) {
        LessThan<double> infDouble;
        GreaterThan<double> supDouble;
        double x = 2.0;
        double y = 2.0;

        if (infDouble(x, y)) {
            cout << x << " is less than " << y << endl;
        } else {
            cout << x    << " is not less than " << y << endl;
        }
        if (supDouble(x, y)) {
            cout << x << " is more than " << y << endl;
        } else {
            cout << x    << " is not more than " << y << endl;
        }
    }

    if (true) {

        Heap<int, LessThan<int>> heapOfInt(15);

        for (int i = 0; i < 30; i++) {
            try {
                heapOfInt.add(rand() % 100);
            } catch (const char * e) {
                cout << "Can't add more items" << endl;
            }
            cout << heapOfInt << endl;
        }

        heapOfInt.pop();

        cout << heapOfInt << endl;
    }
}