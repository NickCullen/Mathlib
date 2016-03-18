#pragma once

class Quaternion
{
public:
	float x, y, z, w;


	// Constructors
	inline Quaternion() {}
	inline Quaternion(float _w, float _x, float _y, float _z)
		:x(_x), y(_y), z(_z), w(_w)
	{}
	//Quaternion(const class Vector3f& vec);
	//Quaternion(const class Vector4f& vec);

	// Destructors
	inline ~Quaternion() {};

	// Addition
	static Quaternion Add(const Quaternion& q1, const Quaternion& q2);
	Quaternion operator+(const Quaternion& other);

	// Multiplication
	static Quaternion Multiply(const Quaternion& q1, const Quaternion& q2);
	static Quaternion Multiply(const Quaternion& q1, const float s);
	Quaternion operator*(const Quaternion& other);

	// Subtraction
	static Quaternion Subtract(const Quaternion& q1, const Quaternion& q2);
	Quaternion operator-(const Quaternion& other);

};

// Scalar multiplication
Quaternion operator*(const Quaternion& q1, const float scalar) { return Quaternion::Multiply(q1, scalar); }
Quaternion operator*(const float scalar, const Quaternion& q1) { return Quaternion::Multiply(q1, scalar); }