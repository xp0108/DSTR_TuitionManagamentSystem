#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <string> 
#include <ctime>    
#include <sstream>
#include <string>
#include "DataStruct.h"
#include "AdditionalFunction.h"

using namespace std;

bool isNumber(const string& s)
{
	for (char const& ch : s) {
		if (isdigit(ch) == 0)
			return false;
	}
	return true;
}

void CheckDeleteTutor(Tutor* selectedTutorID) {
	time_t getTodayTime = time(0);
	tm* local_time = localtime(&getTodayTime);

	int todayYear = 1900 + local_time->tm_year;
	int todayMonth = 1 + local_time->tm_mon;
	int todayDay = local_time->tm_mday;

	//get terminated date and split
	string terminatedDate = selectedTutorID->dateTerminated;

	//Validate termination date, is equal to date. 
	bool isInt = isNumber(terminatedDate);

	if (isInt == 1) {
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

	cout << "PLEASE UPDATE TERMINATION DATE !!!!";
}

void UpdateTutorTerminateDate(Tutor* tutorLL) {
	string updateTerminateDate;
	int day, month, year;
	string sday, smonth, syear;
	cout << endl;
	loopSymbol(100, "-");
	cout << endl;
	cout << "Update Tutor Termination Date" << endl;
	loopSymbol(100, "-");

	cout << endl << endl;

	updateTerminateDate = tutorLL->dateTerminated;
	cout << "Enter " << tutorLL->tutorName << "'s Termiantion Date: " << endl;


	//Validation for Termination Date
	cout << "Day (1-31): ";
	while ((!(cin >> day)) || day < 1 || day > 31) {
		cout << "Numbers 1-31 only: ";
		cin.clear();
		cin.ignore(123, '\n');
	}

	cout << endl << endl;

	cout << "Month (1-12): ";
	while ((!(cin >> month)) || month < 1 || month > 12) {
		cout << "Numbers 1-12 only: ";
		cin.clear();
		cin.ignore(123, '\n');
	}

	cout << endl << endl;

	cout << "Year (4 digits): ";
	while ((!(cin >> year)) || year < 1000 || year > 2100) {
		cout << "Invalid year, input again: ";
		cin.clear();
		cin.ignore(123, '\n');
	}

	cout << endl << endl;

	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 0 && day <= 31) {
		cout << "It is valid" << endl;
		sday = to_string(day);
		smonth = to_string(month);
		syear = to_string(year);
		updateTerminateDate = sday + "/" + smonth + "/" + syear;
		cout << endl;
		cout << "Termination Date: " << updateTerminateDate << endl;


	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 0 && day <= 30) {
		cout << "It is Valid" << endl;
		sday = to_string(day);
		smonth = to_string(month);
		syear = to_string(year);
		updateTerminateDate = sday + "/" + smonth + "/" + syear;
		cout << endl;
		cout << "Termination Date: " << updateTerminateDate << endl;

	}
	else if (month == 2) {
		if ((year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) && day > 0 && day <= 29) {
			cout << "It is Valid" << endl;
			sday = to_string(day);
			smonth = to_string(month);
			syear = to_string(year);

			//Combine the input day, month, year into dd/mm/yyyy format
			updateTerminateDate = sday + "/" + smonth + "/" + syear;
			cout << endl;
			cout << "Termination Date: " << updateTerminateDate << endl;

		}
		else if (day > 0 && day <= 28) {
			cout << "It is Valid" << endl;
			sday = to_string(day);
			smonth = to_string(month);
			syear = to_string(year);
			updateTerminateDate = sday + "/" + smonth + "/" + syear;
			cout << endl;
			cout << "Termination Date: " << updateTerminateDate << endl;

		}
		else {
			cout << "Invalid date, please enter again." << endl;
		}

	}
	else {
		cout << "Invalid date, please enter again." << endl;
	}

	tutorLL->dateTerminated = updateTerminateDate;

	cout << endl << "Tutor " << tutorLL->tutorName << "'s Termiantion Date Update Successfully !!!";

	CheckDeleteTutor(tutorLL);
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
				//UpdateTutorTerminateDate(inputTutorID);
				cout << "TutorID Name: " << inputTutorID->tutorName << endl;
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

	while (returnTutorNode == 0)
	{
		cin.clear();
		returnTutorNode = LinearSearchAndUpdateTutor(tutorLL);
	}
	//Update Menu - address or phone
	bool exitFunction = true;
	while (exitFunction != false)
	{
		int updateChoice;
		cout << endl << endl;
		cout << " ** DELETE MENU **" << endl;
		cout << "1. Update Termination Date" << endl;
		cout << "2. Check Termination Date (>6months)" << endl;
		cout << "3. Exit Update Function" << endl;
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
			UpdateTutorTerminateDate(tutorLL);
			//CheckDeleteTutor(returnTutorNode);
			exitFunction = false;
			break;
		case 2:
			CheckDeleteTutor(returnTutorNode);
			exitFunction = false;
			break;
		case 3:
			exitFunction = false;
			break;
		default:
			cout << "Invalid Option! Please Try Again";
		}
	}
}