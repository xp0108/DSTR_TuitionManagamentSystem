#pragma once
#include <iostream>
#include "DataStruct.h"
#include "AddTutor.h"
#include "DisplayTutor.h"
#include "SortTutorID.h"
#include "HRSearch.h"
#include "KLSearch.h"
#include "JohorSearch.h"
#include "AddRating.h"
#include "SortOverallPerformance.h"
#include "AddTutor2.h"
#include "UpdateTutor.h"
#include "GenerateReport.h"

using namespace std;

void KLAdminMenu()
{
	bool exitFunction = true;
	while (exitFunction != false)
	{
		int klAdminChoice;
		cout << endl << endl;
		cout << " **KL ADMIN** " << endl;
		cout << "1. Add rating for tutor" << endl;
		cout << "2. Search a Tutor by Tutor ID" << endl;
		cout << "3. Search Tutors by overall performance (rating)" << endl;
		cout << "4. Sort and display by Tutors ID in ascending order" << endl;
		cout << "5. Sort and display by Tutors Hourly Pay Rate in ascending order" << endl;
		cout << "6. Sort and display by Tutors Overall Performance in ascending order" << endl;
		cout << "7. generate report" << endl;
		cout << "8. Logout" << endl;
		cout << "9. Exit" << endl;
		cout << "Enter your choice: ";
		// Validate user input
		while (!(cin >> klAdminChoice)) {
			cout << endl << "Invalid Input !!!" << endl;
			cout << "Enter you choice again: ";
			cin.clear();
			cin.ignore(123, '\n');
		}
		switch (klAdminChoice)
		{
		case 1:
			KLAddRating();
			break;
		case 2:
			KLSearchTutorByTutorID();
			break;
		case 3:
			KLSearchTutorByRating();
			break;
		case 4:
			//function();
			break;
		case 5:
			//function();
			break;
		case 6:
			SortOverallPerformance();
			break;
		case 7:
			GenerateReport("KL");
			break;
		case 8:
			system("cls");
			exitFunction = false;
			break;
		case 9:
			exit(0);
			break;
		default:
			cout << "Invalid Option! Please Try Again";
		}
	}
}

void JohorAdminMenu()
{
	bool exitFunction = true;
	while (exitFunction != false)
	{
		int johorAdminChoice;
		cout << endl << endl;
		cout << " **JOHOR ADMIN** " << endl;
		cout << "1. Add rating for tutor" << endl;
		cout << "2. Search a Tutor by Tutor ID" << endl;
		cout << "3. Search Tutors by overall performance (rating)" << endl;
		cout << "4. Sort and display by Tutors ID in ascending order" << endl;
		cout << "5. Sort and display by Tutors Hourly Pay Rate in ascending order" << endl;
		cout << "6. Sort and display by Tutors Overall Performance in ascending order" << endl;
		cout << "7. generate report" << endl;
		cout << "8. Logout" << endl;
		cout << "9. Exit" << endl;
		cout << "Enter your choice: ";
		// Validate user input
		while (!(cin >> johorAdminChoice)) {
			cout << endl << "Invalid Input !!!" << endl;
			cout << "Enter you choice again: ";
			cin.clear();
			cin.ignore(123, '\n');
		}
		switch (johorAdminChoice)
		{
		case 1:
			JohorAddRating();
			break;
		case 2:
			JohorSearchTutorByTutorID();
			break;
		case 3:
			JohorSearchTutorByRating();
			break;
		case 4:
			//function();
			break;
		case 5:
			//function();
			break;
		case 6:
			SortOverallPerformance();
			break;
		case 7:
			GenerateReport("Johor");
			break;
		case 8:
			system("cls");
			exitFunction = false;
			break;
		case 9:
			exit(0);
			break;
		default:
			cout << "Invalid Option! Please Try Again";
		}
	}
}

void HRManagerMenu()
{
	bool exitFunction = true;
	while (exitFunction != false)
	{
		int hrChoice;
		cout << endl << endl;
		cout << " **HR ADMIN** " << endl;
		cout << "1. Register Tutor" << endl;
		cout << "2. Update Tutor Record" << endl;
		cout << "3. Delete Tutor Record" << endl;
		cout << "4. Display All Tutor" << endl;
		cout << "5. Search a Tutor by Tutor ID" << endl;
		cout << "6. Search Tutors by overall performance (rating)" << endl;
		cout << "7. Sort and display by Tutors ID in ascending order" << endl;
		cout << "8. Sort and display by Tutors Hourly Pay Rate in ascending order" << endl;
		cout << "9. Sort and display by Tutors Overall Performance in ascending order" << endl;
		cout << "10. Logout" << endl;
		cout << "11. Exit" << endl;
		cout << "Enter your choice: ";
		// Validate user input
		while (!(cin >> hrChoice)) {
			cout << endl << "Invalid Input !!!" << endl;
			cout << "Enter you choice again: ";
			cin.clear();
			cin.ignore(123, '\n');
		}
		switch (hrChoice)
		{
		case 1:
			AddTutor();
			break;
		case 2:
			UpdateTutor();
			break;
		case 3:
			//function();
			break;
		case 4:
			DisplayTutor();
			break;
		case 5:
			SearchTutorByTutorID();
			break;
		case 6:
			SearchTutorByRating();
			break;
		case 7:
			SortTutorID();
			break;
		case 8:
			//function();
			break;
		case 9:
			SortOverallPerformance();
			break;
		case 10:
			system("cls");
			exitFunction = false;
			break;
		case 11:
			exit(0);
			break;
		default:
			cout << "Invalid Option! Please Try Again";
		}
	}
}