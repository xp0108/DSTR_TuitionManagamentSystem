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

	int tutorID = klLinearSearchTutor(rating_info, id);
	if (tutorID == -1) {
		system("cls");
		cout << endl;
		cout << "Tutor ID not found";
	}
	else {
		cout << "Enter rating: ";
		cin >> rateValue;
		PushRating(rating_info, tutorID, rateValue);
	}
}

void AddRatingJohor(Tutor rating_info[]) {
	double rateValue;
	int id;

	cout << "Enter tutor ID: ";
	cin >> id;

	int tutorID = JohorLinearSearchTutor(rating_info, id);
	if (tutorID == -1) {
		system("cls");
		cout << endl;
		cout << "Tutor ID not found";
	}
	else {
		cout << "Enter rating: ";
		cin >> rateValue;
		PushRating(rating_info, tutorID, rateValue);
	}
}