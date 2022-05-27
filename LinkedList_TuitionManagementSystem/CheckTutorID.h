#pragma once
#include <iostream>
#include "DataStruct.h"

int CheckTutorID() {
	Tutor* temp = head;
	int id;
	bool exist = false;

	//check if the user input is integer
	cout << "Validate tutor ID: ";
	while (!(cin >> id)) {
		cout << "Invalid input. Please enter again: ";
		cin.clear();
		cin.ignore(123, '\n');
	}

	//if there is tutor data	
	if (temp != NULL) {
		//while tutor data is not empty	
		while (temp != NULL) {
			//if the tutorID is found
			if (temp->tutorID == id) {
				exist = true;
				return 0;
			}
			//push to next address			
			temp = temp->nextAddress;
		}
		//if there is no tutor data match the user input
		if (exist == false) {
			return -1;
		}

	}
	//if there is no tutor data
	else {
		cout << "Tutor list is empty." << endl;
	}
	
};