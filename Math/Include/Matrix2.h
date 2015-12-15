#ifndef MATRIX2_H
#define MATRIX2_H

#include "MathAPI.h"

class MATH_API Matrix2f
{
private:
    float m[4]; // Matrix data
public:
    
    Matrix2f();
    
    ~Matrix2f();
    
    // Returns identity matrix
    static Matrix2f Identity();
    
    // Assignment operator
    Matrix2f& operator=(const Matrix2f& rhs);
    
};


#endif