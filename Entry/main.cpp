#include <stdio.h>
#include "MathLib.h"


int main(int argc, char** argv)
{
	
	Vector3f vec1 = Vector3f(0,1,0);
	Vector3f vec2 = Vector3f(0,1,0);
	
    Vector2f vector2 = Vector2f(0,1);
    Vector2f perp = vector2.Perpendicular();
    float dot = vector2.DotProduct(perp);

	return 0;
}
