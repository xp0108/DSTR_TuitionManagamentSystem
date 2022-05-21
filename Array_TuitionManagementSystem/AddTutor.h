#pragma once
#include <iostream>
#include "DataStruc.h"

int InputArraySize() {
    int arraysize;

    cout << "Number of tutor(s) to add (integers only): ";
    cin >> arraysize;
    cout << endl;

    return arraysize;
};

//check if the tutorID axist in the tutor_info array
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

    int size = InputArraySize();

    // add value to tutor_info
    for (int row = 0; row < size; row++) {
        cout << "Tutor ID (integers only): ";
        cin >> tutor_info[row].tutorID;

        int index = CheckTutorID(tutor_info[row].tutorID, tutor_info, 100);

        if (index == 0) {
            break;
        }
        else {

            cout << "Full name: ";
            cin >> tutor_info[row].tutorName;
            cout << "Date joined: ";
            cin >> tutor_info[row].dateJoin;
            cout << "Phone number: ";
            cin >> tutor_info[row].tutorPhone;
            cout << "Address: ";
            cin >> tutor_info[row].tutorAddress;
            cout << "Tuition Center: ";
            cin >> tutor_info[row].tutionName;
            cout << "Subject Code: ";
            cin >> tutor_info[row].subjectName;
            cout << "Rating: ";
            cin >> tutor_info[row].rating;
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
        }
    }
}