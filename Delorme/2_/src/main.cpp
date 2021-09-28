#include <iostream>
#include "rational.h"

using namespace std;

int main(void){

    if (false) {
        Rational r(long(1), long(4));
        cout << r << endl;
        cout << r.getInverse() << endl;

        Rational s(long(1), long(3));

        cout << (r+s) << endl;
        cout << (r*s) << endl;
        cout << (r-s) << endl;
        cout << (r/s) << endl;

        cout << r.pow(4) << endl;

        Rational t(-s);
        cout << t << endl;

        Rational u(1, 4);
        cout << sqr(u) << endl;

        Rational v(1, 8);
        Rational w(3, 4);

        v = rmax(v + w, v * w);
        cout << v << endl;

        // max(v, w) = Rational(0, 1);

        Rational tab[5] = {{1,1},{2,1},{3,1},{4,1},{5,1}};
        Rational sum = sumTable(tab, 5);
        cout << sum << endl;
    }

    Rational inv[15];
    cout << sumTable(fillInverse(inv, 15), 15) << endl;


}