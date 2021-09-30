#include <iostream>
#include "Rational.h"
#include <vector>


using namespace std;

int main()
{
    #if 0
    Rational r;
    r.print(cout);

    Rational inv_r = r.inverse();
    inv_r.print(cout);

    Rational undemi(1,2);

    cout << (undemi + undemi) << endl;
    cout << (undemi - undemi) << endl;
    cout << (undemi * undemi) << endl;
    cout << (undemi / undemi) << endl;
    cout << (-undemi) << endl;
    cout << undemi.pow(16) << endl;
    cout << sqr(undemi) << endl;
    //rmax(Rational(1, 2), Rational(3,2)) = Rational(0, 1);
    cout << rmax(Rational(1, 2), Rational(3,2)) << endl;

    undemi = undemi + undemi;
    cout << undemi << endl;
    #endif

    vector<Rational> tab;

    for (int i = 1; i < 16; i++)
    {
        tab.push_back(Rational(1, i));
    }

    cout << sum(tab.data(), 15) << endl;

    return 0;
}
