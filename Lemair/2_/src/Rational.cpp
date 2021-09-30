#include "Rational.h"

#include "math.h"
Rational::Rational() {
    _num = 0;
    _den = 1;
    std::cerr << this << "+++Rational()" << std::endl;
}

Rational::Rational(const long num, const long den) {
    long pgcd;

    pgcd = gcd(num, den);

    _num = num / pgcd;
    _den = den / pgcd;
    std::cerr << this << "+++Rational( " << _num << " , " << _den << " )" << std::endl;
}
Rational::~Rational() {
    std::cerr << this << "---Rational( " << _num << " , " << _den << " )" << std::endl;
}

Rational::Rational(const Rational& other) {
    _num = other.getNum();
    _den = other.getDen();
    std::cerr << this << "rrrRational( " << _num << " , " << _den << " )" << std::endl;
}

Rational & Rational::operator=(const Rational & r)
{
    if (this == &r) return *this;
    _den = r._den;
    _num = r._num;

    return *this;
}

Rational somme(const Rational& left, const Rational& right) {
    Rational r(left.getNum() * right.getDen() + right.getNum() * left.getDen(), left.getDen() * right.getDen());
    return r;
}

Rational negation(const Rational& R) {
    Rational r(-R.getNum(), R.getDen());
    return r;
}

Rational difference(const Rational& left, const Rational& right) {
    return somme(left, negation(right));
}

Rational produit(const Rational& left, const Rational& right) {
    Rational r(left.getNum() * right.getNum(), left.getDen() * right.getDen());
    return r;
}

Rational quotient(const Rational& left, const Rational& right) {
    Rational inv_right = right.inverse();
    return produit(left, inv_right);
}

Rational Rational::pow(int n) const
{
    if (n == 0) {
        return Rational(1,1);
    }
    if (n < 0) {
        return this->inverse().pow(-n);
    }
    if (n % 2) {
        return produit(*this, this->pow(n - 1));
    }
    Rational temp = this->pow(n / 2);
    return produit(temp, temp);
}

Rational Rational::operator+(const Rational& right) const 
{
    return somme(*this, right);
}
Rational Rational::operator-(const Rational& right) const 
{
    return difference(*this, right);
}
Rational Rational::operator*(const Rational& right) const 
{
    return produit(*this, right);
}
Rational Rational::operator/(const Rational& right) const 
{
    return quotient(*this, right);
}
Rational Rational::operator-() {
    return negation(*this);
}

std::ostream& operator<<(std::ostream& out, const Rational& r) {
    out << r.getNum() << "/" << r.getDen();
    return out;
}

Rational sqr(const Rational& r)
{
    return r.pow(2);
}

const Rational & rmax(const Rational & a, const Rational & b)
{
    return (a.getNum() >= b.getNum() && b.getDen() >= a.getDen()) ? a : b;
}

Rational sum(const Rational tab[], const int size)
{
    Rational s(0,1);

    for (int i = 0; i < size; i++) {
        s = tab[i] + s;   
    }

    return s;
}