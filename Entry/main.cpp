#include <stdio.h>
#include "MathLib.h"


int main(int argc, char** argv)
{
	Vector3f dir = Vector3f(1.0f, 0.0f, 1.0f);
	Vector3f pos = Vector3f(0.0f, 0.0f, 10.0f);
	Plane plane(pos, dir);

	Vector3f point(100, 100, 10);

	bool b = plane.IsPointOnPlane(point);

	return 0;
}
