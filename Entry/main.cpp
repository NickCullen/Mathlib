#include <stdio.h>
#include "MathLib.h"


int main(int argc, char** argv)
{
    Vector3f P(-10,-10,0);
    Vector3f Q(10,-10,0);
    Vector3f R(0,10,0);
    
    Vector3f vec(5, -10, 0);
    
    PlaneTestResult res = Plane::PointInTriangle(P, Q, R, vec);
    
    Vector2f barryCoords = Plane::BarycentricCoordinates(P, Q, R, vec);
    
    Vector3f point = Plane::BarycentricCoordToPoint(P, Q, R, barryCoords);
    
    Matrix2f m2 = Matrix2f::Identity();
    Matrix3f m3 = Matrix3f::Identity();
    Matrix4f m4 = Matrix4f::Identity();
    
    m4.SetElement(0, 2, 10);
    m4.Print();
    
}
