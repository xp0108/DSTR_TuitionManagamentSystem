#pragma once
#include <iostream>
#include <string>
#include "DataStruc.h"

void generateKLTutorReport(Tutor tutor_info[], string displayString = "KL Center Report") {
    system("cls");
    int arraysize = 100;
    cout << endl << string(100, '-') << endl << displayString << endl << string(100, '-') << endl;

    // print out tutor_info
    for (int row = 0; row < arraysize; row++) {

        //Skip NULL values
        if (tutor_info[row].tutorID != NULL) {

            if (tutor_info[row].tutionName == "KL" && tutor_info[row].dateTerminated == "") {

                cout << "Subject Name: " << tutor_info[row].subjectName << endl;
                cout << "Tutor ID: " << tutor_info[row].tutorID << endl;
                cout << "Tutor name: " << tutor_info[row].tutorName << endl;
                cout << endl;

            }
        }
    }

    cout << endl;
    cout << string(100, '-') << endl;
}

void generateJohorTutorReport(Tutor tutor_info[], string displayString = "Johor Center Report") {
    system("cls");
    int arraysize = 100;
    cout << endl << string(100, '-') << endl << displayString << endl << string(100, '-') << endl;

    // print out tutor_info
    for (int row = 0; row < arraysize; row++) {

        //Skip NULL values
        if (tutor_info[row].tutorID != NULL) {

            if (tutor_info[row].tutionName == "JOHOR" && tutor_info[row].dateTerminated == "") {

                cout << "Subject Name: " << tutor_info[row].subjectName << endl;
                cout << "Tutor ID: " << tutor_info[row].tutorID << endl;
                cout << "Tutor name: " << tutor_info[row].tutorName << endl;
                cout << endl;
				
            }
        }
    }

    cout << endl;
    cout << string(100, '-') << endl;
}