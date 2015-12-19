#include <stdio.h>
#include "MathLib.h"


int main(int argc, char** argv)
{
    Vector2f v20 = Vector2f(10,5);
    Vector2f v21 = Vector2f(20, 10);
    Vector2f v22 = Vector2f(40,20);
    
    Vector3f v30 = Vector3f(10,5,2);
    Vector3f v31 = Vector3f(20, 10, 4);
    Vector3f v32 = Vector3f(40,20,8);
    
    Vector4f v40 = Vector4f(10,5,2);
    Vector4f v41 = Vector4f(20, 10, 4);
    Vector4f v42 = Vector4f(40,20,8);
    
    Matrix2f m2 = Matrix2f::Identity();
    Matrix3f m3 = Matrix3f::Identity();
    Matrix4f m4 = Matrix4f::Identity();
    
    
    m2(0,0) = 5;
    
    Matrix2f m2a = m2 + m2;
    Matrix2f m2s = m2 - m2;
    Matrix3f m3a = m3 + m3;
    Matrix3f m3s = m3 - m3;
    Matrix4f m4a = m4 + m4;
    Matrix4f m4s = m4 - m4;
    
    Matrix2f m2Scale = m2 * 5.0f;
    Matrix2f m2PreScale = 10.0f * m2;
    Matrix3f m3Scale = m3 * 5.0f;
    Matrix3f m3PreScale = 10.0f * m3;
    Matrix4f m4Scale = m4 * 5.0f;
    Matrix4f m4PreScale = 10.0f * m4;

}
