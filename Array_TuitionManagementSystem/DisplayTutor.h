#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "DataStruc.h"

void DisplayTutor(Tutor tutor_info[], string displayString = "Tutor Records") {
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