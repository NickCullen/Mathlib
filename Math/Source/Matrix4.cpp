#include "MathLib.h"
#include <stdio.h>

// Our default is column major so column major will be
// linear in memory. Row major needs abit of tweeking
#ifdef ROWMAJOR
/*
 | 0  1  2  3  |
 | 4  5  6  7  |
 | 8  9  10 11 |
 | 12 13 14 15 |
 
 {0, 4, 8, 12, 1, 5, 9, 13, 2, 6, 10, 14, 3, 7, 11, 15}
 */
#define E0 0
#define E1 4
#define E2 8
#define E3 12
#define E4 1
#define E5 5
#define E6 9
#define E7 13
#define E8 2
#define E9 6
#define E10 10
#define E11 14
#define E12 3
#define E13 7
#define E14 11
#define E15 15
#else
/*
 | 0  4  8   12 |
 | 1  5  9   13 |
 | 2  6  10  14 |
 | 3  7  11  15 |
 
 {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}
 */
#define E0 0
#define E1 1
#define E2 2
#define E3 3
#define E4 4
#define E5 5
#define E6 6
#define E7 7
#define E8 8
#define E9 9
#define E10 10
#define E11 11
#define E12 12
#define E13 13
#define E14 14
#define E15 15
#endif

Matrix4f::Matrix4f()
{
    
}

Matrix4f::Matrix4f(const Vector4f& x,const Vector4f& y,const Vector4f& z)
{
    m[E0] = x.x; m[E4] = y.x; m[E8] = z.x;  m[E12] = 0.0f;
    m[E1] = x.y; m[E5] = y.y; m[E9] = z.y;  m[E13] = 0.0f;
    m[E2] = x.z; m[E6] = y.z; m[E10] = z.z; m[E14] = 0.0f;
    m[E3] = x.w; m[E7] = y.w; m[E11] = z.w; m[E15] = 1.0f;
}
Matrix4f::Matrix4f(const Vector4f& x,const Vector4f& y,const Vector4f& z, const Vector4f& w)
{
    m[E0] = x.x; m[E4] = y.x; m[E8] = z.x;  m[E12] = w.x;
    m[E1] = x.y; m[E5] = y.y; m[E9] = z.y;  m[E13] = w.y;
    m[E2] = x.z; m[E6] = y.z; m[E10] = z.z; m[E14] = w.z;
    m[E3] = x.w; m[E7] = y.w; m[E11] = z.w; m[E15] = w.w;
}

Matrix4f::~Matrix4f()
{
    
}

void Matrix4f::Print() const
{
    printf("| %.3f %.3f %.3f %.3f|\n| %.3f %.3f %.3f %.3f|\n| %.3f %.3f %.3f %.3f|\n| %.3f %.3f %.3f %.3f|",
           m[E0], m[E4], m[E8], m[E12],
           m[E1], m[E5], m[E9], m[E13],
           m[E2], m[E6], m[E10], m[E14],
           m[E3], m[E7], m[E11], m[E15]);
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
