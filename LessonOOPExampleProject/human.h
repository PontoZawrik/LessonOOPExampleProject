
#pragma once
#include"main.h"
class Human {
private:

public:
	string name;
	string surname;
	int age;

	//default constructor
	Human();

	//default constructor with arguments
	Human(string nm, string surnm, int a);

	~Human();

	string getName();
	void setName(string n);

	string getSurname();
	void setSurname(string n);

	int getAge();
	void setAge(int a);


	string convert();
};