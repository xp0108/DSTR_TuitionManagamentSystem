#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <string> 
#include <ctime>    
#include <sstream>
#include "AdditionalFeature.h"
#include "DataStruc.h"
using namespace std;

bool isNumber(const string& s)
{
	for (char const& ch : s) {
		if (isdigit(ch) == 0)
			return false;
	}
	return true;
}

void UpdateTutorTerminateDate(Tutor updateTutorAdd[], int tutorArr) {
	string updateTerminateDate;
	int day, month, year;
	string sday, smonth, syear;
	cout << endl;
	loopSymbol(100, "-");
	cout << endl;
	cout << "Update Tutor Termination Date" << endl;
	loopSymbol(100, "-");

	cout << endl << endl;

	cout << "Enter " << updateTutorAdd[tutorArr].tutorName << "'s Termination Date: ";
	cout << endl << endl;

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

	updateTutorAdd[tutorArr].dateTerminated = updateTerminateDate;

	cout << endl << "Tutor " << updateTutorAdd[tutorArr].tutorName << "'s Termiantion Date Update Successfully !!!";
}

void CheckDeleteTutor(Tutor tutorArray[], int tutorTDIndex, Tutor* deleteArrayTutor) {
	//Get today date - https://www.softwaretestinghelp.com/date-and-time-in-cpp/

	time_t getTodayTime = time(0);
	tm* local_time = localtime(&getTodayTime);

	int todayYear = 1900 + local_time->tm_year;
	int todayMonth = 1 + local_time->tm_mon;
	int todayDay = local_time->tm_mday;

	
	//get terminated date and split
	string terminatedDate = tutorArray[tutorTDIndex].dateTerminated;

	bool isInt = isNumber(terminatedDate);

	cout << isInt;

	if (isInt == 0) {

		stringstream splitedTerminatedDate(terminatedDate);
		vector<int> outputSplitedTD;
		int i;
		while (splitedTerminatedDate >> i) {
			outputSplitedTD.push_back(i); //deliminater ("/")
			splitedTerminatedDate.ignore(1); //ignore /
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
			for (i = tutorTDIndex; i <= arrSize; i++)
			{
				*deleteArrayTutor = {};
			}

		}
		else
		{
			cout << "Not reach the due yet" << endl;
		}
	}

	cout << "PLEASE UPDATE TERMINATION DATE !!!!";
}

void DeleteTutor(Tutor tutorArray[]) {
	system("cls");
	loopSymbol(120);
	cout << endl << "Delete Tutor Record" << endl;
	loopSymbol(120);
	int tutorID;

	// Check is int input
	cout << endl << "Enter Tutor ID :";
	while (!(cin >> tutorID)) {
		cout << endl << "Integer Only !!" << endl << "Enter Tutor ID Again : ";
		cin.clear();
		cin.ignore(123, '\n');
	}

	//Search Function - check tutor exist & return tutorArray
	int checkTutorID = linearSearchTutor(tutorArray, tutorID);
	while (checkTutorID == -1)
	{
		cout << "Tutor ID not found !!! " << endl << "Enter Tutor ID Again: ";
		cin.clear();
		cin >> tutorID;
		checkTutorID = linearSearchTutor(tutorArray, tutorID);
	}

	cout << "Tutor Name: " << tutorArray[checkTutorID].tutorName << endl;

	//Delete Menu - update termination date & check
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
			UpdateTutorTerminateDate(tutorArray, checkTutorID);
			cout << endl << endl;
			CheckDeleteTutor(tutorArray, checkTutorID, &tutorArray[checkTutorID]);
			exitFunction = false;
			break;
		case 2:
			CheckDeleteTutor(tutorArray, checkTutorID, &tutorArray[checkTutorID]);
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