#ifndef MATRIX3_H
#define MATRIX3_H

#include "MathAPI.h"

class MATH_API Matrix3f
{
private:
    float m[9]; // Matrix data
public:
    
    // Ctor
    Matrix3f();
    Matrix3f(const class Vector3f&x, const class Vector3f&y, const class Vector3f&z);
    
    ~Matrix3f();
    
    // Prints the matrix
    void Print() const;
    
    // Getters for elements
    inline float GetElement(int row, int col) const
    {
        #ifdef ROWMAJOR
        return m[row * 3 + col];
        #else
        return m[col * 3 + row];
        #endif
    }
    
    // Setters for elements
    inline void SetElement(int row, int col, float val)
    {
        #ifdef ROWMAJOR
        m[row * 3 + col] = val;
        #else
        m[col * 3 + row] = val;
        #endif
    }
    
    // Returns identity matrix
    static Matrix3f Identity();
    
    // Assignment operator
    Matrix3f& operator=(const Matrix3f& rhs);
    
    // Adition function
    static Matrix3f Add(const Matrix3f& lhs, const Matrix3f& rhs);
    
    // Subtraction function
    static Matrix3f Subtract(const Matrix3f& lhs, const Matrix3f& rhs);
    
    // Returns the diagonal of the matrix in vector form
    class Vector3f GetDiagonal() const;
    
    // Returns the sum of the diagonal
    float GetTrace() const;
    
    
};

// Addition Operator
inline MATH_API Matrix3f operator+(const Matrix3f& lhs, const Matrix3f& rhs) { return Matrix3f::Add(lhs, rhs); }

// Subtraction Operator
inline MATH_API Matrix3f operator-(const Matrix3f& lhs, const Matrix3f& rhs) { return Matrix3f::Subtract(lhs, rhs); }

#endif