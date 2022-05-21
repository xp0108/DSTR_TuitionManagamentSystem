#pragma once
#include <iostream>
#include <string>
#include "DataStruc.h"

void DisplayTutor(Tutor tutor_info[], string displayString = "Tutor Records") {
    system("cls");
    int arraysize = 100;
    cout << endl << string(100, '-') << endl << displayString  << endl << string(100, '-') << endl;

    // print out tutor_info
    for (int row = 0; row < arraysize; row++) {

        //Skip NULL values
        if (tutor_info[row].tutorID != NULL) {

                cout << "Tutor ID: " << tutor_info[row].tutorID << endl;
                cout << "Tutor name: " << tutor_info[row].tutorName << endl;
                cout << "Date joined: " << tutor_info[row].dateJoin << endl;
                cout << "Date terminated: " << tutor_info[row].dateTerminated << endl;
                cout << "Hourly rate: " << tutor_info[row].hourlyRate << endl;
                cout << "Phone number: " << tutor_info[row].tutorPhone << endl;
                cout << "Address: " << tutor_info[row].tutorAddress << endl;
                cout << "Tuition name: " << tutor_info[row].tutionName << endl;
                cout << "Tutor Subject Code: " << tutor_info[row].subjectName << endl;
                cout << "Tutor Rating: " << tutor_info[row].rating << endl;
                cout << endl;
            
        }
    }

    cout << endl;
    cout << string(100, '-') << endl;
}


void DisplayKLTutor(Tutor tutor_info[], string displayString = "Kuala Lumpur - Tutor Records") {
    system("cls");
    int arraysize = 100;
    cout << endl << string(100, '-') << endl << displayString << endl << string(100, '-') << endl;

    // print out tutor_info
    for (int row = 0; row < arraysize; row++) {

        //Skip NULL values
        if (tutor_info[row].tutorID != NULL) {

            if (tutor_info[row].tutionName == "KL") {

                cout << "Tutor ID: " << tutor_info[row].tutorID << endl;
                cout << "Tutor name: " << tutor_info[row].tutorName << endl;
                cout << "Date joined: " << tutor_info[row].dateJoin << endl;
                cout << "Date terminated: " << tutor_info[row].dateTerminated << endl;
                cout << "Hourly rate: " << tutor_info[row].hourlyRate << endl;
                cout << "Phone number: " << tutor_info[row].tutorPhone << endl;
                cout << "Address: " << tutor_info[row].tutorAddress << endl;
                cout << "Tuition name: " << tutor_info[row].tutionName << endl;
                cout << endl;
            }
        }
    }

    cout << endl;
    cout << string(100, '-') << endl;
}

void DisplayJohorTutor(Tutor tutor_info[], string displayString = "Johor - Tutor Records") {
    system("cls");
    int arraysize = 100;
    cout << endl << string(100, '-') << endl << displayString << endl << string(100, '-') << endl;

    // print out tutor_info
    for (int row = 0; row < arraysize; row++) {

        //Skip NULL values
        if (tutor_info[row].tutorID != NULL) {

            if (tutor_info[row].tutionName == "JOHOR") {

                cout << "Tutor ID: " << tutor_info[row].tutorID << endl;
                cout << "Tutor name: " << tutor_info[row].tutorName << endl;
                cout << "Date joined: " << tutor_info[row].dateJoin << endl;
                cout << "Date terminated: " << tutor_info[row].dateTerminated << endl;
                cout << "Hourly rate: " << tutor_info[row].hourlyRate << endl;
                cout << "Phone number: " << tutor_info[row].tutorPhone << endl;
                cout << "Address: " << tutor_info[row].tutorAddress << endl;
                cout << "Tuition name: " << tutor_info[row].tutionName << endl;
                
                cout << endl;
            }
        }
    }

    cout << endl;
    cout << string(100, '-') << endl;
}