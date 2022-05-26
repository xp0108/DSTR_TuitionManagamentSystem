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

	updateTerminateDate = tutorLL->tutorAddress;
	cout << "Enter " << tutorLL->tutorName << "'s Termiantion Date: ";
	cin >> updateTerminateDate;
	tutorLL->tutorPhone = updateTerminateDate;

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
	cout << endl << "DIFF" << diffDate << endl;
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

				UpdateTutorTerminateDate(tutorLL);
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