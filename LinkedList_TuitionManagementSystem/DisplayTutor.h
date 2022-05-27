#pragma once
#include "DataStruct.h"
#include "AddTutor.h"
#include <iomanip>

void DisplayHeading()
{
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
	cout << string(193, '-') << endl;
}

void DisplayTutor(int size, int currentPage, string displayString = "Tutor Records") { // no need pass the pointer, store in memory, jst direct refer
	Tutor* current = head;
	int currentrow, maxRow, maxPage;

	//5 rows of tutor's data in each Page
	if (size % 5 != 0) {
		maxPage = (size / 5) + 1;
	}
	else {
		maxPage = size / 5;
	}

	if (currentPage == 0) {
		currentPage = maxPage;
	}
	else if (currentPage > maxPage) {
		currentPage = 1;
	}

	if (currentPage == maxPage) {
		maxRow = 5 * (size / 5) + (size % 5);
	}
	else {
		maxRow = 5 * currentPage;
	}

	currentrow = (currentPage - 1) * 5;


	system("cls");
	cout << endl << string(193, '-') << endl << string(85, ' ') << displayString << endl << string(193, '-') << endl;
	DisplayHeading();

	for(int row = currentrow; row < maxRow; row++){
		while (current != NULL) {
			cout << current->tutorID << "\t| ";
			cout << setw(10) << left << current->tutorName << "\t| ";
			cout << current->dateJoin << "\t| ";
			cout << setw(14) << left << current->dateTerminated << "\t| ";
			cout << setw(8) << left << current->workingHour << "\t| ";
			cout << setw(10) << left << current->hourlyRate << "\t| ";
			cout << setw(10) << left << current->tutorPhone << "\t| ";
			cout << setw(10) << left << current->tutorAddress << "\t| ";
			cout << setw(10) << left << current->tutionName << "\t | ";
			cout << setw(10) << left << current->subjectName << "\t | ";
			cout << setw(5) << left << current->rating << "\t | ";
			cout << setw(8) << left << current->payCheck << "\t | " << endl;
			current = current->nextAddress;

		}
	}
	cout << "Page  " << currentPage << " of " << maxPage << endl;
}

void DisplaySortedTutor(string displayString = "Tutor Records") { // no need pass the pointer, store in memory, jst direct refer
	Tutor* current = head;

	system("cls");
	cout << endl << string(193, '-') << endl << string(85, ' ') << displayString << endl << string(193, '-') << endl;
	DisplayHeading();

	while (current != NULL) {
		cout << current->tutorID << "\t| ";
		cout << setw(10) << left << current->tutorName << "\t| ";
		cout << current->dateJoin << "\t| ";
		cout << setw(14) << left << current->dateTerminated << "\t| ";
		cout << setw(8) << left << current->workingHour << "\t| ";
		cout << setw(10) << left << current->hourlyRate << "\t| ";
		cout << setw(10) << left << current->tutorPhone << "\t| ";
		cout << setw(10) << left << current->tutorAddress << "\t| ";
		cout << setw(10) << left << current->tutionName << "\t | ";
		cout << setw(10) << left << current->subjectName << "\t | ";
		cout << setw(5) << left << current->rating << "\t | ";
		cout << setw(8) << left << current->payCheck << "\t | " << endl;
		current = current->nextAddress;
	}
}

void DisplayKLTutor(string displayString = "Tutor Records") { // no need pass the pointer, store in memory, jst direct refer
	Tutor* current = head;

	system("cls");
	cout << endl << string(193, '-') << endl << string(85, ' ') << displayString << endl << string(193, '-') << endl;
	DisplayHeading();

	
	while (current != NULL) {
		if (current->tutionName == "KL") {
			cout << current->tutorID << "\t| ";
			cout << setw(10) << left << current->tutorName << "\t| ";
			cout << current->dateJoin << "\t| ";
			cout << setw(14) << left << current->dateTerminated << "\t| ";
			cout << setw(8) << left << current->workingHour << "\t| ";
			cout << setw(10) << left << current->hourlyRate << "\t| ";
			cout << setw(10) << left << current->tutorPhone << "\t| ";
			cout << setw(10) << left << current->tutorAddress << "\t| ";
			cout << setw(10) << left << current->tutionName << "\t | ";
			cout << setw(10) << left << current->subjectName << "\t | ";
			cout << setw(5) << left << current->rating << "\t | ";
			cout << setw(8) << left << current->payCheck << "\t | " << endl;
		}
		current = current->nextAddress;
	}
}

void DisplayJohorTutor(string displayString = "Tutor Records") { // no need pass the pointer, store in memory, jst direct refer
	Tutor* current = head;

	system("cls");
	cout << endl << string(193, '-') << endl << string(85, ' ') << displayString << endl << string(193, '-') << endl;
	DisplayHeading();


	while (current != NULL) {
		if (current->tutionName == "JOHOR") {
			cout << current->tutorID << "\t| ";
			cout << setw(10) << left << current->tutorName << "\t| ";
			cout << current->dateJoin << "\t| ";
			cout << setw(14) << left << current->dateTerminated << "\t| ";
			cout << setw(8) << left << current->workingHour << "\t| ";
			cout << setw(10) << left << current->hourlyRate << "\t| ";
			cout << setw(10) << left << current->tutorPhone << "\t| ";
			cout << setw(10) << left << current->tutorAddress << "\t| ";
			cout << setw(10) << left << current->tutionName << "\t | ";
			cout << setw(10) << left << current->subjectName << "\t | ";
			cout << setw(5) << left << current->rating << "\t | ";
			cout << setw(8) << left << current->payCheck << "\t | " << endl;			
		}
		current = current->nextAddress;
	}
}