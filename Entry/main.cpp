#include <stdio.h>
#include "MathLib.h"


int main(int argc, char** argv)
{
	
	Vector3f vec1 = Vector3f(20,40,1);
	Vector3f vec2 = Vector3f(10,10,10);
	Vector2f v2Vec1 = Vector2f(32,42);
	Vector2f v2Vec2 = Vector2f(10, 10);
	
	Vector2f result = v2Vec1 *100.0f;

	Vector3f added = Vector3f::Add(vec1, vec2);
	Vector3f subtracted = Vector3f::Subtract(vec1, vec2);
	
	
	Vector3f vec = Vector3f(100, 10, 0);
	Vector3f normalised = vec.Normalize();

	Vector4f v4 = vec1 + vec2;

	Vector3f up(0, 1, 0);
	Vector3f right(1,0,0);
	Vector3f stright = right.CrossProduct(up);

	vec1.Print();
	vec2.Print();
	added.Print();
	subtracted.Print();

	return 0;
}
