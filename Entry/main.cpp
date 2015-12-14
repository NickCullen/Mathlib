#include <stdio.h>
#include "MathLib.h"


int main(int argc, char** argv)
{
	Vector3f P(1.0f,0.0f,1.0f);
	Vector3f Q(2.0f, 0.0f, 1.0f);
	Vector3f R(1.5f, 2.0f, 1.0f);
	
    Vector3f test = Vector3f(0.0f,0.0f,2.0f);
    
	Plane plane = Plane::FromPoints(P, Q, R);
    
    bool b = plane.IsPointOnPlane(P);
    
    
    PlaneTestResult result = plane.TestPoint(test);
    
	return 0;
}
