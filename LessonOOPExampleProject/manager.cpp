#include "manager.h"

float Manager::CalcStudentsAvgAge(Group group) {
	float avg = 0;
	for (int i = 0; i < group.getSize(); i++) {
		avg += group.getStudent(i).getAge();
	}
	return avg /= group.getSize();
}

float CalcStudentsAvgMarks(Group group) {
	float marks = 0;
	for (int i = 0; i < group.getSize(); i++) {
		marks += group.getStudent(i).getAvgMarks();
	}
	return marks /= group.getSize();
}

Student find_best_student(Group group) {
	int index = 0;
	for (int i = 0; i < group.getSize(); i++) {
		index = group.getStudent(index).getAvgMarks() > group.getStudent(i).getAvgMarks() ? index : i;
	}
	return group.getStudent(index);
}

Student find_worst_student(Group group) {
	int index = 0;
	for (int i = 0; i < group.getSize(); i++) {
		index = group.getStudent(index).getAvgMarks() < group.getStudent(i).getAvgMarks() ? index : i;
	}
	return group.getStudent(index);
}