//Реализуйте класс студент
// ФИО
// Дата рождения
// Контактный телефон
// Город студента
// Страна студента
// Название учебного заведения
// Город УЗ
// Страна УЗ
// Номер группы
//
#include <iostream>
#include <string>
#include "Student.h"
#include "Point.h"
#include "Fraction.h"
#include <io.h>
#include <stdio.h>
#include <fstream>
using namespace std;

Fraction summ(Fraction& d1, Fraction& d2)
{
	int c, z;
	z = d1.GetZ() * d2.GetZ();
	c = d1.GetC() * d2.GetZ() + d2.GetC() * d1.GetZ();
	Fraction result(c, z);
	return result;
}

int main()
{
	Student FirstStudent;
	//FirstStudent.Input();
	FirstStudent.PrintInfo();
	Point a;
	a.SetX(5);
	a.SetY(9);
	cout << "x(a) = " << a.GetX() << endl;
	cout << "y(a) = " << a.GetY() << endl;
	cout << endl;
	return 0;
}