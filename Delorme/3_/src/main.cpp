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
    const double TwoEverywhere[] = {2, 2, 2, 2, 2, 2, 2, 2, 2};

    Matrix o(3, 3, I);
    cout << o << endl;

    Matrix p(3, 3, ITranspose);
    cout << p << endl;

    Matrix r = o + p;
    cout << r << endl;
    cout << r - o << endl;

    Matrix two(3, 3, TwoEverywhere);
    cout << two * two << endl;


    Matrix test(3, 3, new double[9]());
    cout << test << endl;

    Matrix perso(3,3);
    cin >> perso;

    cout << perso << endl;
}