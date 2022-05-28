#pragma once
#include "DataStruct.h"
#include "AdditionalFunction.h"

using namespace std;

void UpdateTutorPhono(Tutor* tutorLL) {
	// Store input
	string updateTutorPhone;
	cout << endl;
	loopSymbol(100, "-");
	cout << endl;
	cout << "Update Tutor Phone Number" << endl;
	loopSymbol(100, "-");

	cout << endl << endl;

	cout << "Enter " << tutorLL->tutorName << "'s Phone Number: ";
	cin >> updateTutorPhone;
	// replacing existing data with inputted input
	tutorLL->tutorPhone = updateTutorPhone;

	cout << endl << "Tutor " << tutorLL->tutorName << " Update Successfully !!!";
}

void UpdateTutorAddress(Tutor* tutorLL) {
	// Store input
	string updateTutorAddress;
	cout << endl;
	loopSymbol(100, "-");
	cout << endl;
	cout << "Update Tutor Address" << endl;
	loopSymbol(100, "-");

	cout << endl << endl;

	cout << "Enter " << tutorLL->tutorName << "'s Address: ";
	cin >> updateTutorAddress;
	tutorLL->tutorAddress = updateTutorAddress;

	cout << endl << "Tutor " << tutorLL->tutorName << " Update Successfully !!!";
}

void UpdateTutorRating(Tutor* tutorLL) {
	// Store input
	double updateTutorRating;
	cout << endl;
	loopSymbol(100, "-");
	cout << endl;
	cout << "Update Tutor Rating" << endl;
	loopSymbol(100, "-");

	cout << endl << endl;
	double oldrating = tutorLL->rating;
	cout << "Enter " << tutorLL->tutorName << "'s Address: ";
	cin >> updateTutorRating;
	updateTutorRating = (oldrating + updateTutorRating) / 2;
	tutorLL->rating = updateTutorRating;


	cout << endl << "Tutor " << tutorLL->tutorName << " Update Successfully !!!";
}

void UpdateTutor() {
	system("cls");
	loopSymbol(120);
	cout << endl << "Update Tutor Record" << endl;
	loopSymbol(120);

	Tutor* tutorLL = head;
	int inputTutorID;
	bool exist = false;

	// Check is int input
	cout << endl << "Enter Tutor ID :";
	while (!(cin >> inputTutorID)) {
		cout << endl << "Integer Only !!" << endl << "Enter Tutor ID Again : ";
		cin.clear();
		cin.ignore(123, '\n');
	}

	//if there is tutor data	
	if (tutorLL != NULL) {
		//while tutor data is not empty	
		while (tutorLL != NULL) {
			//if the tutorID is found
			if (tutorLL->tutorID == inputTutorID) {
				cout << "Tutor Name: " << tutorLL->tutorName << endl;
				exist = true;

				//Update Menu - address or phone or rating
				bool exitFunction = true;
				while (exitFunction != false)
				{
					int updateChoice;
					cout << endl << endl;
					cout << " ** UPDATE MENU **" << endl;
					cout << "1. Tutor Phone Number" << endl;
					cout << "2. Tutor Address" << endl;
					cout << "3. Tutor Rating" << endl;
					cout << "4. Exit Update Function" << endl;
					cout << "Enter your choice: ";
					// Validate user input
					while (!(cin >> updateChoice)) {
						cout << endl << "Invalid Input !!!" << endl;
						cout << "Enter you choice again: ";
						cin.clear();
						cin.ignore(123, '\n');
					}
					switch (updateChoice)
					{
					case 1:
						UpdateTutorPhono(tutorLL);
						exitFunction = false;
						break;
					case 2:
						UpdateTutorAddress(tutorLL);
						exitFunction = false;
						break;
					case 3:
						UpdateTutorRating(tutorLL);
						exitFunction = false;
						break;
					case 4:
						exitFunction = false;
						break;
					default:
						cout << "Invalid Option! Please Try Again";
					}
				}

			}
			//push to next address			
			tutorLL = tutorLL->nextAddress;
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

