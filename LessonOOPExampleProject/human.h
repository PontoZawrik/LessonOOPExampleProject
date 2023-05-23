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
	Human(string name, string surname, int age);

	~Human();

	string getName();
	void setName(string name);

	string getSurname();
	void setSurname(string surname);

	int getAge();
	void setAge(int age);


	string convert();
};