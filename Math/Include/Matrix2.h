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
    
    // Addition operator
    Matrix2f operator+(const Matrix2f& other);
    
    // Adition function
    static Matrix2f Add(const Matrix2f& lhs, const Matrix2f& rhs);
    
    // Returns the diagonal of the matrix in vector form
    class Vector2f GetDiagonal() const;
    
    // Returns the sum of the diagonal
    float GetTrace() const;
    
};


#endif