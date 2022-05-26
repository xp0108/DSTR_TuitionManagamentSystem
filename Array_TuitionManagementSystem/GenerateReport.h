#pragma once
#include <iostream>
#include <string>
#include "DataStruc.h"

//generate kl tutor report
void generateKLTutorReport(Tutor tutor_info[], string displayString = "KL Center Report") {
    //clear terminal
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

    //print out tutor_info
    for (int row = 0; row < arraysize; row++) {

        //skip NULL values
        if (tutor_info[row].tutorID != NULL) {

			//print out tutor_info if tuition name is KL and is not terminated
            if (tutor_info[row].tutionName == "KL" && tutor_info[row].dateTerminated == "") {
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

//generate Johor tutor report
void generateJohorTutorReport(Tutor tutor_info[], string displayString = "Johor Center Report") {
    //clear terminal
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

    //print out tutor_info
    for (int row = 0; row < arraysize; row++) {

        //skip NULL values
        if (tutor_info[row].tutorID != NULL) {

            //print out tutor_info if tuition name is Johor and is not terminated
            if (tutor_info[row].tutionName == "JOHOR" && tutor_info[row].dateTerminated == "") {
				
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