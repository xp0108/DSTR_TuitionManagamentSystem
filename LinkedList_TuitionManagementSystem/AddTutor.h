#pragma once
#include "DataStruct.h"

bool isEmpty(Tutor* head) {
	if (head == NULL) {
		return true;
	}
	else {
		return false;
	}
}

Tutor* AddNode(int id, string name, string datejoin, double work, double rate, string phone, string address,
	string tname, string subname, double rating, double paycheck) {
	Tutor* newNode = new Tutor;

	newNode->tutorID = id;
	newNode->tutorName = name;
	newNode->dateJoin = datejoin;
	newNode->dateTerminated = "N/A";
	newNode->workingHour = work;
	newNode->hourlyRate = rate;
	newNode->tutorPhone = phone;
	newNode->tutorAddress = address;
	newNode->tutionName = tname;
	newNode->subjectName = subname;
	newNode->rating = rating;
	newNode->payCheck = paycheck;
	newNode->nextAddress = NULL;
	return newNode;
}

void AddTutorToTheEnd(Tutor* newNode) { //i refer to the proposal de algo
	// check whether the list is empty
	if (isEmpty(head)) {
		head = newNode; //if yes, then add newnode as head
	}
	else { // list is not empty
		Tutor* current = head;

		//find the last node in the list
		while (current->nextAddress != NULL) {
			current = current->nextAddress;
		}
		current->nextAddress = newNode; //assign the newnode to the last
	}

	::sizeOfLinkedList++; //:: global variable, use to track the linkedlist size (debug)
}


// void Display(Tutor* current) {
void Display() { // no need pass the pointer, store in memory, jst direct refer
	Tutor* current = head;
	if (isEmpty(current)) {
		cout << "The list is empty." << endl;
	}
	else {
		cout << "Content of the list: " << endl;
		while (current != NULL) {
			cout << "Tutor ID: " << current->tutorID << endl;
			cout << "Tutor name: " << current->tutorName << endl;
			cout << "Date joined: " << current->dateJoin << endl;
			cout << "Date terminated: " << current->dateTerminated << endl;
			cout << "Working Hour: " << current->workingHour << endl;
			cout << "Hourly rate: " << current->hourlyRate << endl;
			cout << "Phone: " << current->tutorPhone << endl;
			cout << "Address: " << current->tutorAddress << endl;
			cout << "Tuition Name: " << current->tutionName << endl;
			cout << "Subject Name: " << current->subjectName << endl;
			cout << "Rating: " << current->rating << endl;
			cout << "Pay Check: " << current->payCheck << endl;
			current = current->nextAddress;
			cout << endl;
		}
	}
}

void CallAdd() {
	head = NULL; //head var no need define, cuz i make the head as global variable (refer data struct file)

	int id;
	double workh, hrate, payCheck;
	string name, datej, phone, address, tname, sname;

	cout << "Tutor ID: ";
	cin >> id;
	cout << "Tutor name: ";
	cin >> name;
	cout << "Date joined: ";
	cin >> datej;
	cout << "Working Hour: ";
	cin >> workh;	
	cout << "Hourly rate: ";
	cin >> hrate;
	cout << "Tutor phone: ";
	cin >> phone;
	cout << "Tutor address: ";
	cin >> address;
	cout << "Tuition name: ";
	cin >> tname;
	cout << "Subject name: ";
	cin >> sname;
	cout << "Pay Check: ";
	cin >> payCheck;
	cout << endl;

	Tutor* newNode = AddNode(id, name, datej, workh, hrate, phone, address, tname, sname, 0, payCheck); //create Node
	AddTutorToTheEnd(newNode);	//add the created node into LL
	Display();

	//debug
	cout << "No of tutor in LL: " << ::sizeOfLinkedList << endl;
}