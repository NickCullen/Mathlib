#include "MathLib.h"
#include <stdio.h>
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
	this->offset = -(this->normal.x*position.x + this->normal.y*position.y + this->normal.z*position.z);
}

// Destructor
Plane::~Plane()
{

}

Plane Plane::FromPoints(const Vector3f& p,const Vector3f& q,const Vector3f& r)
{
	Vector3f u = q - p;
	Vector3f v = r - p;
	
	Vector3f n = u.CrossProduct(v).Normalized();
	
	float d = -(n.x*p.x + n.y*p.y + n.z*p.z);

	return Plane(n,d);
}

bool Plane::IsPointOnPlane(const Plane& plane, const Vector3f& point)
{
	return Mathf::IsZero(plane.normal.x*point.x + plane.normal.y*point.y + plane.normal.z*point.z + plane.offset);
}

// Non-static version
bool Plane::IsPointOnPlane(const Vector3f& point) const
{
	return Plane::IsPointOnPlane(*this, point);
}

PlaneTestResult Plane::TestPoint(const Vector3f& point) const
{
    float result = normal.x*point.x + normal.y*point.y + normal.z*point.z + offset;
    
    if(Mathf::IsZero(result))
        return OnPlane;
    else if(result < 0.0f)
        return Inside;
    else
        return Outside;
}
bool Plane::TestCoplanar4Points(const Vector3f& p0,const Vector3f& p1,const Vector3f& p2,const Vector3f& p3)
{
    Vector3f v0 = p1 - p0;
    Vector3f v1 = p2 - p0;
    Vector3f v2 = p3 - p0;

    return Mathf::IsZero(v0.DotProduct(v1.CrossProduct(v2)));
    
}
