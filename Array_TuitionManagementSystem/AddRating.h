#pragma once
#include "DataStruc.h"

using namespace std;

void AddRating(Tutor rating_info[], int id, double rating) {
	rating_info[id].rating = rating;
}

void PushRating(Tutor rating_info[], int id, double ratevalue) {
	rating_info[id].rating.push_back(ratevalue);
}