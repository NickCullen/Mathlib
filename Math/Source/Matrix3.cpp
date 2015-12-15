#include "MathLib.h"
#include <stdio.h>

Matrix3f::Matrix3f()
{
    
}

Matrix3f::~Matrix3f()
{
    
}

Matrix3f Matrix3f::Identity()
{
    Matrix3f ret;
    
    ret.m[0] = 1.0f; ret.m[3] = 0.0f; ret.m[6] = 0.0f;
    ret.m[1] = 0.0f; ret.m[4] = 1.0f; ret.m[7] = 0.0f;
    ret.m[2] = 0.0f; ret.m[5] = 0.0f; ret.m[8] = 1.0f;
    
    return ret;
}

Matrix3f& Matrix3f::operator=(const Matrix3f& rhs)
{
    m[0] = rhs.m[0]; m[3] = rhs.m[3]; m[6] = rhs.m[6];
    m[1] = rhs.m[1]; m[4] = rhs.m[4]; m[7] = rhs.m[7];
    m[2] = rhs.m[2]; m[5] = rhs.m[5]; m[8] = rhs.m[8];
    
    return *this;
}