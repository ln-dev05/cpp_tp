#include "matrix.h"
#include <string.h>

Matrix::Matrix() :_line(0), _col(0), _tab(nullptr) {}

Matrix::Matrix(int line, int column) :_line(line), _col(column) {
    _tab = new double[_line * _col];
}

Matrix::Matrix(int line, int col, const double * data) :_line(line), _col(col) {
    _tab = new double[_line * _col];
    memcpy(_tab, data, sizeof(double) * _line * _col);
}

Matrix::Matrix(const Matrix & m) :_line(m._line), _col(m._col) {
    if (m._tab) {
        _tab = new double[_line * _col];
        memcpy(_tab, m._tab, sizeof(double) * _line * _col);
    } else {
        _tab = nullptr;
    }
}

Matrix::Matrix(Matrix && m) {
    _line = m._line;
    _col = m._col;
    _tab = m._tab;
    m._tab = nullptr;
}

Matrix::~Matrix() {
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

void Matrix::handle_bornes(int line, int col) {

    if (line < 0 || line > _line) throw "Line incorrect";

    if (col < 0 || line > _col) throw "Column incorrect";

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
    return &_tab[coord(indice, 0)];
}

Matrix Matrix::sumSubstract(const Matrix & b, bool signe) {

    if (_line != b._line) throw "Line does not match between the two matrixes";
    if (_col != b._col) throw "Col does not match between the two matrixes"; 

    double * sumMatrixes = new double[_line * _col];
    for (int i = 0; i < (_line * _col); i++) {
        sumMatrixes[i] = _tab[i] + (signe ? 1 : -1) * b._tab[i];
    }

    return Matrix (_line, _col, sumMatrixes);
}

Matrix Matrix::operator+(const Matrix & b) const {
    return sumSubstract(b, true);
}

Matrix Matrix::operator-(const Matrix & b) const {
    return sumSubstract(b, false);
}

Matrix Matrix::operator*(const Matrix & b) const {

    if (_line != b._col) throw "Line do not match column";

    

}

Matrix Matrix::operator-() const {

}


std::ostream & operator<<(std::ostream & out, const Matrix & m) {
    m.display(out);
    return out;
}