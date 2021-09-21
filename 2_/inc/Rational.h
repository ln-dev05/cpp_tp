#if !defined(H_RATIONAL)
#define H_RATIONAL

#include <iostream>

class Rational
{
private:
    long _num;
    long _den;
public:
    Rational(long num = 0, long den = 1);
    ~Rational();
    Rational(const Rational & other);

    inline long getNum() const;
    inline long getDen() const;
    inline int sign() const;
    inline void print(std::ostream & out) const;
    inline Rational inverse() const;

    Rational pow(const Rational & R, int n);

    Rational operator+(const Rational & right);
    Rational operator-(const Rational & right);
    Rational operator*(const Rational & right);
    Rational operator/(const Rational & right);
    Rational operator-();
    friend std::ostream& operator<<(std::ostream & out, const Rational & r);

};

inline long Rational::getNum() const
{
    return _num;
}

inline long Rational::getDen() const
{
    return _den;
}

inline int Rational::sign() const
{
    return ((_num < 0 && _den < 0) || (_num > 0 && _den > 0))? 1 : -1;
}

inline void Rational::print(std::ostream & out) const
{
    out << _num << "/" << _den << std::endl; 
}

inline Rational Rational::inverse() const
{
    Rational new_rational(_den, _num);
    return new_rational;
}


#endif // H_RATIONAL
