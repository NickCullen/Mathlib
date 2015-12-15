#ifndef MATRIX4_H
#define MATRIX4_H

#include "MathAPI.h"

class MATH_API Matrix4f
{
private:
    float m[16]; // Matrix data
public:
    
    Matrix4f();
    
    ~Matrix4f();
    
    // Returns identity matrix
    static Matrix4f Identity();
    
    // Assignment operator
    Matrix4f& operator=(const Matrix4f& rhs);
    
};


#endif