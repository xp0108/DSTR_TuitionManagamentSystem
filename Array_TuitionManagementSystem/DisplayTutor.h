#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "DataStruc.h"

void DisplayTutor(Tutor tutor_info[], string displayString = "Tutor Records") {
	system("cls");
	int currentrow, maxRow, maxPage, arraysize = (sizeof(tutor_info)/ sizeof(* tutor_info)), currentPage = 1;
	cout << "arraysize: " << arraysize <<endl;
	//5 rows of tutor's data in each Page
	if (arraysize % 5 != 0) {
		maxPage = (arraysize / 5) + 1;
	}
	else {
		maxPage = arraysize / 5;
	}

	if (currentPage == 0) {
		currentPage = maxPage;
	}
	else if (currentPage > maxPage) {
		currentPage = 1;
	}

	if (currentPage == maxPage) {
		maxRow = 5 * (arraysize / 5) + (arraysize % 5);
	}
	else {
		maxRow = 5 * currentPage;
	}

	currentrow = (currentPage - 1) * 5;

	cout << endl << string(193, '-') << endl << string(85, ' ') << displayString << endl << string(193, '-') << endl;

	//Heading
	cout << "Current row: " << currentrow << "\nMax Row: " << maxRow << endl;
	cout << "TutorID" << "\t| ";
	cout << setw(10) << left << "TutorName" << "\t| ";
	cout << "DateJoined" << "\t| ";
	cout << "DateTerminated" << "\t| ";
	cout << setw(10) << left << "WorkingHour" << "\t| ";
	cout << setw(10) << left << "HourlyRate" << "\t| ";
	cout << setw(10) << left << "PhoneNumber" << "\t| ";
	cout << setw(10) << left << "Address" << "\t| ";
	cout << setw(10) << left << "TuitionName" << "\t | ";
	cout << setw(10) << left << "SubjectName" << "\t | ";
	cout << setw(5) << left << "Rating" << "\t | ";
	cout << setw(8) << left << "PayCheck" << "\t | " << endl;

	//printing out tutor_info
	for (int row = currentrow; row < maxRow; row++) {

		//Skip NULL values
		if (tutor_info[row].tutorID != NULL) {

			cout << tutor_info[row].tutorID << "\t| ";
			cout << setw(10) << left << tutor_info[row].tutorName << "\t| ";
			cout << tutor_info[row].dateJoin << "\t| ";
			cout << setw(14) << left << tutor_info[row].dateTerminated << "\t| ";
			cout << setw(8) << left << tutor_info[row].monthlyHour << "\t| ";
			cout << setw(10) << left << tutor_info[row].hourlyRate << "\t| ";
			cout << setw(10) << left << tutor_info[row].tutorPhone << "\t| ";
			cout << setw(10) << left << tutor_info[row].tutorAddress << "\t| ";
			cout << setw(10) << left << tutor_info[row].tutionName << "\t | ";
			cout << setw(10) << left << tutor_info[row].subjectName << "\t | ";
			cout << setw(5) << left << tutor_info[row].rating << "\t | ";
			cout << setw(8) << left << tutor_info[row].payCheck << "\t | " << endl;
		}
	}

	cout << string(193, '-') << endl;
	cout << "Page  " << currentPage << " of " << maxPage << endl;

	//In display list menu
	bool exitFunction = true;

	while (exitFunction != false)
	{
		int displayMenu;
		cout << "\n1. Next Page" << endl << "2. Back To Menu" << endl << "Enter your choice: ";
		while (!(cin >> displayMenu)) {
			cout << endl << "Invalid Input !!!" << endl;
			cout << "Enter you choice again: ";
			cin.clear();
			cin.ignore('\n');
		}
		switch (displayMenu)
		{
		case 1:
			currentPage = currentPage + 1;
			currentrow = (currentPage - 1) * 5;
			
			if (currentPage == maxPage) {
				maxRow = 5 * (arraysize / 5) + (arraysize % 5);
			}
			else {
				maxRow = 5 * currentPage;
			}

			cout << "Current row: " << currentrow << "\nMax Row: " << maxRow << "Current Page: " << currentPage << "\nMax Page: " << maxPage << endl;
			cout << "arraysize: " << arraysize << endl;

			cout << endl << string(193, '-') << endl << string(85, ' ') << displayString << endl << string(193, '-') << endl;
			
			for (int row = currentrow; row < maxRow; row++) {

				//Skip NULL values
				if (tutor_info[row].tutorID != NULL) {

					cout << tutor_info[row].tutorID << "\t| ";
					cout << setw(10) << left << tutor_info[row].tutorName << "\t| ";
					cout << tutor_info[row].dateJoin << "\t| ";
					cout << setw(14) << left << tutor_info[row].dateTerminated << "\t| ";
					cout << setw(8) << left << tutor_info[row].monthlyHour << "\t| ";
					cout << setw(10) << left << tutor_info[row].hourlyRate << "\t| ";
					cout << setw(10) << left << tutor_info[row].tutorPhone << "\t| ";
					cout << setw(10) << left << tutor_info[row].tutorAddress << "\t| ";
					cout << setw(10) << left << tutor_info[row].tutionName << "\t | ";
					cout << setw(10) << left << tutor_info[row].subjectName << "\t | ";
					cout << setw(5) << left << tutor_info[row].rating << "\t | ";
					cout << setw(8) << left << tutor_info[row].payCheck << "\t | " << endl;
				}
			}
			cout << string(193, '-') << endl;
			cout << "Page  " << currentPage << " of " << maxPage << endl;
			break;
		case 2:
			exitFunction = false;
			break;
		default:
			cout << "Invalid Option! Please Try Again";
		}
	}

}

void DisplayTutorSorted(Tutor tutor_info[], string displayString = "Tutor Records") {
	system("cls");
	int arraysize = 100;
	cout << endl << string(193, '-') << endl << string(85, ' ') << displayString << endl << string(193, '-') << endl;

	//Heading
	cout << "TutorID" << "\t| ";
	cout << setw(10) << left << "TutorName" << "\t| ";
	cout << "DateJoined" << "\t| ";
	cout << "DateTerminated" << "\t| ";
	cout << setw(10) << left << "WorkingHour" << "\t| ";
	cout << setw(10) << left << "HourlyRate" << "\t| ";
	cout << setw(10) << left << "PhoneNumber" << "\t| ";
	cout << setw(10) << left << "Address" << "\t| ";
	cout << setw(10) << left << "TuitionName" << "\t | ";
	cout << setw(10) << left << "SubjectName" << "\t | ";
	cout << setw(5) << left << "Rating" << "\t | ";
	cout << setw(8) << left << "PayCheck" << "\t | " << endl;

	//printing out tutor_info
	for (int row = 0; row < arraysize; row++) {

		//Skip NULL values
		if (tutor_info[row].tutorID != NULL) {
			cout << tutor_info[row].tutorID << "\t| ";
			cout << setw(10) << left << tutor_info[row].tutorName << "\t| ";
			cout << tutor_info[row].dateJoin << "\t| ";
			cout << setw(14) << left << tutor_info[row].dateTerminated << "\t| ";
			cout << setw(8) << left << tutor_info[row].monthlyHour << "\t| ";
			cout << setw(10) << left << tutor_info[row].hourlyRate << "\t| ";
			cout << setw(10) << left << tutor_info[row].tutorPhone << "\t| ";
			cout << setw(10) << left << tutor_info[row].tutorAddress << "\t| ";
			cout << setw(10) << left << tutor_info[row].tutionName << "\t | ";
			cout << setw(10) << left << tutor_info[row].subjectName << "\t | ";
			cout << setw(5) << left << tutor_info[row].rating << "\t | ";
			cout << setw(8) << left << tutor_info[row].payCheck << "\t | " << endl;
		}
	}

	cout << string(193, '-') << endl;
}



void DisplayKLTutor(Tutor tutor_info[], string displayString = "Kuala Lumpur - Tutor Records") {
	system("cls");
	int arraysize = 100;
	cout << endl << string(193, '-') << endl << string(85, ' ') << displayString << endl << string(193, '-') << endl;

	//Heading
	cout << "TutorID" << "\t| ";
	cout << setw(10) << left << "TutorName" << "\t| ";
	cout << "DateJoined" << "\t| ";
	cout << "DateTerminated" << "\t| ";
	cout << setw(10) << left << "WorkingHour" << "\t| ";
	cout << setw(10) << left << "HourlyRate" << "\t| ";
	cout << setw(10) << left << "PhoneNumber" << "\t| ";
	cout << setw(10) << left << "Address" << "\t| ";
	cout << setw(10) << left << "TuitionName" << "\t | ";
	cout << setw(10) << left << "SubjectName" << "\t | ";
	cout << setw(5) << left << "Rating" << "\t | ";
	cout << setw(8) << left << "PayCheck" << "\t | " << endl;

	//printing out tutor_info
	for (int row = 0; row < arraysize; row++) {

		//Skip NULL values
		if (tutor_info[row].tutorID != NULL) {
			if (tutor_info[row].tutionName == "KL") {
				cout << tutor_info[row].tutorID << "\t| ";
				cout << setw(10) << left << tutor_info[row].tutorName << "\t| ";
				cout << tutor_info[row].dateJoin << "\t| ";
				cout << setw(14) << left << tutor_info[row].dateTerminated << "\t| ";
				cout << setw(8) << left << tutor_info[row].monthlyHour << "\t| ";
				cout << setw(10) << left << tutor_info[row].hourlyRate << "\t| ";
				cout << setw(10) << left << tutor_info[row].tutorPhone << "\t| ";
				cout << setw(10) << left << tutor_info[row].tutorAddress << "\t| ";
				cout << setw(10) << left << tutor_info[row].tutionName << "\t | ";
				cout << setw(10) << left << tutor_info[row].subjectName << "\t | ";
				cout << setw(5) << left << tutor_info[row].rating << "\t | ";
				cout << setw(8) << left << tutor_info[row].payCheck << "\t | " << endl;
			}
		}
	}

	cout << string(193, '-') << endl;
}

void DisplayJohorTutor(Tutor tutor_info[], string displayString = "Johor - Tutor Records") {
	system("cls");
	int arraysize = 100;
	cout << endl << string(193, '-') << endl << string(85, ' ') << displayString << endl << string(193, '-') << endl;

	//Heading
	cout << "TutorID" << "\t| ";
	cout << setw(10) << left << "TutorName" << "\t| ";
	cout << "DateJoined" << "\t| ";
	cout << "DateTerminated" << "\t| ";
	cout << setw(10) << left << "WorkingHour" << "\t| ";
	cout << setw(10) << left << "HourlyRate" << "\t| ";
	cout << setw(10) << left << "PhoneNumber" << "\t| ";
	cout << setw(10) << left << "Address" << "\t| ";
	cout << setw(10) << left << "TuitionName" << "\t | ";
	cout << setw(10) << left << "SubjectName" << "\t | ";
	cout << setw(5) << left << "Rating" << "\t | ";
	cout << setw(8) << left << "PayCheck" << "\t | " << endl;

	//printing out tutor_info
	for (int row = 0; row < arraysize; row++) {

		//Skip NULL values
		if (tutor_info[row].tutorID != NULL) {
			if (tutor_info[row].tutionName == "JOHOR") {
				cout << tutor_info[row].tutorID << "\t| ";
				cout << setw(10) << left << tutor_info[row].tutorName << "\t| ";
				cout << tutor_info[row].dateJoin << "\t| ";
				cout << setw(14) << left << tutor_info[row].dateTerminated << "\t| ";
				cout << setw(8) << left << tutor_info[row].monthlyHour << "\t| ";
				cout << setw(10) << left << tutor_info[row].hourlyRate << "\t| ";
				cout << setw(10) << left << tutor_info[row].tutorPhone << "\t| ";
				cout << setw(10) << left << tutor_info[row].tutorAddress << "\t| ";
				cout << setw(10) << left << tutor_info[row].tutionName << "\t | ";
				cout << setw(10) << left << tutor_info[row].subjectName << "\t | ";
				cout << setw(5) << left << tutor_info[row].rating << "\t | ";
				cout << setw(8) << left << tutor_info[row].payCheck << "\t | " << endl;
			}
		}
	}

	cout << string(193, '-') << endl;
}