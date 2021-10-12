#include <iostream>
#include "matrix.h"

using namespace std;

int main(void) {

    if (false) {

        Matrix m();
        Matrix n(5,5);
        cout << n << endl;
        
    }
    
    const double I[] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    const double ITranspose[] = {0, 0, 1, 0, 1, 0, 1, 0, 0};

    Matrix o(3, 3, I);
    cout << o << endl;

    Matrix p(3, 3, ITranspose);
    cout << p << endl;

    cout << o + p << endl;



}