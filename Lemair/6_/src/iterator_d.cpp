#include <ctime>
#include <iostream>
#include <stack>

using namespace std;


int main(int argc, char const *argv[]) {
    stack<int> s;
    stack<int>::iterator a;
    s.begin();
    return 0;
}
// src/iterator_d.cpp: In function ‘int main(int, const char**)’:
// src/iterator_d.cpp:10:17: error: ‘iterator’ is not a member of ‘std::stack<int>’
//    10 |     stack<int>::iterator a;
//       |                 ^~~~~~~~
// src/iterator_d.cpp:11:7: error: ‘class std::stack<int>’ has no member named ‘begin’
//    11 |     s.begin();
//       |    