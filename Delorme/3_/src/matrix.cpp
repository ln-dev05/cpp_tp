#include "matrix.h"
#include <string.h>

Matrix::Matrix() :_line(0), _col(0), _tab(nullptr) {
    // std::cout << "++Matrix()" << std::endl;
}

Matrix::Matrix(int line, int column) :_line(line), _col(column) {
    // std::cout << "++Matrix(int, int)" << std::endl;
    _tab = new double[_line * _col]();
}

Matrix::Matrix(int line, int col, const double * data) :_line(line), _col(col) {
    // std::cout << "++Matrix(int, int, double *)" << std::endl;
    _tab = new double[_line * _col];
    memcpy(_tab, data, sizeof(double) * _line * _col);
}

Matrix::Matrix(int line, int col, double * && data) :_line(line), _col(col) {
    // std::cout << "++Matrix(int, int, double * &&)" << std::endl;
    _tab = data;
    data = nullptr;
}

Matrix::Matrix(const Matrix & m) :_line(m._line), _col(m._col) {
    // std::cout << "++Matrix(Matrix &)" << std::endl;
    if (m._tab) {
        _tab = new double[_line * _col];
        memcpy(_tab, m._tab, sizeof(double) * _line * _col);
    } else {
        _tab = nullptr;
    }
}

Matrix::Matrix(Matrix && m) {
    // std::cout << "++Matrix(Matrix &&)" << std::endl;
    _line = m._line;
    _col = m._col;
    _tab = m._tab;
    
    m._line = 0;
    m._col = 0;
    m._tab = nullptr;
}

Matrix::~Matrix() {
    // std::cout << "--Matrix()" << std::endl;
    delete[] _tab;
}

void Matrix::display(std::ostream & out) const {
    out << "[";
    for (int y = 0; y < _line; y++) {
        out << "[" << _tab[coord(y, 0)];
        for (int x = 1; x < _col; x++) {
            out << ", " << _tab[coord(y, x)];
        }
        out << "]";

        if (y < _line - 1) out << ", ";

    }
    out << "]";
}

void Matrix::fillAllLines(std::istream & in, std::ostream & out) const {
    
    for (int line = 0; line < _line; line++) {
        for (int col = 0; col < _col; col++) {
            out << "Enter the value at " << line << ":" << col << " :" << std::endl;
            in >> _tab[coord(line, col)];
        } 
    }
}


Matrix & Matrix::operator=(const Matrix & other) {
    if (this == &other) {
        return *this;
    }

    _line = other._line;
    _col = other._col;

    if (_tab) delete[] _tab;
    _tab = nullptr;

    if (other._tab) {
        _tab = new double[other._line * other._col];
        memcpy(_tab, other._tab, sizeof(double) * other._line * other._col);
    }

    return *this;
}

Matrix & Matrix::operator=(Matrix && other) {
    _line = other._line;
    _col = other._col;

    if (_tab) delete[] _tab;
    _tab = other._tab;
    other._tab = nullptr;

    return *this;
}

double * Matrix::operator[](int indice) const {
    if (indice < 0 || indice > _line) throw "Line out of bounds";

    return &_tab[coord(indice, 0)];
}

double & Matrix::operator()(int line, int col) {
    handle_bornes(line, col);

    return _tab[coord(line, col)];
}

double Matrix::operator()(int line, int col) const {
    handle_bornes(line, col);

    return _tab[coord(line, col)];
}

Matrix Matrix::operator+(const Matrix & b) const {
    if (_line != b._line) throw "Line does not match between the two matrixes";
    if (_col != b._col) throw "Col does not match between the two matrixes"; 

    double * sumMatrixes = new double[_line * _col]();
    for (int i = 0; i < (_line * _col); i++) {
        sumMatrixes[i] = _tab[i] + b._tab[i];
    }

    return Matrix (_line, _col, sumMatrixes);
}

Matrix Matrix::operator-(const Matrix & b) const {
    return *this + -b;
}

Matrix Matrix::operator*(const Matrix & b) const {

    if (_line != b._col) throw "Line do not match column";

    double * mult = new double[_line * b._col]();
    for (int line = 0; line < _line; line++) {
        for (int col = 0; col < _col; col++) {
            for (int k = 0; k < _line; k++) {

                mult[line * _col + col] += _tab[line * _col + k] * b._tab[k * _col + col];

            }
        }
    }
    return Matrix(_line, _col, mult);

}

Matrix Matrix::operator-() const {
    double * inverse = new double[_line * _col]();
    for (int i = 0; i < (_line * _col); i++) {
        inverse[i] = -_tab[i];
    }
    return Matrix(_line, _col, inverse);
}


std::ostream & operator<<(std::ostream & out, const Matrix & m) {
    m.display(out);
    return out;
}

std::istream & operator>>(std::istream & in, const Matrix & m) {
    m.fillAllLines(in, std::cout);
    return in;
}

Matrix Matrix::identite(int taille) {
    double * identite = new double[taille * taille]();
    for (int i = 0; i < taille; i++) {
        identite[i] = 1;
        taille += taille;
    }
    return Matrix(taille, taille, identite);
}
