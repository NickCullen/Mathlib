#include <stdio.h>
#include "MathLib.h"


int main(int argc, char** argv)
{
    Vector3f P(-1,-1,0);
    Vector3f Q(1,-1,0);
    Vector3f R(0,1,0);
    
    Vector3f vec(0, 0, 0);
    
    PlaneTestResult res = Plane::PointInTriangle(P, Q, R, vec);
    
    Vector3f barryCoords = Plane::BarycentricCoordinates(P, Q, R, vec);
    
    Matrix2f m2 = Matrix2f::Identity();
    Matrix3f m3 = Matrix3f::Identity();
    Matrix4f m4 = Matrix4f::Identity();
    
    m4.SetElement(0, 2, 10);
    m4.Print();
    
}
