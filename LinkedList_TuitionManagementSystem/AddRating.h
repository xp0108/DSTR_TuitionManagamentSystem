#pragma once
#include "AddTutor.h"

using namespace std;

void KLAddRating() {
	Tutor* temp = head;
	int ID;
	double ratingval, oldrating, newrating;
	bool exist = false;

	//check if the user input is integer
	cout << "Tutor ID: ";
	while (!(cin >> ID)) {
		cout << "Invalid input. Please enter again: ";
		cin.clear();
		cin.ignore(123, '\n');
	}

	system("cls");

	//if there is tutor data	
	if (temp != NULL) {
		//while tutor data is not empty	
		while (temp != NULL) {
			//if the tutorID is found and tuitionName is KL
			if (temp->tutorID == ID && temp->tutionName == "KL") {
				cout << "Tutor ID found. " << endl << endl;
				oldrating = temp->rating;
				cout << "Enter new rating: ";
				cin >> ratingval;
				newrating = (oldrating + ratingval) / 2;
				temp->rating = newrating;
				
				exist = true;
			}
			//push to next address			
			temp = temp->nextAddress;
		}

		//if there is no tutor data match the user input
		if (exist == false) {
			cout << "Tutor ID not found." << endl;
		}

	}

	//if there is no tutor data
	else {
		cout << "Tutor list is empty." << endl;
	}
}