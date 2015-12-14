#include <stdio.h>
#include "MathLib.h"


int main(int argc, char** argv)
{
	Vector3f P(1.0f,0.0f,1.0f);
	Vector3f Q(2.0f, 0.0f, 1.0f);
	Vector3f R(3.0f, 1.0f, 1.0f);
    Vector3f S(4.0f, 0.0f, 1.0f);
    
    bool b = Line::TestCollinear3Points(P, Q, R);
    
    b = Line::TestCollinear4Points(P, Q, R, S);
    
    b = Plane::TestCoplanar4Points(P, Q, R, S);
    
	return 0;
}
