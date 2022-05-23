#pragma once
#include <iostream>
#include "DataStruc.h"
using namespace std;

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

	cout << "Insert Tutor ID :";
	while (!(cin >> tutorID)) {
		cout << "Error: insert Tutor ID :";
		cin.clear();
		cin.ignore(123, '\n');
	}

	int index = linearSearchTutor(tutorArray, tutorID);
	if (index == -1)
	{
		system("cls");
		cout << endl;
		cout << "Tutor ID not found";
	}
	else
	{
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
		cout << "Tutor Rating: " << tutorArray[index].rating << endl;
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
	while (!(cin >> rating)) {
		cout << "Error: insert Tutor Rating :";
		cin.clear();
		cin.ignore(123, '\n');
	}

	for (int i = 0; i < size; i++)
	{
		if (tutorArray[i].rating == rating)
		{
			count++;
		}
	}
	
	if (count == 0)
	{
		system("cls");
		cout << endl;
		cout << "Tutor Rating not found";
	}
	else
	{
		system("cls");
		cout << endl;
		cout << "Tutor Rating found" << endl << endl;
		for (int i = 0; i < size; i++)
		{
			if (tutorArray[i].rating == rating)
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