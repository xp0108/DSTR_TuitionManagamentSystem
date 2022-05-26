#pragma once
#include "DataStruct.h"
#include "AddTutor.h"
#include <iomanip>


void GenerateReport(string tuition) { // no need pass the pointer, store in memory, jst direct refer
	Tutor* current = head;

	system("cls");
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

	while (current != NULL) {
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
		current = current->nextAddress;
	}
}