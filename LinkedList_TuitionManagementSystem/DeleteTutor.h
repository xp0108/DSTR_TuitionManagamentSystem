#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <string> 
#include <ctime>    
#include <sstream>
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

	updateTerminateDate = tutorLL->dateTerminated;
	cout << "Enter " << tutorLL->tutorName << "'s Termiantion Date: ";
	cin >> updateTerminateDate;
	tutorLL->dateTerminated = updateTerminateDate;

	cout << endl << "Tutor " << tutorLL->tutorName << "'s Termiantion Date Update Successfully !!!";
}

void CheckDeleteTutor(Tutor* selectedTutorID) {
	time_t getTodayTime = time(0);
	tm* local_time = localtime(&getTodayTime);

	int todayYear = 1900 + local_time->tm_year;
	int todayMonth = 1 + local_time->tm_mon;
	int todayDay = local_time->tm_mday;

	//get terminated date and split
	string terminatedDate = selectedTutorID->dateTerminated;
	cout << endl << "Termination Date: " << selectedTutorID->dateTerminated << "\t" << selectedTutorID->tutorName << endl;
	stringstream splitedTerminatedDate(terminatedDate);
	vector<int> outputSplitedTD;
	int i;
	while (splitedTerminatedDate >> i) {
		outputSplitedTD.push_back(i);
		splitedTerminatedDate.ignore(1);
	}

	int dayITD = outputSplitedTD[0];
	int monthITD = outputSplitedTD[1];
	int yearITD = outputSplitedTD[2];

	Date dateTerminated = { dayITD,monthITD,yearITD };
	Date dateToday = { todayDay, todayMonth, todayYear };

	int diffDate = CountDiffDate(dateTerminated, dateToday);

	int arrSize = 100;
	if (diffDate >= 183)
	{

		cout << "Yes Please Delete" << endl;
		//Delete Node

		//if is the selected item is located in the 1st node
		if (head->tutorID == selectedTutorID->tutorID) {
			Tutor* current = head;
			head = head->nextAddress;
			delete current;
		}
		else
		{
			// Delete for not equal to 1st node
			Tutor* current = head->nextAddress; //start from second node to check the keyword
			//need to find out wherethe to delete the keyword is the current or need to move on
			Tutor* previous = head; // standby during deletion
			while (current != NULL)
			{
				if (current->tutorID == selectedTutorID->tutorID)
				{
					// delete the current
					previous->nextAddress = current->nextAddress;
					delete current;
					return;
				}
				previous = current;
				current = current->nextAddress;
			}
		}

	}
	else
	{
		cout << "Not reach the due yet" << endl;
	}

}

Tutor* LinearSearchAndUpdateTutor(Tutor* inputTutorID) { // no need pass the pointer, store in memory, jst direct refer
	int ID;
	bool exist = false;

	//check if the user input is integer
	cout << "Enter the tutor ID you want to search: ";
	while (!(cin >> ID)) {
		cout << "Invalid input. Please enter again: ";
		cin.clear();
		cin.ignore(123, '\n');
	}

	//if there is tutor data
	if (inputTutorID != NULL) {
		//while tutor data is not empty
		while (inputTutorID != NULL) {
			//if the tutorID is found
			if (inputTutorID->tutorID == ID) {
				exist = true;
				UpdateTutorTerminateDate(inputTutorID);
				cout << "TutorID found." << inputTutorID->tutorName << "\t" << inputTutorID->dateTerminated << endl;
				return inputTutorID;
			}
			//push to next address
			inputTutorID = inputTutorID->nextAddress;
		}
		//if there is no tutor data match the user input
		if (exist == false) {
			cout << "TutorID not found." << endl;
			return 0;
		}
	}
	//if there is no tutor data
	else {
		cout << "Tutor list is empty." << endl;
	}
}

void DeleteTutor() {
	system("cls");
	loopSymbol(120);
	cout << endl << "Delete Tutor Record" << endl;
	loopSymbol(120);
	cout << endl;

	Tutor* tutorLL = head; //Delete Function = previous
	Tutor* returnTutorNode = nullptr;
	returnTutorNode = LinearSearchAndUpdateTutor(tutorLL);
	CheckDeleteTutor(returnTutorNode);
}