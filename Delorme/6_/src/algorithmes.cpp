#include <iostream>
#include <iterator>
#include <list>
#include <queue>

#include "_iteratorFunction.hpp"
#include "algorithmes.hpp"


using namespace std;

int main(void) {

    srand(time(NULL));

    vector<int> vect1;
    vector<int> vect2;

    for (int i = 10; i < 20; ++i) vect1.push_back(i);    
    for (int i = 0; i < 30; ++i) vect2.push_back(i);    
    printIterator(vect1.begin(), vect1.end());
    printIterator(vect2.begin(), vect2.end());
    cout << "Is 1 include in 2 ? : " << (include<vector<int>::iterator>(vect1.begin(), vect1.end(), vect2.begin(), vect2.end()) ? "True" : "False") << endl;
    cout << "Is 2 include in 1 ? : " << (include<vector<int>::iterator>(vect2.begin(), vect2.end(), vect1.begin(), vect1.end()) ? "True" : "False") << endl;

    std::cout << std::endl << "Sorting a Container with iterator: " << std::endl;
    std::cout << " Vector: " << std::endl;
    vector<int> vect3;
    fillVector(vect3, 30);
    sortContainer(vect3.begin(), vect3.end());
    printIterator(vect3.begin(), vect3.end());

    std::cout << " List: " << std::endl;
    list<int> list0;
    for (int i = 0; i < 20; ++i) list0.push_front(i);
    sortContainer(list0.begin(), list0.end());
    printIterator(list0.begin(), list0.end());

    std::cout << std::endl << "Sort Container " << std::endl;
    std::cout << " with List: " << std::endl;
    list<int> list1;
    for (int i = 0; i < 20; ++i) list1.push_front(rand() % 21);
    sortContainer(list1.begin(), list1.end());
    printIterator(list1.begin(), list1.end());

    std::cout << " with Queue: " << std::endl;
    deque<int> queue1;
    for (int i = 0; i < 20; ++i) queue1.push_front(rand() % 21);
    sortContainer(queue1.begin(), queue1.end());
    printIterator(queue1.begin(), queue1.end());
    
    std::cout << std::endl << "Swap using iterator: " << std::endl;
    swap(queue1.begin(), queue1.end()-1);
    printIterator(queue1.begin(), queue1.end());

}
