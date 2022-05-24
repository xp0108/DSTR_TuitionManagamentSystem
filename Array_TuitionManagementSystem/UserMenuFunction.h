#pragma once
#pragma once
#include <iostream>
#include "AddTutor.h"
#include "HRSearch.h"
#include "KLSearch.h"
#include "JohorSearch.h"
#include "SortTutorID.h"
#include "SortHourlyRate.h"
#include "DisplayTutor.h"
#include "SortHourlyRate.h"
#include "GenerateReport.h"
#include "UpdateTutor.h"
#include "DeleteTutor.h"
#include "AddRating.h"
using namespace std;
double rateValue;

void KLAdminMenu(Tutor tutorArray[])
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
			cout << "Enter rating: ";
			cin >> rateValue;
			PushRating(tutorArray, 50, rateValue);
			break;
		case 2:
			klSearchTutor(tutorArray);
			break;
		case 3:
			//KLSearchTutorByRating(tutorArray);
			break;
		case 4:
			SortTutorIDKL(tutorArray);
			break;
		case 5:
			SortHourlyRateKL(tutorArray);
			break;
		case 6:
			//function();
			break;
		case 7:
			generateKLTutorReport(tutorArray);
			break;
		case 8:exit(0);
			break;
		default:
			cout << "Invalid Option! Please Try Again";
		}
	}
}

void JohorAdminMenu(Tutor tutorArray[])
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
			//JohorSearchTutor(tutorArray);
			break;
		case 3:
			//JohorSearchTutorByRating(tutorArray);
			break;
		case 4:
			SortTutorIDJohor(tutorArray);
			break;
		case 5:
			SortHourlyRateJohor(tutorArray);
			break;
		case 6:
			//function();
			break;
		case 7:
			generateJohorTutorReport(tutorArray);
			break;
		case 8:exit(0);
			break;
		default:
			cout << "Invalid Option! Please Try Again";
		}
	}
}

void HRManagerMenu(Tutor tutorArray[])
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
			AddTutor(tutorArray);
			break;
		case 2:
			UpdateTutor(tutorArray);
			break;
		case 3:
			DeleteTutor(tutorArray);
			break;
		case 4:
			DisplayTutor(tutorArray);
			break;
		case 5:
			searchTutor(tutorArray);
			break;
		case 6:
			//searchTutorByRating(tutorArray);
			break;
		case 7:
			SortTutorID(tutorArray);
			break;
		case 8:
			SortHourlyRate(tutorArray);
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