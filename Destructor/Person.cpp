#include "Person.h"

Person::Person()
{

	cout << "Default constructor" << endl;
	age = 0;
	mf = new char[8] { "Unknown" };////// динамічно виділили пам_ять
	name = new char[8] { "Unknown" };
	lastName = new char[8] { "Unknown" };////// динамічно виділили пам_ять
	phone = new char[8] { "Unknown" };
}




Person::Person(int ag, const char* m_f, const char* nm, const char* fn, const char* phn)
{
	cout << "Param constructor" << endl;
	age = ag;

	int size = strlen(m_f) + 1;////робота зі строками  тут вызначаемо розмір строки m_f що зайде  mail -4
	mf = new char[size];////виділяемо в кучі пям_ть під потрібний розмір
	strcpy_s(mf, size, m_f);/////робимо копію з m_f що зайде в наше поле mf

	size = strlen(nm) + 1;
	name = new char[size];
	strcpy_s(name, size, nm);


	size = strlen(fn) + 1;
	lastName = new char[size];
	strcpy_s(lastName, size, fn);

	size = strlen(phn) + 1;
	phone = new char[size];
	strcpy_s(phone, size, phn);

}

Person::~Person()
{
	cout << "Destructor" << endl;
	delete[] mf;
	delete[] name;
	delete[] lastName;
	delete[] phone;
}


void Person::Output() const
{
	cout << "Name: " << name << endl;
	cout << "Fisrt name: " << lastName << endl;
	cout << "Age: " << age << endl;
	cout << "M/F: " << mf << endl;
	cout << "Phone: " << phone << endl;
}

int Person::GetAge() const
{
	return age;
}

void Person::SetAge(int ag)
{
	if (ag > 13)
		age = ag;
}

void Person::SetName(const char* nm)
{
	if (strlen(nm) >= 30)
		return;
	if (name)
		delete[] name;

	int size = strlen(nm) + 1;
	name = new char[size];

	strcpy_s(name, size, nm);



}


const char* Person::GetName() const
{
	return name;
}
