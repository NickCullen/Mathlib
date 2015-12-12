#ifndef VECTOR3_H
#define VECTOR3_H

#include "MathAPI.h"

class MATH_API Vector3f
{
public:
	float x;
	float y;
	float z;
	
	// Debug Print
	void Print();
	
	// Constructors
	Vector3f();
	Vector3f(float x, float y, float z);
	Vector3f(const Vector3f& other);
	Vector3f(const class Vector4f& other);

	// Addition
	static Vector3f Add(const Vector3f& lhs, const Vector3f& rhs);

	// Subtraction
	static Vector3f Subtract(const Vector3f& lhs, const Vector3f& rhs);

	// Scalar Multiplication
	static Vector3f Multiply(const Vector3f& vec, float scalar);

	// Scalar Division
	static Vector3f Divide(const Vector3f& vec, float scalar);

	// Dot Product
	static float DotProduct(const Vector3f& lhs, const Vector3f& rhs);

	// Non-static version of Dot Product
    float DotProduct(const Vector3f& other);

	// Cross Product
	static Vector3f CrossProduct(const Vector3f& lhs, const Vector3f& rhs);

	// Non-static version of Cross Product
    Vector3f CrossProduct(const Vector3f& other);

	// Returns the length of the vector
	float Length();

	// Returns the length squared of the vector (no sqrt)
	float LengthSquared();

	// Normalizes this vector and returns it
	Vector3f& Normalize();

	// Returns the normalized representation of this vector without altering its value
	Vector3f Normalized();

	// Returns distance between the vectors (uses sqrt)
	static float Distance(const Vector3f& lhs, const Vector3f& rhs);

	// non-static distance function (uses sqrt)
	float Distance(const Vector3f& other);

	// Returns squared distance between the vectors (doesn't use sqrt)
	static float DistanceSquared(const Vector3f& lhs, const Vector3f& rhs);

	// non-static distance squared function (doesn't use sqrt)
	float DistanceSquared(const Vector3f& other);
};


// Addition Operator
inline MATH_API Vector3f operator+(const Vector3f& lhs, const Vector3f& rhs) { return Vector3f::Add(lhs, rhs); }

// Subtraction Operator
inline MATH_API Vector3f operator-(const Vector3f& lhs, const Vector3f& rhs) { return Vector3f::Subtract(lhs, rhs); }

// Multiplication Operators
inline MATH_API Vector3f operator*(float scalar, const Vector3f& vec) { return Vector3f::Multiply(vec, scalar); }
inline MATH_API Vector3f operator*(const Vector3f& vec, float scalar) { return Vector3f::Multiply(vec, scalar); }

// Division Operators
inline MATH_API Vector3f operator/(float scalar, const Vector3f& vec) { return Vector3f::Divide(vec, scalar); }
inline MATH_API Vector3f operator/(const Vector3f& vec, float scalar) { return Vector3f::Divide(vec, scalar); }


#endif