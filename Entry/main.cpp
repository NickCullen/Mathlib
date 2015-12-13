#include <stdio.h>
#include "MathLib.h"


int main(int argc, char** argv)
{
	Vector3f origin = Vector3f::Zero();
	Vector3f direction = Vector3f::Forward();
	Vector3f point = Vector3f(0.0f, 0.0f, -2.0f);

	Line line = Line(origin, direction);

	bool b = line.IsPointOnLine(point);

	return 0;
}
