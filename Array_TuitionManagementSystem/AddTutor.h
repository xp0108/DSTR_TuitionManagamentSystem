#pragma once
#include <iostream>
#include "DataStruc.h"
#include "AddRating.h"

//check if the tutorID exist in the tutor_info array
int CheckTutorID(int tutorID, Tutor tutor_info[], int arraysize) {
    for (int i = 0; i < arraysize; i++) {
        if (tutorID == tutor_info[i].tutorID && !tutor_info[i].tutorName.empty()) {
            cout << endl << "Tutor ID " << tutorID << " already exist.";
            return 0;
        }
    }
    return -1;
};

void AddTutor(Tutor tutor_info[]) {

    int id;
    string tCenter;
    // add value to tutor_info
    for (int row = 0; row < 100; row++) {
        cout << "Tutor ID (integers only): ";

        while (!(cin >> id)) {
            cout << "Invalid input. Integers only: ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        int index = CheckTutorID(id, tutor_info, 100);

        if (index == 0) {
            break;
        }
        else {
            
            tutor_info[row].tutorID = id;
            cout << "Full name: ";
            cin >> tutor_info[row].tutorName;
            cout << "Date joined: ";
            cin >> tutor_info[row].dateJoin;
            cout << "Working Hour: ";
            cin >> tutor_info[row].monthlyHour;
            cout << "Phone number: ";
            cin >> tutor_info[row].tutorPhone;
            cout << "Address: ";
            cin >> tutor_info[row].tutorAddress;
            cout << "Tuition Center: ";
            bool exitFunction = true;
            while (exitFunction != false)
            {
                int tutorCenterChoice;
                cout << endl << endl;
                cout << " Select Tutor Center" << endl;
                cout << "1. KL" << endl;
                cout << "2. JOHOR" << endl;
                cout << "Enter your choice: ";
                // Validate user input
                while (!(cin >> tutorCenterChoice)) {
                    cout << endl << "Invalid Input !!!" << endl;
                    cout << "Enter you choice again: ";
                    cin.clear();
                    cin.ignore(123, '\n');
                }
                switch (tutorCenterChoice)
                {
                case 1:
                    tutor_info[row].tutionName = "KL";
                    exitFunction = false;
                    break;
                case 2:
                    tutor_info[row].tutionName = "JOHOR";
                    exitFunction = false;
                    break;
                default:
                    cout << "Invalid Option! Please Try Again";
                }
            }
            cout << endl;
            cout << "Subject Name: ";
            cin >> tutor_info[row].subjectName;
            // default, rating is 0
            PushRating(tutor_info, row, 0);
            cout << endl;

            if (tutor_info[row].subjectName == "English" || tutor_info[row].subjectName == "BM" || tutor_info[row].subjectName == "Mandarin") {
                tutor_info[row].hourlyRate = 40;
            }
            else if (tutor_info[row].subjectName == "Science" || tutor_info[row].subjectName == "Math" || tutor_info[row].subjectName == "AddMath" || tutor_info[row].subjectName == "Computing") {
                tutor_info[row].hourlyRate = 80;
            }
            else if (tutor_info[row].subjectName == "History" || tutor_info[row].subjectName == "Economics" || tutor_info[row].subjectName == "Accounting") {
                tutor_info[row].hourlyRate = 60;
            }
            else {
                tutor_info[row].hourlyRate = 0;
            }

            tutor_info[row].payCheck = tutor_info[row].monthlyHour * tutor_info[row].hourlyRate;
            
        }
        break;
    }
}