#ifndef MATRIX2_H
#define MATRIX2_H

#include "MathAPI.h"

class MATH_API Matrix2f
{
private:
    float m[4]; // Matrix data
public:
    // Ctor
    Matrix2f();
    Matrix2f(const class Vector2f& x, const class Vector2f& y);
    
    // Dtor
    ~Matrix2f();
    
    // Prints the matrix
    void Print() const;
    
    // Returns identity matrix
    static Matrix2f Identity();
    
    // Access operator
    float& operator()(unsigned int row, unsigned int col);
    
    // Assignment operator
    Matrix2f& operator=(const Matrix2f& rhs);
    
    // Adition function
    static Matrix2f Add(const Matrix2f& lhs, const Matrix2f& rhs);
    
    // Subtraction function
    static Matrix2f Subtract(const Matrix2f& lhs, const Matrix2f& rhs);
    
    // Multiply functions
    static Matrix2f Multiply(const Matrix2f& lhs, const float rhs);
    static Matrix2f Multiply(const Matrix2f& lhs, const Matrix2f& rhs);
    static class Vector2f Multiply(const Matrix2f& lhs, const class Vector2f& rhs);
    
    // Returns the diagonal of the matrix in vector form
    class Vector2f GetDiagonal() const;
    
    // Returns the sum of the diagonal
    float GetTrace() const;
    
};

// Addition Operator
inline MATH_API Matrix2f operator+(const Matrix2f& lhs, const Matrix2f& rhs) { return Matrix2f::Add(lhs, rhs); }

// Subtraction Operator
inline MATH_API Matrix2f operator-(const Matrix2f& lhs, const Matrix2f& rhs) { return Matrix2f::Subtract(lhs, rhs); }

// Multiplication operators
inline MATH_API Matrix2f operator*(const Matrix2f& lhs, const float rhs) { return Matrix2f::Multiply(lhs, rhs); }
inline MATH_API Matrix2f operator*(const float lhs, const Matrix2f& rhs) { return Matrix2f::Multiply(rhs, lhs); }
inline MATH_API Matrix2f operator*(const Matrix2f& lhs, const Matrix2f& rhs) { return Matrix2f::Multiply(lhs, rhs); }
inline MATH_API Vector2f operator*(const Matrix2f& lhs, const class Vector2f& rhs) { return Matrix2f::Multiply(lhs, rhs); }


#endif