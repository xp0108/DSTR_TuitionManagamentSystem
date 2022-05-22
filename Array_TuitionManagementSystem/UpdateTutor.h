#pragma once
#include <iostream>
#include "HRSearch.h"
#include "UserMenuFunction.h"
#include "DataStruc.h"
using namespace std;

void UpdateTutorAddress(Tutor updateTutorAdd[], int tutorArr) {
	string updateTutorAddress;
	cout << "Enter " << updateTutorAdd[tutorArr].tutorName << " de Address: ";
	cin >> updateTutorAddress;
	updateTutorAdd[tutorArr].tutorAddress = updateTutorAddress;
}

void UpdateTutorPhone(Tutor updateTutorAdd[], int tutorArr) {
	string updateTutorPhone;
	cout << "Enter " << updateTutorAdd[tutorArr].tutorName << " de Phone Number: ";
	cin >> updateTutorPhone;
	updateTutorAdd[tutorArr].tutorPhone = updateTutorPhone;
}

void UpdateTutor(Tutor tutorArray[])
{
	system("cls");
	loopSymbol(120);
	cout << "Update Tutor Record" << endl;
	loopSymbol(120);
	int tutorID;

	// Check is int input
	cout << "Enter Tutor ID :";
	while (!(cin >> tutorID)) {
		cout << endl << "Integer Only !!" << endl << "Enter Tutor ID Again : ";
		cin.clear();
		cin.ignore(123, '\n');
	}

	//Search Function - check tutor exist & return tutorArray
	int checkTutorID = linearSearchTutor(tutorArray, tutorID); //tutorArray[index]
	while (checkTutorID == -1)
	{
		cout << "Tutor ID not found\t" << "INPUT AGAIN: ";
		cin.clear();
		cin >> tutorID;
		checkTutorID = linearSearchTutor(tutorArray, tutorID);
	}

	//Update Menu - address or phone
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
			UpdateTutorPhone(tutorArray, checkTutorID);
			break;
		case 2:
			UpdateTutorAddress(tutorArray, checkTutorID);
			break;
		case 3:
			exitFunction = false;
			break;
		default:
			cout << "Invalid Option! Please Try Again";
		}
	}

}