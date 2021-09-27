#include <iostream>
#include "rational.h"


Rational::Rational() {
    std::cout << "+++Rational()" << std::endl;
    _num = 0;
    _den = 1;
}

long Rational::pgcd(long a, long b) {
    if (b == 0) return (a < 0 ? -a : a);
    return Rational::pgcd(b, a % b);
}

Rational::Rational(long num, long den) {
    std::cout << "+++Rational(" << num << "," << den << ")" << std::endl;
     long g = Rational::pgcd(num, den);
     _num = (den > 0 ? 1 : -1) * long(num / g); 
     _den = long((den < 0 ? -den : den) / g);
}


Rational::Rational(const Rational & r) {
    std::cout << "rrrRational(" << r.getNum() << "," << r.getDen() << ")" << std::endl;
    _num = r.getNum();
    _den = r.getDen();
}

Rational::~Rational() {
    std::cout << "---Rational(" << _num << "," << _den << ")" << std::endl;
}

Rational Rational::operator^(const int & exp) const {

    if (exp < 0) {
        return this->getInverse()^(-exp);
    } else if (exp == 1) {
        return *this;
    } else if (exp % 2 == 1) {
        return *(this) * ((*this)^(exp-1));
    } else {
        return (*(this)^(exp/2)) * (*(this)^(exp/2));
    }
}

void Rational::display(std::ostream & out) const{
    if (this->getDen() == 1) {
        out << this->getNum();
    } else {
        out << "(" << this->getNum() << "/" << this->getDen() << ")";
    }
}


std::ostream & operator<< (std::ostream & out, const Rational & r) {
    r.display(out);
    return out;
}


Rational operator* (const Rational & a, const Rational & b) {
    std::cout << "* (a, b)" << std::endl;
    return Rational(a.getNum() * b.getNum(), a.getDen() * b.getDen());
}

Rational operator/ (const Rational & a, const Rational & b) {
    std::cout << "/ (a, b)" << std::endl;
    Rational inverse = b.getInverse();
    return a * inverse;
}


Rational Rational::operator+ (const Rational & b) const {
    std::cout << "a.+(b) " << std::endl;
    return Rational(this->getNum() * b.getDen() + b.getNum() * this->getDen(), this->getDen() * b.getDen());
}

Rational Rational::operator- (const Rational & b) const {
    std::cout << "a.-(b)" << std::endl;
    return Rational(this->getNum() * b.getDen() - b.getNum() * this->getDen(), this->getDen() * b.getDen());
}

Rational Rational::operator- () const {
    return Rational(-this->getNum(), this->getDen());
}
