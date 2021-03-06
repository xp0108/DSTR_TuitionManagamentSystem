#pragma once
#include <iostream>
#include <string>
#include "HRSearch.h"
#include "UserMenuFunction.h"
#include "DataStruc.h"
#include "AddRating.h"
using namespace std;

void UpdateTutorPhone(Tutor updateTutorAdd[], int tutorArr) {
	//use to store user input
	string updateTutorPhone;

	cout << endl;
	loopSymbol(100, "-");
	cout << endl;
	cout << "Update Tutor Phone Number" << endl;
	loopSymbol(100, "-");
	cout << endl << endl;

	cout << "Enter " << updateTutorAdd[tutorArr].tutorName << "'s Phone Number: ";
	cin >> updateTutorPhone;

	// validation for phono number, if lesser than 10 number counted as invalid
	while (updateTutorPhone.length() < 10)
	{
		cout << "Not enough Length. Insert Tutor Phone No: ";
		cin.clear();
		cin.ignore(123, '\n');
		cin >> updateTutorPhone;
	}
	
	//replace existing content with user inputted data
	updateTutorAdd[tutorArr].tutorPhone = updateTutorPhone;

	cout << endl << "Tutor " << updateTutorAdd[tutorArr].tutorName << " Update Successfully !!!";
}

void UpdateTutorAddress(Tutor updateTutorAdd[], int tutorArr) {
	//use to store user input
	string updateTutorAddress;

	cout << endl;
	loopSymbol(100, "-");
	cout << endl;
	cout << "Update Tutor Address" << endl;
	loopSymbol(100, "-");
	cout << endl << endl;

	cout << "Enter " << updateTutorAdd[tutorArr].tutorName << "'s Address: ";
	cin >> updateTutorAddress;

	// validation for phono number, if lesser than 10 number counted as invalid
	while (updateTutorAddress.length() < 2)
	{
		cout << "Not enough Length. Insert Tutor Address: ";
		cin.clear();
		cin.ignore(123, '\n');
		cin >> updateTutorAddress;
	}

	//replace existing content with user inputted data
	updateTutorAdd[tutorArr].tutorAddress = updateTutorAddress;

	cout << endl << "Tutor " << updateTutorAdd[tutorArr].tutorName << " Update Successfully !!!";
}

void UpdateTutorRating(Tutor updateTutorAdd[], int tutorArr) {
	//use to store user input
	double updateTutorRating;

	cout << endl;
	loopSymbol(100, "-");
	cout << endl;
	cout << "Update Tutor Rating" << endl;
	loopSymbol(100, "-");
	cout << endl << endl;

	cout << "Enter " << updateTutorAdd[tutorArr].tutorName << "'s New Rating: ";

	//check if the user input is a integer and between 1 - 5
	while (!(cin >> updateTutorRating) || updateTutorRating < 1 || updateTutorRating > 5) {
		cout << "Error: insert Tutor Rating :";
		cin.clear();
		cin.ignore(123, '\n');
	}

	//replace existing content with user inputted data
	PushRating(updateTutorAdd, tutorArr, updateTutorRating);

	cout << endl << "Tutor " << updateTutorAdd[tutorArr].tutorName << " Update Successfully !!!";
}

void UpdateTutor(Tutor tutorArray[])
{
	system("cls");
	loopSymbol(120);
	cout << endl << "Update Tutor Record" << endl;
	loopSymbol(120);
	int tutorID;

	// Check is int input
	cout << endl << "Enter Tutor ID :";
	while (!(cin >> tutorID)) {
		cout << endl << "Integer Only !!" << endl << "Enter Tutor ID Again : ";
		cin.clear();
		cin.ignore(123, '\n');
	}

	//Linear Search Function - check tutor exist & return tutorArray
	int checkTutorID = linearSearchTutor(tutorArray, tutorID);

	while (checkTutorID == -1)
	{
	
			cout << "Tutor ID not found !!! " << endl << "Enter Tutor ID Again: ";
			cin.clear();
			cin >> tutorID;
			checkTutorID = linearSearchTutor(tutorArray, tutorID);
		
	}


	cout << "Tutor Name: " << tutorArray[checkTutorID].tutorName << endl;
	//Update Menu - address or phone
	bool exitFunction = true;
	while (exitFunction != false)
	{
		int updateChoice;
		cout << endl << endl;
		cout << " ** UPDATE MENU **" << endl;
		cout << "1. Tutor Phone Number" << endl;
		cout << "2. Tutor Address" << endl;
		cout << "3. Tutor Rating" << endl;
		cout << "4. Exit Update Function" << endl;
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
			exitFunction = false;
			break;
		case 2:
			UpdateTutorAddress(tutorArray, checkTutorID);
			exitFunction = false;
			break;
		case 3:
			UpdateTutorRating(tutorArray, checkTutorID);
			exitFunction = false;
			break;
		case 4:
			exitFunction = false;
			break;
		default:
			cout << "Invalid Option! Please Try Again";
		}
	}

}