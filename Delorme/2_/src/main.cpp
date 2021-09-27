#include <iostream>
#include "rational.h"

using namespace std;


Rational sqr(const Rational & r) {
    return r^2;
}


int main(void){

    if (false) {
        Rational s(long(1), long(4));
        cout << s << endl;
        cout << s.getInverse() << endl;

        Rational t(long(1), long(3));

        cout << (s+t) << endl;
        cout << (s*t) << endl;
        cout << (s-t) << endl;
        cout << (s/t) << endl;

        cout << (s^4) << endl;

        Rational r(-s);
        cout << r << endl;
    }

    Rational r(1, 4);
    cout << sqr(r) << endl;

}