#ifndef MATRIX4_H
#define MATRIX4_H

#include "MathAPI.h"

class MATH_API Matrix4f
{
private:
    float m[16]; // Matrix data
public:
    
    Matrix4f();
    Matrix4f(const class Vector4f& x,const class Vector4f& y,const class Vector4f& z);
    Matrix4f(const class Vector4f& x,const class Vector4f& y,const class Vector4f& z, const class Vector4f& w);
    
    ~Matrix4f();
    
    // Prints the matrix
    void Print() const;
    
    // Returns identity matrix
    static Matrix4f Identity();
    
    // Access operator
    float& operator()(unsigned int row, unsigned int col);
    
    // Assignment operator
    Matrix4f& operator=(const Matrix4f& rhs);
    
    // Adition function
    static Matrix4f Add(const Matrix4f& lhs, const Matrix4f& rhs);
    
    // Subtraction function
    static Matrix4f Subtract(const Matrix4f& lhs, const Matrix4f& rhs);
    
    // Multiply Functions
    static Matrix4f Multiply(const Matrix4f& lhs, const float rhs);
    
    // Returns the diagonal of the matrix in vector form
    class Vector4f GetDiagonal() const;
    
    // Returns the sum of the diagonal
    float GetTrace() const;

};

// Addition Operator
inline MATH_API Matrix4f operator+(const Matrix4f& lhs, const Matrix4f& rhs) { return Matrix4f::Add(lhs, rhs); }

// Subtraction Operator
inline MATH_API Matrix4f operator-(const Matrix4f& lhs, const Matrix4f& rhs) { return Matrix4f::Subtract(lhs, rhs); }

// Multiplication operators
inline MATH_API Matrix4f operator*(const Matrix4f& lhs, const float rhs) { return Matrix4f::Multiply(lhs, rhs); }
inline MATH_API Matrix4f operator*(const float lhs, const Matrix4f& rhs) { return Matrix4f::Multiply(rhs, lhs); }
#endif