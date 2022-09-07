#include "Fraction.h"

Fraction::Fraction()
{
	Fraction::c = 0;
	Fraction::z = 0;
}

Fraction::Fraction(int c, int z)
{
	Fraction::c = c;
	Fraction::z = z;
}

void Fraction::SetC(int c)
{
	Fraction::c = c;
}

void Fraction::SetZ(int z)
{
	Fraction::z = z;
}

void Fraction::print()
{
	cout << c << "/" << z << endl;
}
