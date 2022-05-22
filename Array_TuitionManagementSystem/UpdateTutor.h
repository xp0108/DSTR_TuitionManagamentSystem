#pragma once
#include <iostream>
#include "HRSearch.h"
#include "UserMenuFunction.h"
#include "DataStruc.h"
using namespace std;

void UpdateTutorAddress(Tutor tutorArray[], int tutorID) {
	cout << "mody addd" << endl;
}

void UpdateTutorPhone(Tutor tutorArray[], int tutorID) {
	cout << "mody phone" << endl;
}

void UpdateTutor(Tutor tutorArray[])
{
	system("cls");
	loopSymbol(120);
	cout << "Update Tutor Record" << endl;
	loopSymbol(120);
	int tutorID;

	cout << "Enter Tutor ID :";
	while (!(cin >> tutorID)) {
		cout << endl << "Integer Only !!" << endl << "Enter Tutor ID Again : ";
		cin.clear();
		cin.ignore(123, '\n');
	}

	//Search Function - check tutor exist & return tutorArray
	int checkTutorID = linearSearchTutor(tutorArray, tutorID);
	while (checkTutorID == -1)
	{
		cout << "Tutor ID not found\t" << "INPUT AGAIN: ";
		cin.clear();
		cin >> tutorID;
		checkTutorID = linearSearchTutor(tutorArray, tutorID);
	}

	bool exitFunction = true;
	while (exitFunction != false)
	{
		int updateChoice;
		cout << endl << endl;
		cout << " ** UPDATE MENU **" << endl;
		cout << "1. Tutor Phone Number" << endl;
		cout << "2. Tutor Address" << endl;
		cout << "3. Exit Update Function" << endl;
		cout << "Enter your choice: ";
		// Validate user input
		while (!(cin >> updateChoice)) {
			cout << endl << "Invalid Input !!!" << endl;
			cout << "Enter you choice again: ";
			cin.clear();
			cin.ignore(123, '\n');
		}
		switch (updateChoice)
		{
		case 1:
			UpdateTutorPhone(tutorArray, tutorID);
			break;
		case 2:
			UpdateTutorAddress(tutorArray, tutorID);
			break;
		case 3:
			exitFunction = false;
			break;
		default:
			cout << "Invalid Option! Please Try Again";
		}
	}

}

