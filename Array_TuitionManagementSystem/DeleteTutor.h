#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <string> 
#include <ctime>    
#include <sstream>
#include "AdditionalFeature.h"
#include "DataStruc.h"
using namespace std;


void UpdateTutorTerminateDate(Tutor updateTutorAdd[], int tutorArr) {
	string updateTerminateDate;
	cout << endl;
	loopSymbol(100, "-");
	cout << endl;
	cout << "Update Tutor Termination Date" << endl;
	loopSymbol(100, "-");

	cout << endl << endl;

	cout << "Enter " << updateTutorAdd[tutorArr].tutorName << "'s Termination Date: ";
	cin >> updateTerminateDate;

	updateTutorAdd[tutorArr].dateTerminated = updateTerminateDate;

	cout << endl << "Tutor " << updateTutorAdd[tutorArr].tutorName << "'s Termiantion Date Update Successfully !!!";
}

void CheckDeleteTutor(Tutor tutorArray[], int tutorTDIndex) {
	//Get today date - https://www.softwaretestinghelp.com/date-and-time-in-cpp/
	time_t getTodayTime = time(0);
	tm* local_time = localtime(&getTodayTime);

	int todayYear = 1900 + local_time->tm_year;
	int todayMonth = 1 + local_time->tm_mon;
	int todayDay = local_time->tm_mday;

	//get terminated date and split
	string terminatedDate = tutorArray[tutorTDIndex].dateTerminated;

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
		for (i = tutorTDIndex; i <= arrSize; i++)
		{
			tutorArray[i] = tutorArray[i + 1];
			arrSize--;
		}

	}
	else
	{
		cout << "Not reach the due yet" << endl;
	}

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

	UpdateTutorTerminateDate(tutorArray, checkTutorID);
	cout << endl << endl;
	CheckDeleteTutor(tutorArray, checkTutorID);

}