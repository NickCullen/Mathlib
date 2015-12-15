#include "MathLib.h"
#include <stdio.h>

Matrix2f::Matrix2f()
{
    
}

Matrix2f::~Matrix2f()
{
    
}

Matrix2f Matrix2f::Identity()
{
    Matrix2f ret;
    
    ret.m[0] = 1.0f; ret.m[2] = 0.0f;
    ret.m[1] = 0.0f; ret.m[3] = 1.0f;
    
    return ret;
}

Matrix2f& Matrix2f::operator=(const Matrix2f& rhs)
{
    m[0] = rhs.m[0]; m[2] = rhs.m[2];
    m[1] = rhs.m[1]; m[3] = rhs.m[3];
    return *this;
}