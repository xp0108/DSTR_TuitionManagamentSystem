#pragma once
#include <iostream>
#include <string>
#include "DataStruc.h"
#include "AddRating.h"

using namespace std;

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

int GetTutorSize(Tutor tutor_info[]) {
	int size = 0;

	for (int i = 0; i < 100; i++) {
		if (!tutor_info[i].tutorName.empty()) {
			size++;
		}
	}
	return size;
}

void AddTutor(Tutor tutor_info[]) {

	int id, day, month, year;
	string tCenter, date, sday, smonth, syear;

	// add value to tutor_info
	int sizeTutor = GetTutorSize(tutor_info);
	sizeTutor = sizeTutor + 1;
	for (int row = sizeTutor; row < 100; row++) {
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
			cout << endl;

			// date format validation
			cout << "Date joined: " << endl;
			bool exitDate = false;

			while (exitDate != true) {
				while (exitDate != true) {
					cout << "Day (1-31): ";
					while ((!(cin >> day)) || day < 1 || day > 31) {
						cout << "Numbers 1-31 only: ";
						cin.clear();
						cin.ignore(123, '\n');
					}
					cout << "Month (1-12): ";
					while ((!(cin >> month)) || month < 1 || month > 12) {
						cout << "Numbers 1-12 only: ";
						cin.clear();
						cin.ignore(123, '\n');
					}
					cout << "Year (4 digits): ";
					while ((!(cin >> year)) || year < 1000 || year > 2100) {
						cout << "Invalid year, input again: ";
						cin.clear();
						cin.ignore(123, '\n');
					}

					if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 0 && day <= 31) {
						cout << "It is valid" << endl;
						sday = to_string(day);
						smonth = to_string(month);
						syear = to_string(year);
						date = sday + "/" + smonth + "/" + syear;
						cout << endl;
						cout << "Date joined: " << date << endl;
						exitDate = true;

					}
					else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 0 && day <= 30) {
						cout << "It is Valid" << endl;
						sday = to_string(day);
						smonth = to_string(month);
						syear = to_string(year);
						date = sday + "/" + smonth + "/" + syear;
						cout << endl;
						cout << "Date joined: " << date << endl;
						exitDate = true;
					}
					else if (month == 2) {
						if ((year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) && day > 0 && day <= 29) {
							cout << "It is Valid" << endl;
							sday = to_string(day);
							smonth = to_string(month);
							syear = to_string(year);
							date = sday + "/" + smonth + "/" + syear;
							cout << endl;
							cout << "Date joined: " << date << endl;
							exitDate = true;
						}
						else if (day > 0 && day <= 28) {
							cout << "It is Valid" << endl;
							sday = to_string(day);
							smonth = to_string(month);
							syear = to_string(year);
							date = sday + "/" + smonth + "/" + syear;
							cout << endl;
							cout << "Date joined: " << date << endl;
							exitDate = true;
						}
						else {
							cout << "Invalid date, please enter again." << endl;
						}

					}
					else {
						cout << "Invalid date, please enter again." << endl;
					}

				}

			}


			tutor_info[row].dateJoin = date;
			cout << endl;
			cout << "Working Hour: ";

			// validate working hour integer
			int verihour;
			while (!(cin >> verihour)) {
				cout << "Numbers only: ";
				cin.clear();
				cin.ignore(123, '\n');
			}

			tutor_info[row].monthlyHour = verihour;

			// validate phone number length
			string veriphone;
			cout << "Phone number: ";
			cin >> veriphone;

			while (veriphone.length() < 10)
			{
				cout << "Invalid phone number, enter again: ";
				cin.clear();
				cin.ignore(123, '\n');
				cin >> veriphone;
			}

			tutor_info[row].tutorPhone = veriphone;

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