#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational {
    long _num;
    long _den;

    static long pgcd(long a, long b);

    public:
    Rational();
    Rational(long num);
    Rational(long num, long den);

    Rational(const Rational & r);
    ~Rational();

    inline long getNum() const {
        return _num;
    }

    inline long getDen() const {
        return _den;
    }

    inline bool getSigne() const {
        return (_num >= 0);
    }
    
    inline Rational getInverse() const {
        return Rational(_den, _num);
    }

    void display(std::ostream & out) const;

    Rational pow(const int & exp) const;

    friend std::ostream & operator<< (std::ostream & out, const Rational & r);

    Rational operator+ (const Rational & b) const;

    Rational operator- (const Rational & b) const;

    Rational operator- () const;

    Rational & operator= (const Rational & r);

};

Rational operator* (const Rational & a, const Rational & b);

Rational operator/ (const Rational & a, const Rational & b);

Rational sqr(const Rational & r);

const Rational & rmax(const Rational & a, const Rational & b);

bool operator< (const Rational & a, const Rational & b);

bool operator> (const Rational & a, const Rational & b);

bool operator<= (const Rational & a, const Rational & b);

bool operator>= (const Rational & a, const Rational & b);

Rational sumTable(const Rational tab [], const int size);

Rational * fillInverse(Rational tab [], const int size);


#endif