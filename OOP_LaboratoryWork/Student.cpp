#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student()
{
	cout << "Enter INFO..." << endl;
	cout << "FIO: ";
	char fio[50];
	cin >> fio;
	int lenght = strlen(fio);
	cout <<"Lenght: "<< lenght << endl;
	Fio = new char[lenght+1];

	//Fio = &fio[0];
	for (size_t i = 0; i < lenght; i++)
		Fio[i] = fio[i];

	cout << "Birthday: ";
	cin.getline(Birthday, 50);
	cin.getline(Birthday, 50);

	cout << "Phone Number: ";
	cin.getline(PhoneNumber, 50);

	cout << "City of Student: ";
	cin.getline(CityStudent, 50);

	cout << "Country of Student: ";
	cin.getline(CountryStudent, 50);

	cout << "University Name: ";
	cin.getline(NameUniversity, 50);

	cout << "City of University: ";
	cin.getline(CityUniversity, 50);

	cout << "Country of University: ";
	cin.getline(CountryUniversity, 50);

	cout << "Number of group: ";
	cin >> NumberGroup;

	cout << endl;
}

void Student::SetFio(char* Fio)
{
	strcpy_s(Student::Fio, 50, Fio);
}

void Student::SetBirthday(char* Birthday)
{
	strcpy_s(Student::Birthday, 50, Birthday);
}

void Student::SetPhoneNumber(char* PhoneNumber)
{
	strcpy_s(Student::PhoneNumber, 50, PhoneNumber);
}

void Student::SetCityStudent(char* CityStudent)
{
	strcpy_s(Student::CityStudent, 50, CityStudent);
}

void Student::SetCountryStudent(char* CountryStudent)
{
	strcpy_s(Student::CountryStudent, 50, CountryStudent);
}

void Student::SetNameUniversity(char* NameUniversity)
{
	strcpy_s(Student::NameUniversity, 50, NameUniversity);
}

void Student::SetCityUniversity(char* CityUniversity)
{
	strcpy_s(Student::CityUniversity, 50, CityUniversity);
}

void Student::SetCountryUniversity(char* CountryUniversity)
{
	strcpy_s(Student::CountryUniversity, 50, CountryUniversity);
}

void Student::SetNumberGroup(int NumberGroup)
{
	Student::NumberGroup = NumberGroup;
}

void Student::Input()
{
	cout << "Enter INFO..." << endl;
	cout << "FIO: ";
	cin.getline(Fio, 50);

	cout << "Birthday: ";
	cin.getline(Birthday, 50);
	
	cout << "Phone Number: ";
	cin.getline(PhoneNumber, 50);
	
	cout << "City of Student: ";
	cin.getline(CityStudent, 50);

	cout << "Country of Student: ";
	cin.getline(CountryStudent, 50);

	cout << "University Name: ";
	cin.getline(NameUniversity, 50);

	cout << "City of University: ";
	cin.getline(CityUniversity, 50);

	cout << "Country of University: ";
	cin.getline(CountryUniversity, 50);

	cout << "Number of group: ";
	cin >> NumberGroup;

	cout << endl;
}

void Student::PrintInfo()
{
	cout << "Student INFO..." << endl;
	cout << "FIO: ";
	cout << Fio << endl;

	cout << "Birthday: ";
	cout << Birthday << endl;

	cout << "Phone Number: ";
	cout << PhoneNumber << endl;

	cout << "City of Student: ";
	cout << CityStudent << endl;

	cout << "Country of Student: ";
	cout << CountryStudent << endl;

	cout << "University Name: ";
	cout << NameUniversity << endl;

	cout << "City of University: ";
	cout << CityUniversity << endl;

	cout << "Country of University: ";
	cout << CountryUniversity << endl;

	cout << "Number of group: ";
	cout << NumberGroup << endl;

	cout << endl;
}

Student::~Student()
{
	cout << "des" << endl;
	if(Fio)
	delete[] Fio;
}
