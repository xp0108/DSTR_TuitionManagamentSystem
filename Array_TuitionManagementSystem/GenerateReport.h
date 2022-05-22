#pragma once
#include <iostream>
#include <string>
#include "DataStruc.h"

void generateKLTutorReport(Tutor tutor_info[], string displayString = "KL Center Report") {
    system("cls");
    int arraysize = 100;
    cout << endl << string(50, '-') << endl << displayString << endl << string(50, '-') << endl;

    //Heading
    cout
        << left
        << setw(15)
        << "Subject Name"
        << left
        << setw(15)
        << "Tutor ID"
        << left
        << setw(15)
        << "Tutor name"
        << endl;

    // print out tutor_info
    for (int row = 0; row < arraysize; row++) {

        //Skip NULL values
        if (tutor_info[row].tutorID != NULL) {

            if (tutor_info[row].tutionName == "KL" && tutor_info[row].dateTerminated == "") {

                /*cout << "Subject Name: " << tutor_info[row].subjectName << endl;
                cout << "Tutor ID: " << tutor_info[row].tutorID << endl;
                cout << "Tutor name: " << tutor_info[row].tutorName << endl;
                cout << endl;*/

                cout
                    << left
                    << setw(15)
                    << tutor_info[row].subjectName
                    << left
                    << setw(15)
                    << tutor_info[row].tutorID
                    << left
                    << setw(15)
                    << tutor_info[row].tutorName
                    << left
                    << setw(15)
                    << endl;
            }
        }
    }

    cout << endl;
    cout << string(50, '-') << endl;
}

void generateJohorTutorReport(Tutor tutor_info[], string displayString = "Johor Center Report") {
    system("cls");
    int arraysize = 100;
    cout << endl << string(50, '-') << endl << displayString << endl << string(50, '-') << endl;

    //Heading
    cout
        << left
        << setw(15)
        << "Subject Name"
        << left
        << setw(15)
        << "Tutor ID"
        << left
        << setw(15)
        << "Tutor name"
        << endl;

    // print out tutor_info
    for (int row = 0; row < arraysize; row++) {

        //Skip NULL values
        if (tutor_info[row].tutorID != NULL) {

            if (tutor_info[row].tutionName == "JOHOR" && tutor_info[row].dateTerminated == "") {

                /*cout << "Subject Name: " << tutor_info[row].subjectName << endl;
                cout << "Tutor ID: " << tutor_info[row].tutorID << endl;
                cout << "Tutor name: " << tutor_info[row].tutorName << endl;
                cout << endl;*/
				
                cout
                    << left
                    << setw(15)
                    << tutor_info[row].subjectName
                    << left
                    << setw(15)
                    << tutor_info[row].tutorID
                    << left
                    << setw(15)
                    << tutor_info[row].tutorName
                    << left
                    << setw(15)
                    << endl;				
            }
        }
    }

    cout << endl;
    cout << string(50, '-') << endl;
}