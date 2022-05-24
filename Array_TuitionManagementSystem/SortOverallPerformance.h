#pragma once
#include "DataStruc.h"

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