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
    
    // Getters for elements
    inline float GetElement(int row, int col) const
    {
        #ifdef ROWMAJOR
        return m[row * 2 + col];
        #else
        return m[col * 2 + row];
        #endif
    }
    
    // Setters for elements
    inline void SetElement(int row, int col, float val)
    {
        #ifdef ROWMAJOR
        m[row * 2 + col] = val;
        #else
        m[col * 2 + row] = val;
        #endif
    }
    
    // Returns identity matrix
    static Matrix2f Identity();
    
    // Assignment operator
    Matrix2f& operator=(const Matrix2f& rhs);
    
    // Adition function
    static Matrix2f Add(const Matrix2f& lhs, const Matrix2f& rhs);
    
    // Subtraction function
    static Matrix2f Subtract(const Matrix2f& lhs, const Matrix2f& rhs);
    
    // Multiply functions
    static Matrix2f Multiply(const Matrix2f& lhs, const float rhs);
    
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

#endif