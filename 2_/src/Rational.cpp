#include "Rational.h"
#include "math.h"

Rational::Rational(long num, long den)
{
    long pgcd;

    pgcd = gcd(num, den);

    _num = num/pgcd;
    _den = den/pgcd;
}
Rational::~Rational()
{

}

Rational::Rational(const Rational & other)
{
    _num = other.getNum();
    _den = other.getDen();
}

Rational somme(const Rational & left, const Rational & right)
{
    Rational r(left.getNum()*right.getDen()+right.getNum()*left.getDen(), left.getDen()*right.getDen());
    return r;
} 

Rational negation(const Rational & R)
{
    Rational r( - R.getNum(), R.getDen());
    return r;
} 

Rational difference(const Rational & left, const Rational & right)
{
    return somme(left, negation(right));
}

Rational produit(const Rational & left, const Rational & right)
{
    Rational r(left.getNum()*right.getNum(), left.getDen()*right.getDen());
    return r;
} 

Rational quotient(const Rational & left, const Rational & right)
{
    Rational inv_right = right.inverse();
    return produit(left, inv_right);
}

Rational Rational::pow(const Rational & R, int n)
{
    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        return pow(R.inverse(), -n);
    }
    if (n % 2) {
        return produit(R, pow(R, n-1));
    }
    Rational temp = pow(R, n/2);
    return produit(temp, temp);
}

Rational Rational::operator+(const Rational & right){
    return somme(*this, right);
}
Rational Rational::operator-(const Rational & right){
    return difference(*this, right);
}
Rational Rational::operator*(const Rational & right){
    return produit(*this, right);
}
Rational Rational::operator/(const Rational & right){
    return quotient(*this, right);
}
Rational Rational::operator-(){
    return negation(*this);
}

std::ostream & operator<<(std::ostream & out, const Rational & r)
{
    out << r.getNum() << "/" << r.getDen();
    return out;
}
