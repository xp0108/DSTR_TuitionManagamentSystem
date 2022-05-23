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

//void AddNode(Tutor*& head, Tutor*& last, int id, string name, string datejoin,
//    double rate, string phone, string address, int tcode, int scode) {
Tutor* AddNode(int id, string name, string datejoin, double rate, string phone, string address,
	string tname, string subname, double rating, double paycheck) {
	Tutor* newNode = new Tutor;

	// newNode->tutorID = id;
	// newNode->tutorName = name;
	// newNode->dateJoin = datejoin;
	// newNode->dateTerminated = "N/A";
	// newNode->hourlyRate = rate;
	// newNode->tutorPhone = phone;
	// newNode->tutorAddress = address;
	// newNode->tutionCode = tcode;
	// newNode->subjectCode = scode;
	// head = newNode;
	// last = newNode;
	// cout << endl;

	newNode->tutorID = id;
	newNode->tutorName = name;
	newNode->dateJoin = datejoin;
	newNode->dateTerminated = "N/A";
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

// void AddTutor(Tutor*& head, Tutor*& last, int id, string name, string datejoin,
//     double rate, string phone, string address, int tcode, int scode) {
//     if (isEmpty(head)) {
//         AddNode(head, last, id, name, datejoin, rate, phone, address, tcode, scode);
//     }
//     else {
//         Tutor* newNode = new Tutor;

//         newNode->tutorID = id;
//         newNode->tutorName = name;
//         newNode->dateJoin = datejoin;
//         newNode->dateTerminated = "N/A";
//         newNode->hourlyRate = rate;
//         newNode->tutorPhone = phone;
//         newNode->tutorAddress = address;
//         newNode->tutionCode = tcode;
//         newNode->subjectCode = scode;
//         newNode->next = NULL;
//         newNode->next = newNode;
//         last = newNode;
//         cout << endl;
//     }
// }

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
	// Tutor* head = NULL;
	// Tutor* last = NULL;
	head = NULL; //head var no need define, cuz i make the head as global variable (refer data struct file)

	int id;
	double hrate, payCheck;
	string name, datej, phone, address, tname, sname;

	cout << "Tutor ID: ";
	cin >> id;
	cout << "Tutor name: ";
	cin >> name;
	cout << "Date joined: ";
	cin >> datej;
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

	// AddTutor(head, last, id, name, datej, rate, phone, address, tcode, scode);
	// Display(head);

	Tutor* newNode = AddNode(id, name, datej, hrate, phone, address, tname, sname, 0, payCheck); //create Node
	AddTutorToTheEnd(newNode);	//add the created node into LL
	Display();

	//debug
	cout << "No of tutor in LL: " << ::sizeOfLinkedList << endl;
}