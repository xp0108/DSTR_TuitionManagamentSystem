#pragma once
#include "DataStruct.h"
#include "AdditionalFunction.h"

using namespace std;

void UpdateTutorPhono(Tutor* tutorLL) {
	string updateTutorPhone;
	cout << endl;
	loopSymbol(100, "-");
	cout << endl;
	cout << "Update Tutor Phone Number" << endl;
	loopSymbol(100, "-");

	cout << endl << endl;

	updateTutorPhone = tutorLL->tutorAddress;
	cout << "Enter " << tutorLL->tutorName << "'s Phone Number: ";
	cin >> updateTutorPhone;
	tutorLL->tutorPhone = updateTutorPhone;

	cout << endl << "Tutor " << tutorLL->tutorName << " Update Successfully !!!";
}

void UpdateTutorAddress(Tutor* tutorLL) {
	string updateTutorAddress;
	cout << endl;
	loopSymbol(100, "-");
	cout << endl;
	cout << "Update Tutor Address" << endl;
	loopSymbol(100, "-");

	cout << endl << endl;


	updateTutorAddress = tutorLL->tutorAddress;
	cout << "Enter " << tutorLL->tutorName << "'s Address: ";
	cin >> updateTutorAddress;
	tutorLL->tutorAddress = updateTutorAddress;

	cout << endl << "Tutor " << tutorLL->tutorName << " Update Successfully !!!";
}

void UpdateTutorRating(Tutor* tutorLL) {
	double updateTutorRating;
	cout << endl;
	loopSymbol(100, "-");
	cout << endl;
	cout << "Update Tutor Rating" << endl;
	loopSymbol(100, "-");

	cout << endl << endl;

	updateTutorRating = tutorLL->rating;
	cout << "Enter " << tutorLL->tutorName << "'s Address: ";
	cin >> updateTutorRating;
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
	string address;
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
			//if the tutorID is found and tuitionName is KL
			if (tutorLL->tutorID == inputTutorID) {
				cout << "Tutor Name: " << tutorLL->tutorName << endl;
				exist = true;

				//Update Menu - address or phone
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