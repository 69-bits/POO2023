#pragma once
#include <iostream>

struct Vector2
{
	int x;
	int y;

	void setVector2(int _x, int _y)
	{
		x = _x;
		y = _y;
	}

	Vector2 getVector2()
	{
		Vector2 copy;
		copy.x = x;
		copy.y = y;
		return copy;
	}

	Vector2 dotProduct(int _value)
	{
		Vector2 copy;
		x *= _value;
		y *= _value;
		copy.x = x;
		copy.y = y;
		return copy;
	}

	int crossProduct(Vector2 _vec)
	{
		return ((x * _vec.y) - (y * _vec.x));
	}

	void print()
	{
		cout << " Vector: " << x << ", " << y << endl;
	}
};