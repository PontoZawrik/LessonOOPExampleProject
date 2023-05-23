#include "human.h"
#include"student.h"


Human::Human() {
	cout << " Human defaul constructor " << endl;
	name = "no name";
	surname = "no surname";
	age = 15;
}

Human::Human(string name, string surname, int age) {
	this->name = name;
	this->surname = surname;
	this->age = age;
}




Human::~Human() {
	cout << " Human destructor " << endl;
}

string Human::getName() {
	return name;
}
void Human::setName(string name) {
	this->name = name;
}
string Human::getSurname() {
	return name;
}
void Human::setSurname(string surname) {
	this->surname = surname;
}

int Human::getAge() {
	return age;
}
void Human::setAge(int age) {
	if (a > 0 && a < 120) {
		this->age = age;
	}
}



string Human::convert() {
	string msg = "";
	msg += name;
	msg += " " + surname;
	msg += " (age = " + to_string(age);
	msg += " )";
	return msg;
}