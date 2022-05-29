#pragma once
#include "DataStruc.h"
#include "CalculateOverallPerformance.h"
#include "KLSearch.h"
#include "JohorSearch.h"
#include "HRSearch.h"

using namespace std;

void PushRating(Tutor rating_info[], int id, double ratevalue) {
	rating_info[id].ratingVector.push_back(ratevalue);
	CalculateOverallPerformance(rating_info, id);
}

void AddRatingKL(Tutor rating_info[]) {
	double rateValue;
	int id;

	cout << "Enter tutor ID: ";
	cin >> id;

	// check existance of tutor id in kl branch
	int tutorID = klLinearSearchTutor(rating_info, id);
	if (tutorID == -1) {
		system("cls");
		cout << endl;
		cout << "Tutor ID not found";
	}
	// if the tutor id exists
	else {
		cout << "Enter rating: ";

		//check if the user input is a integer and between 1 - 5
		while (!(cin >> rateValue) || rateValue < 1 || rateValue > 5) {
			cout << "Please insert number between 1-5 :";
			cin.clear();
			cin.ignore(123, '\n');
		}

		PushRating(rating_info, tutorID, rateValue);
	}
}

void AddRatingJohor(Tutor rating_info[]) {
	double rateValue;
	int id;

	cout << "Enter tutor ID: ";
	cin >> id;

	// check the existance of tutor id in johor branch
	int tutorID = JohorLinearSearchTutor(rating_info, id);
	if (tutorID == -1) {
		system("cls");
		cout << endl;
		cout << "Tutor ID not found";
	}

	// if the tutor exists
	else {
		cout << "Enter rating: ";

		//check if the user input is a integer and between 1 - 5
		while (!(cin >> rateValue) || rateValue < 1 || rateValue > 5) {
			cout << "Please insert number between 1-5 :";
			cin.clear();
			cin.ignore(123, '\n');
		}

		PushRating(rating_info, tutorID, rateValue);
	}
}