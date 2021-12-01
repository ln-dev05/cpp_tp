#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

int main(void) {

    vector<double> vectorOfDoubles;

    int oldCapacity = -1;
    int currentCapacity;

    for (int i = 0; i < 5000; ++i) {

        vectorOfDoubles.push_back(i * 1.0);
        currentCapacity = vectorOfDoubles.capacity();
        if (oldCapacity != currentCapacity){
            oldCapacity = currentCapacity;
            cout << "Capacity: " << currentCapacity << " | Size: " << vectorOfDoubles.size() << endl; 
        }

    }

    return EXIT_SUCCESS;
}