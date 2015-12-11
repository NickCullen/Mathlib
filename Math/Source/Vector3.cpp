#include "MathLib.h"
#include <stdio.h>

// Debug
void Vector3f::Print()
{
	printf("(%f, %f, %f)\n",x,y,z);	
}

// Constructors
Vector3f::Vector3f()
{
	x = y = z = 0.0f;
}
Vector3f::Vector3f(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
Vector3f::Vector3f(const Vector3f& other)
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
}
Vector3f::Vector3f(const class Vector4f& other)
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
}


// Addition
Vector3f Vector3f::Add(const Vector3f& lhs, const Vector3f& rhs)
{
	return Vector3f(lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z);
}

// Subtraction
Vector3f Vector3f::Subtract(const Vector3f& lhs, const Vector3f& rhs)
{
	return Vector3f(lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z);
}

// Multiplication
Vector3f Vector3f::Multiply(const Vector3f& vec, float scalar)
{
	return Vector3f(vec.x*scalar, vec.y * scalar, vec.z*scalar);
}

// Division
Vector3f Vector3f::Divide(const Vector3f& vec, float scalar)
{
	return Vector3f(vec.x/scalar, vec.y / scalar, vec.z/scalar);
}

float Vector3f::Length()
{
	return Mathf::Sqrt(x*x + y*y + z*z);
}

float Vector3f::LengthSquared()
{
	return x*x + y*y + z*z;
}

Vector3f& Vector3f::Normalize()
{
	float lenRecip = 1.0f / Length();
	x *= lenRecip;
	y *= lenRecip;
	z *= lenRecip;
	return *this;
}

Vector3f Vector3f::Normalized()
{
	float lenRecip = 1.0f / Length();
	return Vector3f(x*lenRecip, y *lenRecip, z*lenRecip);
}

float Vector3f::DotProduct(const Vector3f& lhs, const Vector3f& rhs)
{
	return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z;
}

float Vector3f::DotProduct(const Vector3f& other)
{
	return Vector3f::DotProduct(*this, other);
}

Vector3f Vector3f::CrossProduct(const Vector3f& lhs, const Vector3f& rhs)
{
	return Vector3f(lhs.y*rhs.z - rhs.y*lhs.z,
					lhs.z*rhs.x - rhs.z*lhs.x,
					lhs.x*rhs.y - rhs.x*lhs.y);
}
	
Vector3f Vector3f::CrossProduct(const Vector3f& other)
{
	return Vector3f::CrossProduct(*this, other);
}

float Vector3f::Distance(const Vector3f& lhs, const Vector3f& rhs)
{
	return (lhs - rhs).Length();
}

float Vector3f::Distance(const Vector3f& other)
{
	return Vector3f::Distance(*this, other);
}

float Vector3f::DistanceSquared(const Vector3f& lhs, const Vector3f& rhs)
{
	return (lhs - rhs).LengthSquared();
}

float Vector3f::DistanceSquared(const Vector3f& other)
{
	return Vector3f::DistanceSquared(*this, other);
}