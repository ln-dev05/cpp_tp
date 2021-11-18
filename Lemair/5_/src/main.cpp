#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Comparator.h"
#include "Heap.h"

using namespace std;

int main() {
    #if 0
    LessThan<double> infDouble;
    double x = 2.0;
    double y = 2.0;
    if (infDouble(x, y)) {
        cout << x << " is less than " << y << endl;
    } else {
        cout << x << " is not less than " << y << endl; 
    }
    try {
        Heap<int, LessThan<int>> heap(20);
        cout << "heap is empty : " << ((heap.isEmpty())?"yes":"no") << endl;
        cout << "heap is full : " << ((heap.isFull())?"yes":"no") << endl;
        heap.add(5);
        heap.add(4);
        cout << "heap is empty : " << ((heap.isEmpty())?"yes":"no") << endl;
        cout << heap.top() << endl;
        heap.pop();        
        cout << heap.top() << endl;
        heap.pop();        
        heap.pop();        
        heap.print(cout);
        heap.add(20);
    } catch(const char* & e) {
        cerr << e << '\n';
    }
    #endif
    #if 0
    try {
        Heap<int, GreaterThan<int>> heap(20);
        heap.add(120);
        heap.add(98);
        heap.add(113);
        heap.add(90);
        heap.add(30);
        heap.add(12);
        heap.add(5);
        heap.add(7);
        heap.add(5);
        heap.add(22);
        heap.add(3);
        heap.add(9);
        heap.add(118);
        heap.print(cout);
        heap.pop();
        heap.print(cout);

    } catch (const char*& e) {
        cerr << e << '\n';
    }
    #endif
    int size = 50;
    int array[size];
    std::srand(time(nullptr));
    for (int i = 0; i < size; ++i) {
        array[i] = rand()%10;
    }
    heapSort<int, LessThan<int>>(array, size);

    cout << "[";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << ",";
    }
    cout << "]" << endl;
}