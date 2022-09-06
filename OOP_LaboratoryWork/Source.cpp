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
#include <io.h>
#include <stdio.h>
#include <fstream>
using namespace std;

int main()
{
	Student FirstStudent;
	FirstStudent.Input();
	FirstStudent.PrintInfo();
	Point a;
	a.SetX(5);
	a.SetY(9);
	cout << "x(a) = " << a.GetX() << endl;
	cout << "y(a) = " << a.GetY() << endl;
	cout << endl;
	return 0;
}