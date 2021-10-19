#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix {

public:

    Matrix();
    Matrix(int line, int col = 1);
    Matrix(int line, int col, const double * data);
    Matrix(int line, int col, double * && data);
    Matrix(const Matrix & m);
    Matrix(Matrix && m);
    ~Matrix();

    void display(std::ostream & out) const;
    void fillAllLines(std::istream & in, std::ostream & out) const;
    
    Matrix & operator=(const Matrix & other);
    Matrix & operator=(Matrix && other);
    double * operator[](int indice) const;

    double & operator()(int line, int col);
    double operator()(int line, int col) const;

    Matrix operator+(const Matrix & b) const;
    Matrix operator-(const Matrix & b) const;
    Matrix operator*(const Matrix & b) const;
    Matrix operator-() const;

    inline bool isCarre() const {
        return _line == _col;
    }

    static Matrix identite(int taille);

private:

    inline int coord(int line, int col) const {
        return line * _col + col;    
    }
    
    void handle_bornes(int line, int col) const {
        if (line < 0 || line > _line) throw "Line incorrect";
        if (col < 0 || line > _col) throw "Column incorrect";
    }

    int _line;
    int _col;
    double * _tab;
};

std::ostream & operator<<(std::ostream & out, const Matrix & m);
std::istream & operator>>(std::istream & in, const Matrix & m);


#endif