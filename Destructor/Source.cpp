
//Ім'я деструктора класу являє собою ім'я класу, перед
//яким знаходиться знак тильди(~), наприклад, деструктор
//класу Student повинен називатися ~Student.
//На відміну від конструктора, деструктор викликається
//неявним чином при знищенні об'єкта. 
//Деструктор має звільнити додаткові ре -
//сурси, використовувані об'єктом, — динамічну пам'ять,
//файл, з'єднання з базою даних.
//#include "Person.h"
#pragma once
#include <iostream>
#include "Person.h"
using namespace std;


inline void Output();/////  не відноситься до класу, приклад процедурного програмування

int main()
{
	//cout << "C++ OOP" << endl;
	for(int i =0; i<1;i++)
	{
		

		const Person obj;//// unknown   Person()
		obj.Output();
		
		Person me(100, "F", "Oleksandra", "Ternova", "222322");
		me.Output();
		me.SetAge(99);
		me.SetName("Alice");
		

	}///me, obj destroyed


	int sizeGr = 20;
	Person** arrPerson = new Person*[sizeGr];

	arrPerson[0] = new Person(100, "F", "Oleksandra", "Ternova", "222322");

	for (int i = 0; i < sizeGr; i++)
	{
		delete[] arrPerson[i];
	}

	delete[] arrPerson;

	//Output();



	//Person* obj1 = new Person();
	//delete obj1;
	return 0;

}

void Output()
{
	Person student;////займає пам_ять в кучі під строки Person()
	student.Output();




}////по завершенню роботи функціі обьект Person student; зруйнується