#include "student.h"

int Student::count = 0;

int Student::getCount() {
	return count;
}

Student::Student() {
	count++;
	avg_marks = 4;
}

//constructor with arguments
Student::Student(string name, string surname, int age, int avg_marks) 
	:Human(name, surname, age) {
	count++;
	this->avg_marks = avg_marks;
}

Student::~Student() {
	count--;

}

void Student::setAvgMarks(float n) {
	if (n >= 0 && n <= 10) {
		avg_marks = n;
	}
}