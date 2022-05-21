#pragma once
#include <iostream>
#include "AddTutor.h"
#include "HRSearch.h"
#include "KLSearch.h"
#include "JohorSearch.h"
#include "SortTutorID.h"
#include "DisplayTutor.h"
#include "SortHourlyRate.h"
#include "GenerateReport.h"
using namespace std;

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
		cin >> klAdminChoice;
		switch (klAdminChoice)
		{
		case 1:
			//function();
			break;
		case 2:
			klSearchTutor(tutorArray);
			break;
		case 3:
			KLSearchTutorByRating(tutorArray);
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
		cin >> johorAdminChoice;
		switch (johorAdminChoice)
		{
		case 1:
			//function();
			break;
		case 2:
			JohorSearchTutor(tutorArray);
			break;
		case 3:
			JohorSearchTutorByRating(tutorArray);
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
		cin >> hrChoice;
		switch (hrChoice)
		{
		case 1:
			RegisterTutorFunction(tutorArray);
			break;
		case 2:
			//function();
			break;
		case 3:
			//function();
			break;
		case 4:
			DisplayTutor(tutorArray);
			break;
		case 5:
			searchTutor(tutorArray);
			break;
		case 6:
			searchTutorByRating(tutorArray);
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

void Login(Tutor tutorArray[])
{
	int loginCount = 0;

	while (loginCount < 3)
	{
		string username; string password;
		cout << "Enter your username: ";
		cin >> username;
		cout << "Enter your password: ";
		cin >> password;

		if (username == "kl" && password == "123")
		{
			cout << "Here is KL Branch";
			KLAdminMenu(tutorArray);
		}
		else if (username == "johor" && password == "123")
		{
			cout << "Here is Johor Branch";
			JohorAdminMenu(tutorArray);
		}
		else if (username == "hr" && password == "123")
		{
			cout << "Here is HR Manager";
			HRManagerMenu(tutorArray);

		}
		else
		{
			cout << "Invalid username or password." << endl;
			loginCount++;

			if (loginCount < 3)
			{
				cout << "Please Try Again." << endl << endl;
			}
		}
		if (loginCount == 3)
		{
			cout << "Too many login attempts! The program will now terminate.";
		}
	}

}
