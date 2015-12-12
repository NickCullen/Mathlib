#ifndef MATHF_H
#define MATHF_H

#include "MathAPI.h"

class MATH_API Mathf
{
public:

	// Square root of val
	static float Sqrt(float val);

	// sin/cos/tan
	static float Sin(float val);
	static float Cos(float val);
	static float Tan(float val);

	// Arctan2
	static float Atan2(float y, float x);
};


#endif