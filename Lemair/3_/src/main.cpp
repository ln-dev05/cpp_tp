#include <iostream>
#include "Matrix.h"

using namespace std;

#define TEST_PERSO 1

#if TEST_PERSO
int main()
{
    Matrix m(3,3);
    Matrix m2(3, 4);

    if (m.is_square()) cout << "m est carrée" << endl;

    cout << "m after init" << endl;
    cout << m << endl;
    cout << "m2 after init" << endl;
    cout << m2 << endl;
    m = m2;
    cout << "m after m=m2" << endl;
    cout << m << endl;
    if (0) {
        cin >> m;
    }
    m(0,0) = 5;
    m2(0,0) = 5;
    cout << "m2 after m2[0][0]=5" << endl;
    cout << m2 << endl;
    cout << "m after m2[0][0]=5" << endl;
    cout << m << endl;
    cout << "m + m2" << endl;
    cout << m + m2 << endl;
    cout << "m - m2" << endl;
    cout << m - m2 << endl;

    double * tmp_double = new double[4]();
    tmp_double[0] = 2;
    tmp_double[1] = 2;
    tmp_double[2] = 2;
    tmp_double[3] = 2;
    cout << "m * Matrix(4, 1, {2, 2, 2, 2})" << endl;
    cout << m * Matrix(4, 1, tmp_double) << endl;

    cout << "- m" << endl;
    cout << - m << endl;
    cout << "T(m)" << endl;
    cout << m.transpose() << endl;

    cout << Matrix::EYE(5) << endl;

    return 0;
}
#endif

#if !TEST_PERSO

void foo(Matrix) {}
int main(int, char *[]) {
    Matrix a, b, c;
    Matrix d = a * b;
    c = a * b;
    foo(c * c);
}
#endif