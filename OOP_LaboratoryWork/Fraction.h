#pragma once
#include <iostream>
using namespace std;
class Fraction
{
private:
	int c;//���������
	int z;//�����������
public:
	Fraction();//����������� 1
	Fraction(int c, int z);//����������� 2

	void SetC(int c);
	void SetZ(int z);
	int GetC(){ return c; }
	int GetZ(){ return z; }

	void print();
};

