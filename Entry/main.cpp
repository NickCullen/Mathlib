#include <stdio.h>
#include "MathLib.h"


int main(int argc, char** argv)
{
	
	Vector3f d = Vector3f(1,0,1).Normalized();
	Vector3f v = Vector3f(1,0,0);
    Vector3f dcv = d.CrossProduct(v);
    Vector3f cross = d.CrossProduct(dcv);
	return 0;
}
