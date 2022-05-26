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

void CheckDeleteTutor(Tutor* tutorLL) {
	time_t getTodayTime = time(0);
	tm* local_time = localtime(&getTodayTime);

	int todayYear = 1900 + local_time->tm_year;
	int todayMonth = 1 + local_time->tm_mon;
	int todayDay = local_time->tm_mday;

	//get terminated date and split
	string terminatedDate = tutorLL->dateTerminated;
	cout << endl << "Termination Date: " << tutorLL->dateTerminated << "\t" << tutorLL->tutorName << endl;
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
	if (diffDate >= 183) //6 months = 183 Days (https://www.datecalculator.org/months-to-days)
	{
		cout << "Yes Please Delete" << endl;

	}
	else
	{
		cout << "Not reach the due yet" << endl;
	}

}

Tutor* LinearSearchAndUpdateTutor(Tutor* temp) { // no need pass the pointer, store in memory, jst direct refer
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
	if (temp != NULL) {
		//while tutor data is not empty
		while (temp != NULL) {
			//if the tutorID is found
			if (temp->tutorID == ID) {
				exist = true;
				UpdateTutorTerminateDate(temp);
				cout << "TutorID found." << temp->tutorName << "\t" << temp->dateTerminated << endl;
				return temp;
			}
			//push to next address
			temp = temp->nextAddress;
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

	Tutor* tutorLL = head;

	Tutor* returnTutorNode = LinearSearchAndUpdateTutor(tutorLL);
	cout << "TutorID found." << returnTutorNode->tutorName << "\t" << returnTutorNode->dateTerminated << endl;
	CheckDeleteTutor(returnTutorNode);
}