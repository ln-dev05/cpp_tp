#include <vector>
#include <iostream>
#include <queue>
#include <time.h>

using namespace std;

template<typename IT>
bool is_in(IT begin1, IT end1, IT begin2, IT end2) {
    for (IT it = begin1; it != end1; ++it) {

        bool is_in_2 = false;
        
        for (IT itt = begin2; itt != end2; ++itt) { 
            if (*itt == *it) {
                is_in_2 = true;
                break;
            }
        }
        
        if(!is_in_2) {
            return false;
        }
    }
    return true;
}

template <typename ITER>
void sort(ITER begin, ITER end) {

    priority_queue<typename ITER::value_type,
                   vector<typename ITER::value_type>,
                   std::greater<typename ITER::value_type>> temp;
    
    for (ITER it = begin; it != end; ++it) {
        temp.push(*it);
    }
    ITER it = begin;
    while (!temp.empty()) {
        *it = temp.top();
        ++it;
        temp.pop();
    }
}

template<typename T>
void swapuru(T ita, T itb) {
    typename T::value_type tmp = *ita;
    *ita = *itb;
    *itb = tmp;
}

int main(int argc, char const *argv[])
{
    srand(time(0));
    vector<int> a;
    for (int i = 0; i < 20; ++i) {
        a.push_back(rand()%100);
    }
    sort(a.begin(), a.end());
    cout << "[";
    for (int i : a) {
        cout << i << ", ";
    }
    cout << "]" << endl;
    swapuru(a.begin(), --a.end());
    cout << "[";
    for (int i : a) {
        cout << i << ", ";
    }
    cout << "]" << endl;
    return 0;
}
