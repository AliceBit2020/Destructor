
//��'� ����������� ����� ����� ����� ��'� �����, �����
//���� ����������� ���� ������(~), ���������, ����������
//����� Student ������� ���������� ~Student.
//�� ����� �� ������������, ���������� �����������
//������� ����� ��� ������� ��'����. 
//���������� �� �������� �������� �� -
//�����, �������������� ��'�����, � �������� ���'���,
//����, �'������� � ����� �����.
//#include "Person.h"
#pragma once
#include <iostream>
using namespace std;

class Person {
private:
	int age;
	char* mf;
	char* name;
	char* fname;
	char* phone;
public:

	Person();
	Person(int ag, const char* m_f, const char* nm, const char* fn, const char* phn);

	~Person();/////����������

	void Output()const;
	int GetAge() const;
	void SetAge(int ag);

	void SetName(const char* nm);

};




Person::Person()
{

	cout << "Default constructor" << endl;
	age = 0;
	mf = new char[8] { "Unknown" };////// �������� ������� ���_���
	name = new char[8] { "Unknown" };
	fname = new char[8] { "Unknown" };////// �������� ������� ���_���
	phone = new char[8] { "Unknown" };
}




Person::Person(int ag, const char* m_f, const char* nm, const char* fn, const char* phn)
{
	cout << "Param constructor" << endl;
	age = ag;

	int size = strlen(m_f) + 1;////������ � ��������  ��� ���������� ����� ������ m_f �� �����  mail -4
	mf = new char[size];////�������� � ���� ���_�� �� �������� �����
	strcpy_s(mf, size, m_f);/////������ ���� � m_f �� ����� � ���� ���� mf

	size = strlen(nm) + 1;
	name = new char[size];
	strcpy_s(name, size, nm);


	size = strlen(fn) + 1;
	fname = new char[size];
	strcpy_s(fname, size, fn);

	size = strlen(phn) + 1;
	phone = new char[size];
	strcpy_s(phone, size, phn);

}

Person::~Person()
{
	cout << "Destructor" << endl;
	delete[] mf;
	delete[] name;
	delete[] fname;
	delete[] phone;
}


void Person::Output() const
{
	cout << "Name: " << name << endl;
	cout << "Fisrt name: " << fname << endl;
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
	if(ag>13)
	age = ag;
}

void Person::SetName(const char* nm)
{
	if (name)
		delete[] name;

	int size = strlen(nm) + 1;
	name = new char[size];

	strcpy_s(name, size, nm);



}



inline void Output();/////  �� ���������� �� �����, ������� ������������ �������������

int main()
{
	//cout << "C++ OOP" << endl;
	{
		Person obj;//// unknown

		obj.SetAge(-1);


		Person me(100, "F", "Oleksandra", "Ternova", "222322");
	}///me, obj destroyed
	//me.Output();


	//Output();



	//Person* obj1 = new Person();
	//delete obj1;
	return 0;

}

void Output()
{
	Person student;////����� ���_��� � ���� �� ������ Person()
	student.Output();




}////�� ���������� ������ ������� ������ Person student; ����������