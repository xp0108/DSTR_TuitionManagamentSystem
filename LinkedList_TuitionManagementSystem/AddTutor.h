#pragma once
#include <iostream>
#include <string>
#include "DataStruct.h"
#include "CheckTutorID.h"

Tutor* AddNode(int id, string name, string dateJ, double work, double rate,
	string phone, string addr, string tname, string sname, double ratings, double check) {

	// creating new node
	Tutor* newNode = new Tutor();

	// inserting the data
	newNode->tutorID = id;
	newNode->tutorName = name;
	newNode->dateJoin = dateJ;
	newNode->dateTerminated = "N/A";
	newNode->workingHour = work;
	newNode->hourlyRate = rate;
	newNode->tutorPhone = phone;
	newNode->tutorAddress = addr;
	newNode->tutionName = tname;
	newNode->subjectName = sname;
	newNode->rating = ratings;
	newNode->payCheck = check;

	// point to next node
	newNode->nextAddress = NULL;

	// return the values
	return newNode;

}

void AppendNode(Tutor* newNode) {
	Tutor* last = head;

	// if head is null, make the new node as head
	if (head == NULL) {
		head = newNode;
		return;
	}
	else {
		// while the address is not empty, move to next address until empty is found
		while (last->nextAddress != NULL) {
			last = last->nextAddress;
		}

		// make the new node as next
		last->nextAddress = newNode;
		return;
	}
}

void AddTutor() {
	int id;
	string name, dateJ, phone, addr, tname, sname;
	double work, rate, check;
	int day, month, year;
	string date, sday, smonth, syear;
	Tutor* temp = head;
	bool exist = false;

	// to validate the input is in integers
	cout << "Tutor ID: ";
	while (!(cin >> id)) {
		cout << "Invalid input. Please enter again: ";
		cin.clear();
		cin.ignore(123, '\n');
	}

	// clear the screen
	system("cls");

	// if the current address has values
	if (temp != NULL) {
		while (temp != NULL) {
			// if the tutor id exists
			if (temp->tutorID == id) {
				exist = true;
				cout << "Tutor already exists.";
				break;
			}
			// move to next address			
			temp = temp->nextAddress;
		}

		// if the tutor id not exists
		if (exist == false) {
			cout << "Enter tutor's details." << endl << endl;
			cout << "Tutor name: ";
			cin >> name;
			cout << "Date joined: ";

			// validate date input
			bool exitDate = false;

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
			dateJ = date;
			cout << endl;

			cout << "Working Hour: ";
			while (!(cin >> work)) {
				cout << "Invalid Working Hour. Please enter again: ";
				cin.clear();
				cin.ignore(123, '\n');
			}

			// validate phone number length
			string veriphone;
			cout << "Tutor phone: ";
			cin >> veriphone;

			while (veriphone.length() < 10)
			{
				cout << "Invalid phone number, enter again: ";
				cin.clear();
				cin.ignore(123, '\n');
				cin >> veriphone;
			}

			phone = veriphone;

			cout << "Tutor address: ";
			cin >> addr;
			cout << endl;

			//Menu for Tuition Center
			cout << "Tuition center: ";

			bool exitTutorCenterFunction = true;
			while (exitTutorCenterFunction != false)
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
					tname = "KL";
					exitTutorCenterFunction = false;
					break;
				case 2:
					tname = "JOHOR";
					exitTutorCenterFunction = false;
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
					sname = "English";
					rate = 40;
					exitSubjectName = false;
					break;
				case 2:
					sname = "BM";
					rate = 40;
					exitSubjectName = false;
					break;
				case 3:
					sname = "Mandarin";
					rate = 40;
					exitSubjectName = false;
					break;
				case 4:
					sname = "Science";
					rate = 80;
					exitSubjectName = false;
					break;
				case 5:
					sname = "Math";
					rate = 80;
					exitSubjectName = false;
					break;
				case 6:
					sname = "AddMath";
					rate = 80;
					exitSubjectName = false;
					break;
				case 7:
					sname = "Computing";
					rate = 80;
					exitSubjectName = false;
					break;
				case 8:
					sname = "History";
					rate = 60;
					exitSubjectName = false;
					break;
				case 9:
					sname = "Economics";
					rate = 60;
					exitSubjectName = false;
					break;
				case 10:
					sname = "Accounting";
					rate = 60;
					exitSubjectName = false;
					break;
				default:
					cout << "Invalid Option! Please Try Again";
				}
			}
			cout << endl;
			check = work * rate;
			cout << endl;

			Tutor* newNode = AddNode(id, name, dateJ, work, rate, phone, addr, tname, sname, 0, check);
			AppendNode(newNode);
		}

	}
	else {
		cout << "Tutor list is empty." << endl;
	}
}