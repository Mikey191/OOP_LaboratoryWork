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

#pragma once
class Student
{
private:
	char Fio[50];
	char Birthday[50];
	char PhoneNumber[50];
	char CityStudent[50];
	char CountryStudent[50];
	char NameUniversity[50];
	char CityUniversity[50];
	char CountryUniversity[50];
	int NumberGroup;
public:
	void SetFio(char* Fio);
	char* GetFio() { return Fio; }

	void SetBirthday(char* Birthday);
	char* Getbirthday() { return Birthday; }

	void SetPhoneNumber(char* PhoneNumber);
	char* GetPhoneNumber() { return PhoneNumber; }

	void SetCityStudent(char* CityStudent);
	char* GetCityStudent() { return CityStudent; }

	void SetCountryStudent(char* CountryStudent);
	char* GetCountryStudent() { return CountryStudent; }

	void SetNameUniversity(char* NameUniversity);
	char* GetNameUniversity() { return NameUniversity; }

	void SetCityUniversity(char* CityUniversity);
	char* GetCityUniversity() { return CityUniversity; }

	void SetCountryUniversity(char* CountryUniversity);
	char* GetCountryUniversity() { return CountryUniversity; }

	void SetNumberGroup(int NumberGroup);
	int GetNumberGroup() { return NumberGroup; }

	void Input();
	void PrintInfo();
};

