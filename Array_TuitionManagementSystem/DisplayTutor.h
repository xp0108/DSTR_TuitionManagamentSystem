#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "DataStruc.h"

void DisplayTutor(Tutor tutor_info[], string displayString = "Tutor Records") {
    system("cls");
    int arraysize = 100;
    int count = 0;
    cout << endl << string(180, '-') << endl << displayString  << endl << string(180, '-') << endl;

    //Heading
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

    // print out tutor_info
    for (int row = 0; row < arraysize; row++) {

        //Skip NULL values
        if (tutor_info[row].tutorID != NULL) {
            count++;
                /*cout << "Tutor ID: " << tutor_info[row].tutorID << endl;
                cout << "Tutor name: " << tutor_info[row].tutorName << endl;
                cout << "Date joined: " << tutor_info[row].dateJoin << endl;
                cout << "Date terminated: " << tutor_info[row].dateTerminated << endl;
                cout << "Hourly rate: " << tutor_info[row].hourlyRate << endl;
                cout << "Phone number: " << tutor_info[row].tutorPhone << endl;
                cout << "Address: " << tutor_info[row].tutorAddress << endl;
                cout << "Tuition name: " << tutor_info[row].tutionName << endl;
                cout << endl;*/

            cout
                << left
                << setw(15)
                << tutor_info[row].tutorID
                << left
                << setw(15)
                << tutor_info[row].tutorName
                << left
                << setw(15)
                << tutor_info[row].dateJoin
                << left
                << setw(15)
                << tutor_info[row].dateTerminated
                << left
                << setw(15)
                << tutor_info[row].monthlyHour
                << left
                << setw(15)
                << tutor_info[row].hourlyRate
                << left
                << setw(15)
                << tutor_info[row].tutorPhone
                << left
                << setw(15)
                << tutor_info[row].tutorAddress
                << left
                << setw(15)
                << tutor_info[row].tutionName
                << left
                << setw(15)
                << tutor_info[row].subjectName
                << left
                << setw(15)
                << tutor_info[row].rating
                << left
                << setw(15)
                << tutor_info[row].payCheck
                << endl;
            
        }
    }

    cout << endl;
    cout << string(180, '-') << endl;
}


void DisplayKLTutor(Tutor tutor_info[], string displayString = "Kuala Lumpur - Tutor Records") {
    system("cls");
    int arraysize = 100;
    cout << endl << string(200, '-') << endl << displayString << endl << string(100, '-') << endl;

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

    // print out tutor_info
    for (int row = 0; row < arraysize; row++) {

        //Skip NULL values
        if (tutor_info[row].tutorID != NULL) {

            if (tutor_info[row].tutionName == "KL") {

                /*cout << "Tutor ID: " << tutor_info[row].tutorID << endl;
                cout << "Tutor name: " << tutor_info[row].tutorName << endl;
                cout << "Date joined: " << tutor_info[row].dateJoin << endl;
                cout << "Date terminated: " << tutor_info[row].dateTerminated << endl;
                cout << "Hourly rate: " << tutor_info[row].hourlyRate << endl;
                cout << "Phone number: " << tutor_info[row].tutorPhone << endl;
                cout << "Address: " << tutor_info[row].tutorAddress << endl;
                cout << "Tuition name: " << tutor_info[row].tutionName << endl;
                cout << endl;*/

                cout
                    << left
                    << setw(15)
                    << tutor_info[row].tutorID
                    << left
                    << setw(15)
                    << tutor_info[row].tutorName
                    << left
                    << setw(15)
                    << tutor_info[row].dateJoin
                    << left
                    << setw(15)
                    << tutor_info[row].dateTerminated
                    << left
                    << setw(15)
                    << tutor_info[row].monthlyHour
                    << left
                    << setw(15)
                    << tutor_info[row].hourlyRate
                    << left
                    << setw(15)
                    << tutor_info[row].tutorPhone
                    << left
                    << setw(15)
                    << tutor_info[row].tutorAddress
                    << left
                    << setw(15)
                    << tutor_info[row].tutionName
                    << left
                    << setw(15)
                    << tutor_info[row].subjectName
                    << left
                    << setw(15)
                    << tutor_info[row].rating
                    << left
                    << setw(15)
                    << tutor_info[row].payCheck
                    << endl;
            }
        }
    }

    cout << endl;
    cout << string(200, '-') << endl;
}

void DisplayJohorTutor(Tutor tutor_info[], string displayString = "Johor - Tutor Records") {
    system("cls");
    int arraysize = 100;
    cout << endl << string(180, '-') << endl << displayString << endl << string(180, '-') << endl;

    //Heading
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

    // print out tutor_info
    for (int row = 0; row < arraysize; row++) {

        //Skip NULL values
        if (tutor_info[row].tutorID != NULL) {

            if (tutor_info[row].tutionName == "JOHOR") {

                /*cout << "Tutor ID: " << tutor_info[row].tutorID << endl;
                cout << "Tutor name: " << tutor_info[row].tutorName << endl;
                cout << "Date joined: " << tutor_info[row].dateJoin << endl;
                cout << "Date terminated: " << tutor_info[row].dateTerminated << endl;
                cout << "Hourly rate: " << tutor_info[row].hourlyRate << endl;
                cout << "Phone number: " << tutor_info[row].tutorPhone << endl;
                cout << "Address: " << tutor_info[row].tutorAddress << endl;
                cout << "Tuition name: " << tutor_info[row].tutionName << endl;
                
                cout << endl;*/

                cout
                    << left
                    << setw(15)
                    << tutor_info[row].tutorID
                    << left
                    << setw(15)
                    << tutor_info[row].tutorName
                    << left
                    << setw(15)
                    << tutor_info[row].dateJoin
                    << left
                    << setw(15)
                    << tutor_info[row].dateTerminated
                    << left
                    << setw(15)
                    << tutor_info[row].monthlyHour
                    << left
                    << setw(15)
                    << tutor_info[row].hourlyRate
                    << left
                    << setw(15)
                    << tutor_info[row].tutorPhone
                    << left
                    << setw(15)
                    << tutor_info[row].tutorAddress
                    << left
                    << setw(15)
                    << tutor_info[row].tutionName
                    << left
                    << setw(15)
                    << tutor_info[row].subjectName
                    << left
                    << setw(15)
                    << tutor_info[row].rating
                    << left
                    << setw(15)
                    << tutor_info[row].payCheck
                    << endl;
            }
        }
    }

    cout << endl;
    cout << string(180, '-') << endl;
}