#include "MathLib.h"

Quaternion::Quaternion(const Vector3f& v)
	:x(v.x), y(v.y), z(v.z), w(1)
{

}

Quaternion::Quaternion(const Vector4f& v)
	: x(v.x), y(v.y), z(v.z), w(v.w)
{

}

Quaternion Quaternion::Add(const Quaternion& q1, const Quaternion& other)
{
	return Quaternion(q1.w + other.w, q1.x + other.x, q1.y + other.y, q1.z + other.z);
}

Quaternion Quaternion::operator+(const Quaternion& other)
{
	return Quaternion::Add(*this, other);
}

Quaternion Quaternion::Multiply(const Quaternion& q1, const Quaternion& other)
{
	return Quaternion(q1.w * other.w, q1.x * other.x, q1.y * other.y, q1.z * other.z);
}

Quaternion Quaternion::Multiply(const Quaternion& q1, const float s)
{
	return Quaternion(q1.w * s, q1.x * s, q1.y * s, q1.z * s);
}

Quaternion Quaternion::operator*(const Quaternion& other)
{
	return Quaternion::Multiply(*this, other);
}

Quaternion Quaternion::Subtract(const Quaternion& q1, const Quaternion& other)
{
	return Quaternion(q1.w - other.w, q1.x - other.x, q1.y - other.y, q1.z - other.z);
}

Quaternion Quaternion::operator-(const Quaternion& other)
{
	return Quaternion::Subtract(*this, other);
}

float Quaternion::Length(const Quaternion& q)
{
	return Mathf::Sqrt((q.w*q.w) + (q.x*q.x) + (q.y*q.y) + (q.z*q.z));
}

float Quaternion::Length()
{
	return Quaternion::Length(*this);
}

Quaternion& Quaternion::Normalize(Quaternion& q)
{
	float len = Quaternion::Length(q);
	q.x /= len;
	q.y /= len;
	q.z /= len;
	q.w /= len;
	return q;
}

Quaternion& Quaternion::Normalize()
{
	return Quaternion::Normalize(*this);
}

Quaternion Quaternion::Normalized()
{
	Quaternion ret = *this;
	return Quaternion::Normalize(ret);
}

float Quaternion::Dot(const Quaternion& q1, const Quaternion& q2)
{
	return (q1.x * q2.x) + (q1.y * q2.y) + (q1.z * q2.z) + (q1.w * q2.w);
}

float Quaternion::Dot(const Quaternion& other)
{
	return Quaternion::Dot(*this, other);
}