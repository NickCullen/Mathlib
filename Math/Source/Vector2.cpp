#include "MathLib.h"
#include <stdio.h>

// Debug
void Vector2f::Print()
{
	printf("(%f, %f)\n",x,y);	
}

// Constructors
Vector2f::Vector2f()
{
	x = y = 0.0f;
}
Vector2f::Vector2f(float x, float y)
{
	this->x = x;
	this->y = y;
}

Vector2f::Vector2f(const Vector2f& other)
{
	this->x = other.x;
	this->y = other.y;
}

Vector2f::Vector2f(const Vector3f& other)
{
	this->x = other.x;
	this->y = other.y;
}

Vector2f::Vector2f(const Vector4f& other)
{
	this->x = other.x;
	this->y = other.y;
} 


// Addition
Vector2f Vector2f::Add(const Vector2f& lhs, const Vector2f& rhs)
{
	return Vector2f(lhs.x + rhs.x, lhs.y + rhs.y);
}


// Subtraction
Vector2f Vector2f::Subtract(const Vector2f& lhs, const Vector2f& rhs)
{
	return Vector2f(lhs.x - rhs.x, lhs.y - rhs.y);
}


// Multiplication
Vector2f Vector2f::Multiply(const Vector2f& vec, float scalar)
{
	return Vector2f(vec.x*scalar, vec.y * scalar);
}

// Division
Vector2f Vector2f::Divide(const Vector2f& vec, float scalar)
{
	return Vector2f(vec.x / scalar, vec.y / scalar);
}

float Vector2f::Length()
{
	return Mathf::Sqrt(x*x + y*y);
}

float Vector2f::LengthSquared()
{
	return x*x + y*y;
}

Vector2f& Vector2f::Normalize()
{
	float lenRecip = 1.0f / Length();
	x *= lenRecip;
	y *= lenRecip;
	return *this;
}

Vector2f Vector2f::Normalized()
{
	float lenRecip = 1.0f / Length();
	return Vector2f(x*lenRecip, y *lenRecip);
}

float Vector2f::DotProduct(const Vector2f& lhs, const Vector2f& rhs)
{
	return lhs.x * rhs.x + lhs.y * rhs.y;
}

float Vector2f::DotProduct(const Vector2f& other)
{
	return Vector2f::DotProduct(*this, other);
}

float Vector2f::Distance(const Vector2f& lhs, const Vector2f& rhs)
{
	return (lhs - rhs).Length();
}

float Vector2f::Distance(const Vector2f& other)
{
	return Vector2f::Distance(*this, other);
}

float Vector2f::DistanceSquared(const Vector2f& lhs, const Vector2f& rhs)
{
	return (lhs - rhs).LengthSquared();
}

float Vector2f::DistanceSquared(const Vector2f& other)
{
	return Vector2f::DistanceSquared(*this, other);
}