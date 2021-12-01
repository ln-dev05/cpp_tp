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

    printContainer(vect1);
    printContainer(vect2);

    cout << "Is 1 include in 2: " << include<vector<int>::iterator>(vect1.begin(), vect1.end(), vect2.begin(), vect2.end()) << endl;


    std::cout << "Vector: " << std::endl;
    vector<int> vect3;
    fillVector(vect3, 30);
    sortContainer(vect3.begin(), vect3.end());
    printContainer(vect3);

    std::cout << std::endl << "Sort Container " << std::endl;
    std::cout << "List: " << std::endl;
    list<int> list1;
    for (int i = 0; i < 20; ++i) list1.push_front(rand() % 21);
    sortContainer(list1.begin(), list1.end());
    printContainer(list1);

    std::cout << "Queue: " << std::endl;
    deque<int> queue1;
    for (int i = 0; i < 20; ++i) queue1.push_front(rand() % 21);
    sortContainer(queue1.begin(), queue1.end());
    printContainer(queue1);
    
    swap(queue1.begin(), queue1.end()-1);
    printContainer(queue1);

}
