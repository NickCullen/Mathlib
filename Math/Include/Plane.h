#ifndef PLANE_H
#define PLANE_H

#include "MathAPI.h"

class MATH_API Plane
{
public:
	class Vector3f normal;  // Normal of the plane
	float offset;			// Offset of the plane from origin

	// Constructors
	Plane();
	Plane(float a, float b, float c, float d);
	Plane(const class Vector3f& normal, float offset);
	Plane(const class Vector3f& position, const class Vector3f& normal);


	// Destructor
	~Plane();

	// Returns true if the point lies on the plane
	static bool IsPointOnPlane(const Plane& plane, const class Vector3f& point);

	// Non-static version
	bool IsPointOnPlane(const class Vector3f& point) const;

};

#endif