#pragma once
#include "main.h"

class Student {
private:
	static int count;

	string name;
	string surname;
	int age;
	float avg_marks;

public:
	Student();
	Student(string nm, string surnm, int a, int marks);
	~Student();

	static int getCount();

	string getName();
	void setName(string n);
	string getSurname();
	void setSurname(string n);
	int getAge();
	void setAge(int n);
	int getAvgMarks();
	void setAvgMarks(float n);

	void clear();
	string convert();
};