#include <stdio.h>
#include "MathLib.h"


int main(int argc, char** argv)
{
    Matrix2f m2 = Matrix2f::Identity();
    Matrix3f m3 = Matrix3f::Identity();
    Matrix4f m4 = Matrix4f::Identity();
    
    m4.SetElement(0, 2, 10);
    m4.Print();
    
}
