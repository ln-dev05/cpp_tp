#if !defined(H_MATRIX)
#define H_MATRIX

#include <iostream>

class Matrix
{
private:
    int _columns;
    int _lines;
    double * _data;

public:
    Matrix(int lines = 0, int columns = 0);
    Matrix(int lines, int columns, double * data);
    ~Matrix();
    Matrix(const Matrix & matrix);
    Matrix(Matrix && rmatrix);
    Matrix & operator=(const Matrix & matrix);
    Matrix & operator=(Matrix && rmatrix);
    double * operator[](const int line) const;
    
    Matrix operator+(const Matrix & matrix) const;
    Matrix operator-(const Matrix & matrix) const;
    Matrix operator-() const;
    Matrix operator*(const Matrix & matrix) const;
    friend std::ostream & operator<<(std::ostream & out, const Matrix & matrix); 
    friend std::istream & operator>>(std::istream & in, Matrix & matrix);

    bool is_square();
    Matrix transpose();

    void display(std::ostream & out) const;

    double get(const int line, const int column) const;
    void set(const int line, const int column, const double value);

    static Matrix EYE(int size);
};




#endif // H_MATRIX
