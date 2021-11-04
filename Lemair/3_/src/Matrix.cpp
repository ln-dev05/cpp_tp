#include "Matrix.h"

#include <string.h>

using namespace std;

Matrix::Matrix(int lines, int columns)
    : _columns(columns), _lines(lines) {
    if (lines < 0 || columns < 0) {
        throw "Error invalid value for lines or columns";
    }

    int nb_coef = _lines*_columns;
    _data = (nb_coef==0) ? nullptr : new double[nb_coef]();
}

Matrix::Matrix(const Matrix& matrix)
    : Matrix(matrix._lines, matrix._columns) {
    _data = new double[_columns * _lines]();
    memcpy(_data, matrix._data, sizeof(double) * _lines * _columns);
}

Matrix::Matrix(Matrix&& rmatrix)
    : Matrix(rmatrix._lines, rmatrix._columns, rmatrix._data) {
    cout << "rrrMatrix(&&)" << endl;
    rmatrix._data = nullptr;
}

Matrix& Matrix::operator=(const Matrix& matrix) {
    if (this == &matrix) {
        return *this;
    }

    _columns = matrix._columns;
    _lines = matrix._lines;

    delete[] _data;
    _data = new double[_lines * _columns]();
    memcpy(_data, matrix._data, sizeof(double) * _lines * _columns);

    return *this;
}

Matrix& Matrix::operator=(Matrix&& rmatrix) {
    cout << "===Matrix(&&)" << endl;
    _columns = rmatrix._columns;
    _lines = rmatrix._lines;

    delete[] _data;
    _data = rmatrix._data;

    rmatrix._data = nullptr;
    return *this;
}

/* Ne rescpecte pas les règles d'encapsulation */
double* Matrix::operator[](const int line) const {
    if (line > _lines) {
        throw "Overflow";
    }
    return _data + line * _columns;
}

double & Matrix::operator()(const int line, const int column) {
    if (line > _lines || column > _columns) {
        throw "Overflow";
    }
    return *(_data + line * _columns + column);
}

Matrix Matrix::operator+(const Matrix& matrix) const {
    if (_lines == matrix._lines && _columns == matrix._columns) {
        Matrix tmp(_lines, _columns);
        for (int i = 0; i < _lines * _columns; i++) {
            tmp._data[i] = _data[i] + matrix._data[i];
        }
        return tmp;
    }
    throw "Dimensions don't match !";
}
Matrix Matrix::operator-(const Matrix& matrix) const {
    return *this + (-matrix);
}
Matrix Matrix::operator-() const {
    Matrix tmp(_lines, _columns);
    for (int i = 0; i < _lines * _columns; i++) {
        tmp._data[i] = -_data[i];
    }
    return tmp;
}
Matrix Matrix::operator*(const Matrix& matrix) const {
    if (_columns == matrix._lines) {
        Matrix tmp(_lines, matrix._columns);
        for (int i = 0; i < tmp._lines; i++) {
            for (int j = 0; j < tmp._columns; j++) {
                for (int k = 0; k < matrix._columns; k++) {
                    tmp[i][j] = (*this)[i][k] * matrix[k][j];
                }
            }
        }
        return tmp;
    }
    throw "Dimensions don't match !";
}
ostream& operator<<(ostream& out, const Matrix& matrix) {
    if (matrix._data != nullptr) matrix.display(out);
    return out;
}
istream& operator>>(istream& in, Matrix& matrix) {
    int lines;
    int columns;
    cout << "hello I will help you to create a matrix" << endl;

    cout << "lines :" << endl;
    in >> lines;
    cout << "columns :" << endl;
    in >> columns;

    matrix = Matrix(lines, columns);

    for (int i = 0; i < matrix._lines * matrix._columns; i++) {
        cout << "matrix[" << i / matrix._lines << "][" << i % matrix._lines << "] :" << endl;
        in >> matrix._data[i];
    }

    return in;
}

Matrix Matrix::transpose() {
    Matrix tmp(_lines, _columns);
    for (int i = 0; i < _lines; i++) {
        for (int j = 0; j < _columns; j++) {
            tmp[i][j] = (*this)[j][i];
        }
    }
    return tmp;
}

void Matrix::display(ostream& out) const {
    out << "[";
    for (int i = 0; i < _lines - 1; i++) {
        out << "[";
        for (int j = 0; j < _columns - 1; j++) {
            out << _data[i * _lines + j] << ", ";
        }
        out << _data[i * _lines + _lines - 1] << "]," << endl;
    }
    out << "[";
    for (int j = 0; j < _columns - 1; j++) {
        out << _data[(_lines - 1) * _lines + j] << ", ";
    }
    out << _data[(_lines - 1) * _lines + _columns - 1];
    out << "]]" << endl;
}

Matrix Matrix::EYE(int size) {
    Matrix tmp(size, size);
    for (int i = 0; i < size; i++) {
        tmp(i,i) = 1;
    }
    return tmp;
}