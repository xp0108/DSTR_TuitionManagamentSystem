#pragma once
#include <iostream>
#include "DataStruc.h"

void DisplayTutor(Tutor tutor_info[]) {
    int arraysize = 100;
    cout << endl << string(100, '-') << endl << "Tutor Records" << endl << string(100, '-') << endl;

    // print out tutor_info
    for (int row = 0; row < arraysize; row++) {
        if (tutor_info[row].tutorID == NULL) {
            cout << "";
        }
        else {
            cout << "Tutor ID: " << tutor_info[row].tutorID << endl;
            cout << "Tutor name: " << tutor_info[row].tutorName << endl;
            cout << "Date joined: " << tutor_info[row].dateJoin << endl;
            cout << "Date terminated: N/A" << endl;
            cout << "Hourly rate: " << tutor_info[row].hourlyRate << endl;
            cout << "Phone number: " << tutor_info[row].tutorPhone << endl;
            cout << "Address: " << tutor_info[row].tutorAddress << endl;
            cout << endl;

        }
    }

    cout << endl;
    cout << string(100, '-') << endl;
}