#include "MathLib.h"
#include <stdio.h>

// Our default is column major so column major will be
// linear in memory. Row major needs abit of tweeking
#ifdef ROWMAJOR
/*
 | 0 1 2 |
 | 3 4 5 |
 | 6 7 8 |
 
 {0, 3, 6, 1, 4, 7, 2, 5, 8}
 */
#define E0 0
#define E1 3
#define E2 6
#define E3 1
#define E4 4
#define E5 7
#define E6 2
#define E7 5
#define E8 8
#else
/*
 | 0 3 6 |
 | 1 4 7 |
 | 2 5 8 |
 
 {0, 1, 2, 3, 4, 5, 6, 7, 8}
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
#endif

Matrix3f::Matrix3f()
{
    
}

Matrix3f::Matrix3f(const Vector3f&x, const Vector3f&y, const Vector3f&z)
{
    m[E0] = x.x; m[E3] = y.x; m[E6] = z.x;
    m[E1] = x.y; m[E4] = y.y; m[E7] = z.y;
    m[E2] = x.z; m[E5] = y.z; m[E8] = z.z;
}

Matrix3f::~Matrix3f()
{
    
}

void Matrix3f::Print() const
{
    printf("| %.3f %.3f %.3f |\n| %.3f %.3f %.3f |\n| %.3f %.3f %.3f |", m[E0], m[E3], m[E6],
                                                                         m[E1], m[E4], m[E7],
                                                                         m[E2], m[E5], m[E8]);
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