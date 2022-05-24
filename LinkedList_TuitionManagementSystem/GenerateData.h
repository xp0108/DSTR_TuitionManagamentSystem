#pragma once
#include <iostream>
#include "DataStruct.h"
#include "AddTutor.h"

void GenerateData() {
	Tutor* newNode = AddNode(1, "xp", "24/5/2022", 60, "0123456789", "Bukit Jalil", "KL", "History", 0, 90); //create Node
	AddTutorToTheEnd(newNode);	//add the created node into LL

	Tutor* newNode2 = AddNode(2, "xp", "24/5/2022", 60, "0123456789", "Bukit Jalil", "KL", "History", 0, 90); //create Node
	AddTutorToTheEnd(newNode2);	//add the created node into LL

	Tutor* newNode3 = AddNode(3, "xp", "24/5/2022", 60, "0123456789", "Bukit Jalil", "KL", "History", 0, 90); //create Node
	AddTutorToTheEnd(newNode3);	//add the created node into LL
}