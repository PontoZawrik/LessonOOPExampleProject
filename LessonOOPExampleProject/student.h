#pragma once
#include "human.h"

class Student {
private:
	static int count;
	float avg_marks;

public:
	Student();
	Student(string name, string surname, int age, int avg_marks);
	~Student();

	static int getCount();

	int getAvgMarks();
	void setAvgMarks(float avg_marks);

	void clear();
	string convert();
};