#pragma once
#include <iostream>
#include "DataStruc.h"

//linear serach tutor array by tutorID
int linearSearchTutor(Tutor* tutorArray, int tutorID) {
	int size = 100;
	for (int i = 0; i < size; i++) {
		if (tutorArray[i].tutorID == tutorID) {
			return i;
		}
	}
	return -1;
};

//use linearSearchTutor funtion
void searchTutor(Tutor tutorArray[])
{
	int tutorID;

	std::cout << "Insert Tutor ID :";
	std::cin >> tutorID;

	int index = linearSearchTutor(tutorArray, tutorID);
	if (index == -1)
	{
		std::cout << "Tutor ID not found" << std::endl;
	}
	else
	{
		std::cout << "Tutor ID found" << std::endl;
		std::cout << "Tutor ID: " << tutorArray[index].tutorID << std::endl;
		std::cout << "Tutor Name: " << tutorArray[index].tutorName << std::endl;
		std::cout << "Tutor Phone: " << tutorArray[index].tutorPhone << std::endl;
		std::cout << "Tutor Address: " << tutorArray[index].tutorAddress << std::endl;
	}
};