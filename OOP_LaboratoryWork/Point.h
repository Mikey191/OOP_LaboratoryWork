#pragma once
class Point
{
private:
	int x;
	int y;
	int z;
public:
	void SetX(int x);
	int GetX() { return x; }

	void SetY(int y);
	int GetY() { return y; }

	void SetZ(int z);
	int GetZ() { return z; }
};

