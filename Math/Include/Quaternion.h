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

};