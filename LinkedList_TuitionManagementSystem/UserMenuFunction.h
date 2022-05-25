#pragma once
#include <iostream>
#include "DataStruct.h"
#include "AddTutor.h"
#include "DisplayTutor.h"
#include "SortTutorID.h"
#include "HRSearch.h"
#include "KLSearch.h"
#include "SearchJohor.h"
using namespace std;

void KLAdminMenu()
{
	for (;;)
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
		cout << "8. Exit" << endl;
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
			//function();
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
			//function();
			break;
		case 7:
			//function();
			break;
		case 8:exit(0);
			break;
		default:
			cout << "Invalid Option! Please Try Again";
		}
	}
}

void JohorAdminMenu()
{
	for (;;)
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
		cout << "8. Exit" << endl;
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
			//function();
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
			//function();
			break;
		case 7:
			//function();
			break;
		case 8:exit(0);
			break;
		default:
			cout << "Invalid Option! Please Try Again";
		}
	}
}

void HRManagerMenu()
{
	for (;;)
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
		cout << "10. Exit" << endl;
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
			CallAdd();
			break;
		case 2:
			//function();
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
			//function();
			break;
		case 10:exit(0);
			break;
		default:
			cout << "Invalid Option! Please Try Again";
		}
	}
}