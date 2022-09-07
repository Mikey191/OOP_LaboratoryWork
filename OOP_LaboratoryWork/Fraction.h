#pragma once
#include <iostream>
using namespace std;
class Fraction
{
private:
	int c;//числитель
	int z;//знаменатель
public:
	Fraction();//конструктор 1
	Fraction(int c, int z);//конструктор 2

	void SetC(int c);
	void SetZ(int z);
	int GetC(){ return c; }
	int GetZ(){ return z; }

	void print();
};

