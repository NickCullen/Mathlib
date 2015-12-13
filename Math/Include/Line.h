#ifndef LINE_H
#define LINE_H

#include "MathAPI.h"

class MATH_API Line
{
public:
	class Vector3f origin; // Origin of line
	class Vector3f direction; // Direction of line

	// Constructors
	Line();
	Line(const class Vector2f& origin, const class Vector2f& direction);
	Line(const class Vector3f& origin, const class Vector3f& direction);

	// Destructor
	~Line();

	// Returns the point on line given the paremeter
	static Vector3f GetPoint(const Line& line, const float t);

	// Non-static version
	Vector3f GetPoint(const float t) const;

	// Returns if point lies on a line
	static bool IsPointOnLine(const Line& line, const class Vector3f& point);

	// Non-static version
	bool IsPointOnLine(const class Vector2f& point) const;
	bool IsPointOnLine(const class Vector3f& point) const;
};

#endif