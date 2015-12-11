#ifndef VECTOR2_H
#define VECTOR2_H

#include "MathAPI.h"

class MATH_API Vector2f
{
public:
	// Members
	float x;
	float y;
	
	// Debug Print
	void Print();
	
	// Constructors
	Vector2f();
	Vector2f(float x, float y);
	Vector2f(const Vector2f& other);
	Vector2f(const class Vector3f& other);
	Vector2f(const class Vector4f& other);

	// Addition
	static Vector2f Add(const Vector2f& lhs, const Vector2f& rhs);

	// Subtraction
	static Vector2f Subtract(const Vector2f& lhs, const Vector2f& rhs);
	
	// Scalar Multiplication
	static Vector2f Multiply(const Vector2f& vec, float scalar);

	// Scalar Division
	static Vector2f Divide(const Vector2f& vec, float scalar);

	// Dot Product
	static float DotProduct(const Vector2f& lhs, const Vector2f& rhs);

	// Non-static version of Dot Product
	inline float DotProduct(const Vector2f& other);

	// Returns the length of the vector
	float Length();

	// Returns the length squared of the vector (no sqrt)
	float LengthSquared();

	// Normalizes this vector and returns it
	Vector2f& Normalize();

	// Returns the normalized representation of this vector without altering its value
	Vector2f Normalized();

	// Returns distance between the vectors (uses sqrt)
	static float Distance(const Vector2f& lhs, const Vector2f& rhs);

	// non-static distance function (uses sqrt)
	inline float Distance(const Vector2f& other);

	// Returns squared distance between the vectors (doesn't use sqrt)
	static float DistanceSquared(const Vector2f& lhs, const Vector2f& rhs);

	// non-static distance squared function (doesn't use sqrt)
	inline float DistanceSquared(const Vector2f& other);
};


// Addition Operator
inline MATH_API Vector2f operator+(const Vector2f& lhs, const Vector2f& rhs) { return Vector2f::Add(lhs, rhs); }

// Subtraction Operator
inline MATH_API Vector2f operator-(const Vector2f& lhs, const Vector2f& rhs) { return Vector2f::Subtract(lhs, rhs); }

// Multiplication Operators
inline MATH_API Vector2f operator*(float scalar, const Vector2f& vec) { return Vector2f::Multiply(vec, scalar); }
inline MATH_API Vector2f operator*(const Vector2f& vec, float scalar) { return Vector2f::Multiply(vec, scalar); }

// Division Operators
inline MATH_API Vector2f operator/(float scalar, const Vector2f& vec) { return Vector2f::Divide(vec, scalar); }
inline MATH_API Vector2f operator/(const Vector2f& vec, float scalar) { return Vector2f::Divide(vec, scalar); }

#endif