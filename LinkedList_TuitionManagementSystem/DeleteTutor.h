#pragma once
#include "DataStruct.h"
#include "AdditionalFunction.h"

using namespace std;

void UpdateTutorTerminateDate(Tutor* tutorLL) {
	string updateTerminateDate;
	cout << endl;
	loopSymbol(100, "-");
	cout << endl;
	cout << "Update Tutor Termination Date" << endl;
	loopSymbol(100, "-");

	cout << endl << endl;

	updateTerminateDate = tutorLL->tutorAddress;
	cout << "Enter " << tutorLL->tutorName << "'s Phone Number: ";
	cin >> updateTerminateDate;
	tutorLL->tutorPhone = updateTerminateDate;

	cout << endl << "Tutor " << tutorLL->tutorName << "'s Termiantion Date Update Successfully !!!";
}


void DeleteTutor() {
	system("cls");
	loopSymbol(120);
	cout << endl << "Delete Tutor Record" << endl;
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
			//if the tutorID is found and tuitionName is KL
			if (tutorLL->tutorID == inputTutorID) {
				cout << "Tutor Name: " << tutorLL->tutorName << endl;
				exist = true;
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