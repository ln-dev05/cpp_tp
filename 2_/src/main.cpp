#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
    Rational r(20, 50);
    r.print(cout);

    Rational inv_r = r.inverse();
    inv_r.print(cout);

    Rational undemi(1,2);

    cout << (undemi + undemi) << endl;
    cout << (undemi - undemi) << endl;
    cout << (undemi * undemi) << endl;
    cout << (undemi / undemi) << endl;
    cout << (-undemi) << endl;

    return 0;
}
