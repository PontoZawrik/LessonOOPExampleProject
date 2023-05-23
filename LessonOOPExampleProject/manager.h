#pragma once
#include "group.h"

class Manager {
public:
	static float CalcStudentsAvgAge(Group group);
	static float CalcStudentsAvgMarks(Group group);
	static Student find_best_student(Group group);
	static Student find_worst_student(Group group);
};