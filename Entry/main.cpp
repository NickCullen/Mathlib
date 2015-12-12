#include <stdio.h>
#include "MathLib.h"


int main(int argc, char** argv)
{
	Vector3f vec = Vector3f(1, 1, 1).Normalized();

	Vector3f spherical = Vector3f::CartesianToSpherical(vec);
	Vector3f cart = Vector3f::SphericalToCartesian(spherical);

	return 0;
}
