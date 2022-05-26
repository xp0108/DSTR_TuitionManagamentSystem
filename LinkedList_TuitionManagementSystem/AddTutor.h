#pragma once
#include <iostream>
#include "DataStruct.h"
#include "CheckTutorID.h"

Tutor* AddNode(int id, string name, string dateJ, double work, double rate,
	string phone, string addr, string tname, string sname, double ratings, double check) {

	Tutor* newNode = new Tutor();

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

	newNode->nextAddress = NULL;
	return newNode;

}

void AppendNode(Tutor* newNode) {
	Tutor* last = head;

	if (head == NULL) {
		head = newNode;
		return;
	}
	else {
		while (last->nextAddress != NULL) {
			last = last->nextAddress;
		}

		last->nextAddress = newNode;
		return;
	}
}

void AddTutor() {
	int id;
	string name, dateJ, phone, addr, tname, sname;
	double work, rate, ratings, check;

	Tutor* temp = head;
	bool exist = false;

	cout << "Tutor ID: ";
	while (!(cin >> id)) {
		cout << "Invalid input. Please enter again: ";
		cin.clear();
		cin.ignore(123, '\n');
	}
		
	system("cls");
		
	if (temp != NULL) {
		while (temp != NULL) {
			if (temp->tutorID == id) {
				exist = true;
				cout << "Tutor already exists.";
				break;
			}
			//push to next address			
			temp = temp->nextAddress;
		}

		if (exist == false) {
			cout << "Enter tutor's details." << endl << endl;
			cout << "Tutor name: ";
			cin >> name;
			cout << "Date joined: ";
			cin >> dateJ;
			cout << "Working Hour: ";
			cin >> work;
			cout << "Hourly rate: ";
			cin >> rate;
			cout << "Tutor phone: ";
			cin >> phone;
			cout << "Tutor address: ";
			cin >> addr;
			cout << "Tuition name: ";
			cin >> tname;
			cout << "Subject name: ";
			cin >> sname;
			cout << "Rating: ";
			cin >> ratings;
			cout << "Pay Check: ";
			cin >> check;
			cout << endl;

			Tutor* newNode = AddNode(id, name, dateJ, work, rate, phone, addr, tname, sname, ratings, check);
			AppendNode(newNode);
		}

	}
	else {
		cout << "Tutor list is empty." << endl;
	}
	/*
	if(exist = false) {
		cout << "Tutor name: ";
		cin >> name;
		cout << "Date joined: ";
		cin >> dateJ;
		cout << "Working Hour: ";
		cin >> work;
		cout << "Hourly rate: ";
		cin >> rate;
		cout << "Tutor phone: ";
		cin >> phone;
		cout << "Tutor address: ";
		cin >> addr;
		cout << "Tuition name: ";
		cin >> tname;
		cout << "Subject name: ";
		cin >> sname;
		cout << "Rating: ";
		cin >> ratings;
		cout << "Pay Check: ";
		cin >> check;
		cout << endl;

		Tutor* newNode = AddNode(id, name, dateJ, work, rate, phone, addr, tname, sname, ratings, check);
		AppendNode(newNode);
	}
	else if(exist = true) {
		cout << "Tutor already exists.";
	}
	*/
}