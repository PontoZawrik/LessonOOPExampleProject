#pragma once
#include "student.h"

class Group {
private:
	Student* list;
	int size;
	string name;
public:
	Group();
	Group(Student* list, int size, string name);
	Group(string name);
	~Group();

	void add(Student student);
	void remove(int index);
	int getSize();
	Student getStudent(int index);

	string convert();
};