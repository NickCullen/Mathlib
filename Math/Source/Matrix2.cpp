#include "MathLib.h"
#include <stdio.h>

// Our default is column major so column major will be
// linear in memory. Row major needs abit of tweeking
#ifdef ROWMAJOR
/*
 | 0 1 |
 | 2 3 |
 
 {0, 2, 1, 3}
 */
#define E0 0
#define E1 2
#define E3 1
#define E4 3
#else
/*
 | 0 2 |
 | 1 3 |
 
 {0, 1, 2, 3}
 */
#define E0 0
#define E1 1
#define E2 2
#define E3 3
#endif


Matrix2f::Matrix2f()
{
    
}

Matrix2f::Matrix2f(const Vector2f& x, const Vector2f& y)
{
    m[E0] = x.x;
    m[E1] = x.y;
    m[E2] = y.x;
    m[E3] = y.y;
}

Matrix2f::~Matrix2f()
{
    
}

void Matrix2f::Print() const
{
    printf("| %.3f %.3f |\n| %.3f %.3f |", m[E0], m[E2], m[E1], m[E3]);
}

Matrix2f Matrix2f::Identity()
{
    Matrix2f ret;
    
    ret.m[0] = 1.0f; ret.m[2] = 0.0f;
    ret.m[1] = 0.0f; ret.m[3] = 1.0f;
    
    return ret;
}

Matrix2f Matrix2f::Add(const Matrix2f& l, const Matrix2f& r)
{
    Matrix2f m;
    
    m.m[E0] = l.m[E0] + r.m[E0];
    m.m[E1] = l.m[E1] + r.m[E1];
    m.m[E2] = l.m[E2] + r.m[E2];
    m.m[E3] = l.m[E3] + r.m[E3];
    
    return m;
}


Matrix2f& Matrix2f::operator=(const Matrix2f& rhs)
{
    m[0] = rhs.m[0]; m[2] = rhs.m[2];
    m[1] = rhs.m[1]; m[3] = rhs.m[3];
    return *this;
}

Matrix2f Matrix2f::operator+(const Matrix2f& other)
{
    return Matrix2f::Add(*this, other);
}


Vector2f Matrix2f::GetDiagonal() const
{
    return Vector2f(m[E0], m[E3]);
}

float Matrix2f::GetTrace() const
{
    return m[E0] + m[E3];
}
