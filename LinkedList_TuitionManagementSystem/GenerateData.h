#pragma once
#include <iostream>
#include "DataStruct.h"
#include "AddTutor.h"

void GenerateData() {
	Tutor* newNode1 = AddNode(15, "Onn", "23/5/2022", 10, 40, "0127120665", "KL", "KL", "Math", 2, 400); //create Node
	AppendNode(newNode1);
	Tutor* newNode2 = AddNode(9, "Kelvin", "1/5/2021", 10, 60, "0111111111", "Johor", "Johor", "History", 1, 600); //create Node
	AppendNode(newNode2);
	Tutor* newNode3 = AddNode(13, "YW", "15/5/2020", 10, 40, "022222222", "KL", "KL", "English", 5, 400); //create Node
	AppendNode(newNode3);
	Tutor* newNode4 = AddNode(10, "XP", "4/7/2021", 10, 80, "022222222", "Johor", "Johor", "English", 0, 800); //create Node
	AppendNode(newNode4);
}