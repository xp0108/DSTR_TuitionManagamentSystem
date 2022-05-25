#pragma once
#include <iostream>
#include "DataStruc.h"
using namespace std;

//linear serach tutor array by tutorID
int linearSearchTutor(Tutor* tutorArray, int tutorID) {
	int size = 100;

	//check if there is any tutor data in the array matches with the user input
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

	cout << "Insert Tutor ID :";

	//check if the user input is a integer
	while (!(cin >> tutorID)) {
		cout << "Error: insert Tutor ID :";
		cin.clear();
		cin.ignore(123, '\n');
	}

	int index = linearSearchTutor(tutorArray, tutorID);

	//if return value is -1, the tutorID is not found
	if (index == -1)
	{
		//clear terminal
		system("cls");
		cout << endl;
		cout << "Tutor ID not found";
	}
	//if return value is not -1, print the data
	else
	{
		//clear terminal
		system("cls");
		cout << endl;
		cout << "Tutor ID found" << endl << endl;
		cout << "Tutor ID: " << tutorArray[index].tutorID << endl;
		cout << "Tutor Name: " << tutorArray[index].tutorName << endl;
		cout << "Tutor Date Join: " << tutorArray[index].dateJoin << endl;
		cout << "Tutor Date Terminated: " << tutorArray[index].dateTerminated << endl;
		cout << "Tutor Hourly Rate: " << tutorArray[index].hourlyRate << endl;
		cout << "Tutor Phone: " << tutorArray[index].tutorPhone << endl;
		cout << "Tutor Address: " << tutorArray[index].tutorAddress << endl;
		cout << "Tutor Tuition Name: " << tutorArray[index].tutionName << endl;
		cout << "Tutor Subject Name: " << tutorArray[index].subjectName << endl;
		cout << "Tutor Overall Performance: " << tutorArray[index].rating << endl;
		cout << "Tutor PayCheck: " << tutorArray[index].payCheck;
	}
};

//serch for all tutor with user input rating
void searchTutorByRating(Tutor tutorArray[])
{
	int rating;
	int size = 100;
	int count = 0;

	cout << "Insert Tutor Rating :";

	//check if the user input is a integer
	while (!(cin >> rating)) {
		cout << "Error: insert Tutor Rating :";
		cin.clear();
		cin.ignore(123, '\n');
	}

	//check if any tutor rating is equal to user input
	for (int i = 0; i < size; i++)
	{
		if (tutorArray[i].rating == rating)
		{
			count++;
		}
	}
	
	//if count is 0, no tutor with user input rating is found
	if (count == 0)
	{
		//clear terminal
		system("cls");
		cout << endl;
		cout << "Tutor Rating not found";
	}
	//if count is not 0, print all tutor with user input rating
	else
	{
		//clear terminal
		system("cls");
		cout << endl;
		cout << "Tutor Rating found" << endl << endl;
		
		//print all tutor with user input rating
		for (int i = 0; i < size; i++)
		{
			if (tutorArray[i].rating == rating && !tutorArray[i].tutorName.empty())
			{
				cout << "Tutor ID: " << tutorArray[i].tutorID << endl;
				cout << "Tutor Name: " << tutorArray[i].tutorName << endl;
				cout << "Tutor Date Join: " << tutorArray[i].dateJoin << endl;
				cout << "Tutor Date Terminated: " << tutorArray[i].dateTerminated << endl;
				cout << "Tutor Hourly Rate: " << tutorArray[i].hourlyRate << endl;
				cout << "Tutor Phone: " << tutorArray[i].tutorPhone << endl;
				cout << "Tutor Address: " << tutorArray[i].tutorAddress << endl;
				cout << "Tutor Tuition Name: " << tutorArray[i].tutionName << endl;
				cout << "Tutor Subject Name: " << tutorArray[i].subjectName << endl;
				cout << "Tutor Rating: " << tutorArray[i].rating << endl;
				cout << "Tutor PayCheck: " << tutorArray[i].payCheck << endl << endl;
			}
		}
	}
};