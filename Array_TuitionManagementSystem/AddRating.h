#pragma once
#include "DataStruc.h"
#include "CalculateOverallPerformance.h"

using namespace std;

void PushRating(Tutor rating_info[], int id, double ratevalue) {
	rating_info[id].ratingVector.push_back(ratevalue);
	CalculateOverallPerformance(rating_info, id);
}