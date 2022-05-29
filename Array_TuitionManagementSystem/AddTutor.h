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

		// check whether tutor id exists
		int index = CheckTutorID(id, tutor_info, 100);

		// if exists
		if (index == 0) {
			break;
		}

		// if not exists
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
			cout << endl;
			//Menu for Tuition Center
			cout << "Tuition Center: ";
			bool exitTuitionCenterMenu = true;
			while (exitTuitionCenterMenu != false)
			{
				int tutorCenterChoice;
				cout << endl;
				cout << "Select Tutor Center" << endl;
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
					exitTuitionCenterMenu = false;
					break;
				case 2:
					tutor_info[row].tutionName = "JOHOR";
					exitTuitionCenterMenu = false;
					break;
				default:
					cout << "Invalid Option! Please Try Again";
				}
			}
			cout << endl;
			//Menu for Subject Name
			cout << "Subject Name: ";
			bool exitSubjectName = true;
			while (exitSubjectName != false)
			{
				int subjectChoice;
				cout << endl;
				cout << " Select Tutor Center" << endl;
				cout << "1. English" << endl;
				cout << "2. BM" << endl;
				cout << "3. Mandarin" << endl;
				cout << "4. Science" << endl;
				cout << "5. Math" << endl;
				cout << "6. AddMath" << endl;
				cout << "7. Computing" << endl;
				cout << "8. History" << endl;
				cout << "9. Economics" << endl;
				cout << "10. Accounting" << endl;
				cout << "Enter your choice: ";
				// Validate user input
				while (!(cin >> subjectChoice)) {
					cout << endl << "Invalid Input !!!" << endl;
					cout << "Enter you choice again: ";
					cin.clear();
					cin.ignore(123, '\n');
				}
				switch (subjectChoice)
				{
				case 1:
					tutor_info[row].subjectName = "English";
					tutor_info[row].hourlyRate = 40;
					exitSubjectName = false;
					break;
				case 2:
					tutor_info[row].subjectName = "BM";
					tutor_info[row].hourlyRate = 40;
					exitSubjectName = false;
					break;
				case 3:
					tutor_info[row].subjectName = "Mandarin";
					tutor_info[row].hourlyRate = 40;
					exitSubjectName = false;
					break;
				case 4:
					tutor_info[row].subjectName = "Science";
					tutor_info[row].hourlyRate = 80;
					exitSubjectName = false;
					break;
				case 5:
					tutor_info[row].subjectName = "Math";
					tutor_info[row].hourlyRate = 80;
					exitSubjectName = false;
					break;
				case 6:
					tutor_info[row].subjectName = "AddMath";
					tutor_info[row].hourlyRate = 80;
					exitSubjectName = false;
					break;
				case 7:
					tutor_info[row].subjectName = "Computing";
					tutor_info[row].hourlyRate = 80;
					exitSubjectName = false;
				break;   
				case 8:
					tutor_info[row].subjectName = "History";
					tutor_info[row].hourlyRate = 60;
					exitSubjectName = false;
				break;    
				case 9:
					tutor_info[row].subjectName = "Economics";
					tutor_info[row].hourlyRate = 60;
					exitSubjectName = false;
				break;   
				case 10:
					tutor_info[row].subjectName = "Accounting";
					tutor_info[row].hourlyRate = 60;
					exitSubjectName = false;
					break;
				default:
					cout << "Invalid Option! Please Try Again";
				}
			}
			cout << endl;

			// default, rating is 0
			PushRating(tutor_info, row, 0);
			cout << endl;
			tutor_info[row].payCheck = tutor_info[row].monthlyHour * tutor_info[row].hourlyRate;

		}
		break;
	}
}