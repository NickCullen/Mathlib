#include "MathLib.h"
#include <stdio.h>

Matrix4f::Matrix4f()
{
    
}

Matrix4f::~Matrix4f()
{
    
}

Matrix4f Matrix4f::Identity()
{
    Matrix4f ret;
    
    ret.m[0] = 1.0f; ret.m[4] = 0.0f; ret.m[8] = 0.0f; ret.m[12] = 0.0f;
    ret.m[1] = 0.0f; ret.m[5] = 1.0f; ret.m[9] = 0.0f; ret.m[13] = 0.0f;
    ret.m[2] = 0.0f; ret.m[6] = 0.0f; ret.m[10] = 1.0f; ret.m[14] = 0.0f;
    ret.m[3] = 0.0f; ret.m[7] = 0.0f; ret.m[11] = 0.0f; ret.m[15] = 1.0f;
    
    return ret;
}

Matrix4f& Matrix4f::operator=(const Matrix4f& rhs)
{
    m[0] = rhs.m[0]; m[4] = rhs.m[4]; m[8] = rhs.m[8]; m[12] = rhs.m[12];
    m[1] = rhs.m[1]; m[5] = rhs.m[5]; m[9] = rhs.m[9]; m[13] = rhs.m[13];
    m[2] = rhs.m[2]; m[6] = rhs.m[6]; m[10] = rhs.m[10]; m[14] = rhs.m[14];
    m[3] = rhs.m[3]; m[7] = rhs.m[7]; m[11] = rhs.m[11]; m[15] = rhs.m[15];
    
    return *this;
}