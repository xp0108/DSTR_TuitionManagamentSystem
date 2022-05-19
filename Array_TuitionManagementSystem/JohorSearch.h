#pragma once
#include <iostream>
#include "DataStruc.h"

//linear serach tutor array by tutorID
int JohorLinearSearchTutor(Tutor* tutorArray, int tutorID) {
	int size = 100;
	for (int i = 0; i < size; i++) {
		if (tutorArray[i].tutorID == tutorID && tutorArray[i].tutionCode == 2) {
			return i;
		}
	}
	return -1;
};

//use linearSearchTutor funtion
void JohorSearchTutor(Tutor tutorArray[])
{
	int tutorID;

	std::cout << "Insert Tutor ID :";
	std::cin >> tutorID;

	int index = JohorLinearSearchTutor(tutorArray, tutorID);
	if (index == -1)
	{
		system("cls");
		std::cout << endl;
		std::cout << "Tutor ID not found";
	}
	else
	{
		system("cls");
		std::cout << endl;
		std::cout << "Tutor ID found" << std::endl;
		std::cout << "Tutor ID: " << tutorArray[index].tutorID << std::endl;
		std::cout << "Tutor Name: " << tutorArray[index].tutorName << std::endl;
		std::cout << "Tutor Date Join: " << tutorArray[index].dateJoin << std::endl;
		std::cout << "Tutor Date Terminated: " << tutorArray[index].dateTerminated << std::endl;
		std::cout << "Tutor Hourly Rate: " << tutorArray[index].hourlyRate << std::endl;
		std::cout << "Tutor Phone: " << tutorArray[index].tutorPhone << std::endl;
		std::cout << "Tutor Address: " << tutorArray[index].tutorAddress << std::endl;
		std::cout << "Tutor Tuition Code: " << tutorArray[index].tutionCode << std::endl;
		std::cout << "Tutor Subject Code: " << tutorArray[index].subjectCode << std::endl;
		std::cout << "Tutor Rating: " << tutorArray[index].rating;
	}
};
