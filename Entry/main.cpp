#include <stdio.h>
#include "MathLib.h"


int main(int argc, char** argv)
{
    Matrix2f m2 = Matrix2f::Identity();
    Matrix3f m3 = Matrix3f::Identity();
    Matrix4f m4 = Matrix4f::Identity();
    
    
    Matrix2f m2a = m2 + m2;
    Matrix2f m2s = m2 - m2;
    Matrix3f m3a = m3 + m3;
    Matrix3f m3s = m3 - m3;
    Matrix4f m4a = m4 + m4;
    Matrix4f m4s = m4 - m4;
    
    
}
