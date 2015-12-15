#ifndef MATRIX3_H
#define MATRIX3_H

#include "MathAPI.h"

class MATH_API Matrix3f
{
private:
    float m[9]; // Matrix data
public:
    
    Matrix3f();
    
    ~Matrix3f();
    
    // Returns identity matrix
    static Matrix3f Identity();
    
    // Assignment operator
    Matrix3f& operator=(const Matrix3f& rhs);
};

#endif