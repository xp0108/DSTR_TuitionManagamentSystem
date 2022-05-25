#pragma once
#include <iostream>
#include "DataStruct.h"
#include "AddTutor.h"

void GenerateData() {
	Tutor* newNode1 = AddNode(1, "Onn", "23/5/2022", 10, 40, "0127120665", "KL", "KL", "Math", 0, 400); //create Node
	AddTutorToTheEnd(newNode1);
	Tutor* newNode2 = AddNode(2, "Kelvin", "1/5/2021", 10, 60, "0111111111", "Johor", "Johor", "History", 0, 600); //create Node
	AddTutorToTheEnd(newNode2);
	Tutor* newNode3 = AddNode(3, "YW", "15/5/2020", 10, 40, "022222222", "Johor", "Johor", "English", 0, 400); //create Node
	AddTutorToTheEnd(newNode3);	
	Tutor* newNode4 = AddNode(4, "XP", "4/7/2021", 10, 80, "022222222", "Johor", "Johor", "History", 0, 800); //create Node
	AddTutorToTheEnd(newNode4);	
}
