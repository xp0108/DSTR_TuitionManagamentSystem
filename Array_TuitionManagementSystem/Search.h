#pragma once
#include <iostream>
#include "DataStruc.h"

//binary serach tutor array by tutorID
int binarySearchTutor(Tutor tutorArray[], int tutorID)
{
	int low = 0;
	int high = sizeof(tutorArray) - 1;
	int mid = 0;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (tutorArray[mid].tutorID == tutorID)
		{
			return mid;
		}
		else if (tutorArray[mid].tutorID > tutorID)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return -1;
}

//use binarySearchTutor funtion
void searchTutor(Tutor tutorArray[])
{
	int tutorID;
	
	std::cout << "Insert Tutor ID :";
	std::cin >> tutorID;
	
	int index = binarySearchTutor(tutorArray, tutorID);
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
}