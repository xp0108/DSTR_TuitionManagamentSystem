#pragma once
#include <iostream>
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
			cin >> dateJ;
			cout << "Working Hour: ";
			while (!(cin >> work)) {
				cout << "Invalid input. Please enter again: ";
				cin.clear();
				cin.ignore(123, '\n');
			}
			cout << "Tutor phone: ";
			cin >> phone;
			cout << "Tutor address: ";
			cin >> addr;
			cout << "Tuition name: ";
			
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
					tname = "KL";
					exitFunction = false;
					break;
				case 2:
					tname = "JOHOR";
					exitFunction = false;
					break;
				default:
					cout << "Invalid Option! Please Try Again";
				}
			}
			cout << endl;
			cout << "Subject name: ";
			cin >> sname;
			cout << "Pay Check: ";
			cin >> check;
			cout << endl;

			if (sname == "English" || sname == "BM" || sname == "Mandarin") {
				rate = 40;
			}
			else if (sname == "Science" || sname == "Math" || sname == "AddMath" || sname == "Computing") {
				rate = 80;
			}
			else if (sname == "History" || sname == "Economics" || sname == "Accounting") {
				rate = 60;
			}
			else {
				rate = 0;
			}

			Tutor* newNode = AddNode(id, name, dateJ, work, rate, phone, addr, tname, sname, 0, check);
			AppendNode(newNode);
		}

	}
	else {
		cout << "Tutor list is empty." << endl;
	}
}