#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix {

public:

    Matrix();
    Matrix(int line, int col = 1);
    Matrix(int line, int col, const double * data);
    Matrix(const Matrix & m);
    Matrix(Matrix && m);
    ~Matrix();

    void display(std::ostream & out) const;
    


    Matrix & operator=(const Matrix & other);
    Matrix & operator=(Matrix && other);
    double * operator[](int indice) const;

    Matrix operator+(const Matrix & b) const;
    Matrix operator-(const Matrix & b) const;
    Matrix operator*(const Matrix & b) const;
    Matrix operator-() const;

private:

    inline int coord(int line, int col) const {
        return line * _col + col;    
    }
    
    void handle_bornes(int line, int col);

    Matrix sumSubstract(const Matrix & b, bool signe);


    int _line;
    int _col;
    double * _tab;
};

std::ostream & operator<<(std::ostream & out, const Matrix & m);


#endif