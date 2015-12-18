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
    
    // Getters for elements
    inline float GetElement(int row, int col) const
    {
        #ifdef ROWMAJOR
        return m[row * 4 + col];
        #else
        return m[col * 4 + row];
        #endif
    }
    
    // Setters for elements
    inline void SetElement(int row, int col, float val)
    {
        #ifdef ROWMAJOR
        m[row * 4 + col] = val;
        #else
        m[col * 4 + row] = val;
        #endif
    }
    
    // Returns identity matrix
    static Matrix4f Identity();
    
    // Returns the diagonal of the matrix in vector form
    class Vector4f GetDiagonal() const;
    
    // Returns the sum of the diagonal
    float GetTrace() const;
    
    // Assignment operator
    Matrix4f& operator=(const Matrix4f& rhs);
    
};


#endif