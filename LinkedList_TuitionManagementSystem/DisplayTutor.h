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

void DisplayTutor(string displayString = "Tutor Records") { // no need pass the pointer, store in memory, jst direct refer
	Tutor* current = head;

	system("cls");
	cout << endl << string(193, '-') << endl << string(85, ' ') << displayString << endl << string(193, '-') << endl;
	DisplayHeading();

	while (current != NULL) {
		cout <<current->tutorID << "\t| ";
		cout << setw(10) << left <<current->tutorName << "\t| ";
		cout <<current->dateJoin << "\t| ";
		cout << setw(14) << left <<current->dateTerminated << "\t| ";
		cout << setw(8) << left <<current->workingHour << "\t| ";
		cout << setw(10) << left <<current->hourlyRate << "\t| ";
		cout << setw(10) << left <<current->tutorPhone << "\t| ";
		cout << setw(10) << left <<current->tutorAddress << "\t| ";
		cout << setw(10) << left <<current->tutionName << "\t | ";
		cout << setw(10) << left <<current->subjectName << "\t | ";
		cout << setw(5) << left <<current->rating << "\t | ";
		cout << setw(8) << left <<current->payCheck << "\t | " << endl;
		current = current->nextAddress;
	}
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