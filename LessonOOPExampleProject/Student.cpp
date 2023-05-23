#include "student.h"

int Student::count = 0;

int Student::getCount() {
	return count;
}

Student::Student() {
	count++;
	name = "no name";
	surname = "no surname";
	age = 15;
	avg_marks = 4;
}

//constructor with arguments
Student::Student(string nm, string surnm, int a, int marks) {
	count++;
	name = nm;
	surname = surnm;
	age = a;
	avg_marks = marks;
}

Student::~Student() {
	count--;

}

string Student::getName() {
	return name;
}

void Student::setName(string n) {
	name = n;
}

string Student::getSurname() {
	return surname;
}

void Student::setSurname(string n) {
	surname = n;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int n) {
	if (n > 0 && n < 120) {
		name = age;
	}
}

int Student::getAvgMarks() {
	return avg_marks;
}

void Student::setAvgMarks(float n) {
	if (n >= 0 && n <= 10) {
		avg_marks = n;
	}
}

void Student::clear() {
	name = "no name";
	surname = "no surname";
	age = 0;
	avg_marks = 0;
}

string Student::convert() {
	string msg = "";
	msg += name;
	msg += " " + surname;
	msg += " (age = " + to_string(age);
	msg += ", averege mark = " + to_string(avg_marks) + ")";
	return msg;
}