#pragma once
#include "AddTutor.h"

using namespace std;

void KLAddRating() {
	Tutor* temp = head;
	int ID;
	double ratingval, oldrating, newrating;
	bool exist = false;

	// check if the user input is integer
	cout << "Tutor ID: ";
	while (!(cin >> ID)) {
		cout << "Invalid input. Please enter again: ";
		cin.clear();
		cin.ignore(123, '\n');
	}

	system("cls");

	// if there is tutor data	
	if (temp != NULL) {

		// while tutor data is not empty	
		while (temp != NULL) {

			// if the tutorID is found and tuitionName is KL
			if (temp->tutorID == ID && temp->tutionName == "KL") {
				cout << "Tutor ID found. " << endl << endl;

				// save the existing rating into oldrating variable
				oldrating = temp->rating;

				// get user input
				cout << "Enter new rating: ";

				//check if the user input is a integer and between 1 - 5
				while (!(cin >> ratingval) || ratingval < 1 || ratingval > 5) {
					cout << "Please insert number between 1-5 :";
					cin.clear();
					cin.ignore(123, '\n');
				}

				// perform calculation and store the result in newrating
				newrating = (oldrating + ratingval) / 2;

				// replace the existing value with new value
				temp->rating = newrating;
				
				exist = true;
			}
			// move to next address			
			temp = temp->nextAddress;
		}

		// if there is no tutor data match the user input
		if (exist == false) {
			cout << "Tutor ID not found." << endl;
		}

	}

	// if there is no tutor data
	else {
		cout << "Tutor list is empty." << endl;
	}
}

void JohorAddRating() {
	Tutor* temp = head;
	int ID;
	double ratingval, oldrating, newrating;
	bool exist = false;

	// check if the user input is integer
	cout << "Tutor ID: ";
	while (!(cin >> ID)) {
		cout << "Invalid input. Please enter again: ";
		cin.clear();
		cin.ignore(123, '\n');
	}

	system("cls");

	// if there is tutor data	
	if (temp != NULL) {

		// while tutor data is not empty	
		while (temp != NULL) {

			// if the tutorID is found and tuitionName is Johor
			if (temp->tutorID == ID && temp->tutionName == "Johor") {
				cout << "Tutor ID found. " << endl << endl;

				// save the existing rating into oldrating variable
				oldrating = temp->rating;

				// get user input
				cout << "Enter new rating: ";
				
				//check if the user input is a integer and between 1 - 5
				while (!(cin >> ratingval) || ratingval < 1 || ratingval > 5) {
					cout << "Please insert number between 1-5 :";
					cin.clear();
					cin.ignore(123, '\n');
				}

				// perform calculation and store the result in newrating
				newrating = (oldrating + ratingval) / 2;
				
				// replace the existing value with new value
				temp->rating = newrating;

				exist = true;
			}
			// move to next address			
			temp = temp->nextAddress;
		}

		// if there is no tutor data match the user input
		if (exist == false) {
			cout << "Tutor ID not found." << endl;
		}

	}

	// if there is no tutor data
	else {
		cout << "Tutor list is empty." << endl;
	}
}