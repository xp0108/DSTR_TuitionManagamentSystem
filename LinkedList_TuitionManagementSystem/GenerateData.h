#pragma once
#include <iostream>
#include "DataStruct.h"
#include "AddTutor.h"

void generateData() {
	Tutor* newNode1 = AddNode(1, "Onn", "Today", 10, 40, "0127120665", "KL", "KL", "Math", 0, 400); //create Node
	AddTutorToTheEnd(newNode1);
	Tutor* newNode2 = AddNode(2, "Kelvin", "Today", 10, 60, "0111111111", "Johor", "Johor", "History", 0, 600); //create Node
	AddTutorToTheEnd(newNode2);
	Tutor* newNode3 = AddNode(3, "YW", "Today", 10, 40, "022222222", "Johor", "Johor", "English", 0, 400); //create Node
	AddTutorToTheEnd(newNode3);	
	Tutor* newNode4 = AddNode(4, "XP", "Today", 10, 80, "022222222", "Johor", "Johor", "History", 0, 800); //create Node
	AddTutorToTheEnd(newNode4);	
}
