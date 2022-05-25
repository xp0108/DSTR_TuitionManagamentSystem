#pragma once
#include "DataStruct.h"
#include "AddTutor.h"
#include <iomanip>


void DisplayTutor() { // no need pass the pointer, store in memory, jst direct refer
	Tutor* current = head;

    cout
        << left
        << setw(15)
        << "TutorID"
        << left
        << setw(15)
        << "TutorName"
        << left
        << setw(15)
        << "DateJoined"
        << left
        << setw(15)
        << "DateTerminated"
        << left
        << setw(15)
        << "WorkingHour"
        << left
        << setw(15)
        << "HourlyRate"
        << left
        << setw(15)
        << "PhoneNumber"
        << left
        << setw(15)
        << "Address"
        << left
        << setw(15)
        << "TuitionName"
        << left
        << setw(15)
        << "SubjectName"
        << left
        << setw(15)
        << "Rating"
        << left
        << setw(15)
        << "PayCheck"
        << endl;

		while (current != NULL) {
            cout
                << left
                << setw(15)
                << current->tutorID
                << left
                << setw(15)
                << current->tutorName
                << left
                << setw(15)
                << current->dateJoin
                << left
                << setw(15)
                << current->dateTerminated
                << left
                << setw(15)
                << current->workingHour
                << left
                << setw(15)
                << current->hourlyRate
                << left
                << setw(15)
                << current->tutorPhone
                << left
                << setw(15)
                << current->tutorAddress
                << left
                << setw(15)
                << current->tutionName
                << left
                << setw(15)
                << current->subjectName
                << left
                << setw(15)
                << current->rating
                << left
                << setw(15)
                << current->payCheck
                << endl;
            current = current->nextAddress;

		//}
	}
}