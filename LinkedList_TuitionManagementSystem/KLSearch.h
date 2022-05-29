#pragma once
#include "DataStruct.h"
#include "AddTutor.h"

//search tutor in tutor list with tutorID
void KLSearchTutorByTutorID() { // no need pass the pointer, store in memory, jst direct refer
	Tutor* temp = head;
	int ID;
	bool exist = false;

	//check if the user input is integer
	cout << "Enter the tutor ID you want to search: ";
	while (!(cin >> ID)) {
		cout << "Invalid input. Please enter again: ";
		cin.clear();
		cin.ignore(123, '\n');
	}
	
	//clear the terminal
	system("cls");
	//if there is tutor data	
	if (temp != NULL) {
		//while tutor data is not empty	
		while (temp != NULL) {
			//if the tutorID is found and tuitionName is KL
			if (temp->tutorID == ID && temp->tutionName == "KL") {
				cout << "TutorID found: " << endl << endl;
				cout << "Tutor ID: " << temp->tutorID << endl;
				cout << "Tutor name: " << temp->tutorName << endl;
				cout << "Date joined: " << temp->dateJoin << endl;
				cout << "Date terminated: " << temp->dateTerminated << endl;
				cout << "Working Hour: " << temp->workingHour << endl;
				cout << "Hourly rate: " << temp->hourlyRate << endl;
				cout << "Phone: " << temp->tutorPhone << endl;
				cout << "Address: " << temp->tutorAddress << endl;
				cout << "Tuition Name: " << temp->tutionName << endl;
				cout << "Subject Name: " << temp->subjectName << endl;
				cout << "Rating: " << temp->rating << endl;
				cout << "Pay Check: " << temp->payCheck << endl;
				exist = true;
			}
			//push to next address			
			temp = temp->nextAddress;
		}
		//if there is no tutor data match the user input
		if (exist == false) {
			cout << "TutorID not found." << endl;
		}

	}
	//if there is no tutor data
	else {
		cout << "Tutor list is empty." << endl;
	}
}

//search multiple tutor in tutor list with rating
void KLSearchTutorByRating() {
	Tutor* temp = head;
	int rating;
	bool exist = false;
	
	cout << "Enter the rating you want to search: ";
	//check if the user input is a integer and between 0 - 5
	while (!(cin >> rating) || rating < 0 || rating > 5) {
		cout << "Error: insert Tutor Rating :";
		cin.clear();
		cin.ignore(123, '\n');
	}

	//clear the terminal
	system("cls");
	//if there is tutor data
	if (temp != NULL) {
		//while tutor data is not empty
		while (temp != NULL) {
			//if the tutor rating is found and tuitionName is KL
			if (temp->rating == rating && temp->tutionName == "KL") {
				cout << "TutorID found: " << endl << endl;
				cout << "Tutor ID: " << temp->tutorID << endl;
				cout << "Tutor name: " << temp->tutorName << endl;
				cout << "Date joined: " << temp->dateJoin << endl;
				cout << "Date terminated: " << temp->dateTerminated << endl;
				cout << "Working Hour: " << temp->workingHour << endl;
				cout << "Hourly rate: " << temp->hourlyRate << endl;
				cout << "Phone: " << temp->tutorPhone << endl;
				cout << "Address: " << temp->tutorAddress << endl;
				cout << "Tuition Name: " << temp->tutionName << endl;
				cout << "Subject Name: " << temp->subjectName << endl;
				cout << "Rating: " << temp->rating << endl;
				cout << "Pay Check: " << temp->payCheck << endl;
				exist = true;
			}
			//push to next address	
			temp = temp->nextAddress;
		}
		//if there is no tutor data match the user input
		if (exist == false) {
			cout << "Tutor rating not found." << endl;
		}
	}
	//if there is no tutor data
	else {
		cout << "Tutor list is empty." << endl;
	}
}