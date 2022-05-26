#pragma once
#include "DataStruct.h"
#include "AddTutor.h"
#include <iomanip>

//generate tutor report
void GenerateReport(string tuition) { // no need pass the pointer, store in memory, jst direct refer
	Tutor* current = head;

	//clear the terminal
	system("cls");
	cout << endl << string(50, '-') << endl << "Report" << endl << string(50, '-') << endl;
	
	//heading
	cout
		<< left
		<< setw(15)
		<< "SubjectName"
		<< left
		<< setw(15)
		<< "TutorID"
		<< left
		<< setw(15)
		<< "TutorName"
		<< endl;

	//while the current is not null
	while (current != NULL) {

		//check if the tuition is the same and is not terminated, print the tutor information
		if (current->dateTerminated == "N/A" && current->tutionName == tuition) {
			cout
				<< left
				<< setw(15)
				<< current->subjectName
				<< left
				<< setw(15)
				<< current->tutorID
				<< left
				<< setw(15)
				<< current->tutorName
				<< endl;
		}

		//push to next address
		current = current->nextAddress;
	}
	cout << endl << string(50, '-') << endl;
}