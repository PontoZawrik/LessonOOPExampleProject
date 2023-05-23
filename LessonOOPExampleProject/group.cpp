#include "group.h"

Group::Group() {
	list = NULL;
	size = 0;
	name = "no name";
}

Group::Group(Student* list, int size, string name) {
	this->list = list;
	this->size = size;
	this->name = name;
}

Group::Group(string name) {
	this->name = name;
	list = NULL;
	size = 0;
}

Group::~Group() {
	if (list != NULL) {
		delete[] list;
	}
}

void Group::add(Student student) {
	if (list == NULL) {
		list = new Student[1];
		list[0] = student;
		size = 1;
	}
	else {
		Student* temp = new Student[size + 1];
		for (int i = 0; i < size; i++) {
			temp[i] = list[i];
		}
		temp[size] = student;
		delete[] list;
		list = temp;
	}
}

void Group::remove(int index) {
		
	if (list != NULL && index < size && index >= 0) {

		Student* temp = new Student[size - 1];

		for (int i = 0, j = 0; i < size - 1; i++) {
			if (i != index) {
				temp[j] = list[i];
				j++;
			}
		}
		delete[] list;
		list = temp;

		size--;
	}
}

int Group::getSize() {
	return size;
}

Student Group::getStudent(int index) {
	if (index >= 0 && index < size) {
		return list[index];
	}
}

string Group::convert() {
	string msg = "Student list of " + name + ":";
	for (int i = 0; i < size; i++){
		Student st = list[i];
		msg += "\n" + to_string(i + 1) + ") ";
		msg += st.convert();
	}
	return msg;
};