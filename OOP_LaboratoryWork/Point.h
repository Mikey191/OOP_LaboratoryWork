#pragma once
class Point
{
private:
	int x;
	int y;
	int z;
public:
	Point();//����������� 1

	Point(int x, int y, int z);//����������� 2

	void SetX(int x);
	int GetX() { return x; }

	void SetY(int y);
	int GetY() { return y; }

	void SetZ(int z);
	int GetZ() { return z; }
};

