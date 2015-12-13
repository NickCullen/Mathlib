#include "MathLib.h"

Plane::Plane()
{

}
Plane::Plane(float a, float b, float c, float d)
{
	normal = Vector3f(a, b, c).Normalized();
	offset = d;
}
Plane::Plane(const Vector3f& normal, float offset)
{
	this->normal = normal.Normalized();
	this->offset = offset;
}
Plane::Plane(const Vector3f& position, const Vector3f& normal)
{
	this->normal = normal.Normalized();
	this->offset = this->normal.x*position.x + this->normal.y*position.y + this->normal.z*position.z;
}

// Destructor
Plane::~Plane()
{

}

bool Plane::IsPointOnPlane(const Plane& plane, const Vector3f& point)
{
	return Mathf::IsZero(Vector3f::DotProduct(plane.normal, point - (plane.normal * plane.offset)));
}

// Non-static version
bool Plane::IsPointOnPlane(const Vector3f& point) const
{
	return Plane::IsPointOnPlane(*this, point);
}