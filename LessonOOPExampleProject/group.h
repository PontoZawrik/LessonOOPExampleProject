#pragma once
#include "student.h"

class Group {
private:
	Student* list;
	int size;
	string name;
public:
	Group();
	Group(Student* ls, int sz, string nm);
	Group(string nm);
	~Group();

	void add(Student student);
	void remove(int index);
	int getSize();
	Student getStudent(int index);

	string convert();
};