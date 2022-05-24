#pragma once
#include "DataStruc.h"
#include <numeric>
#include <iostream>

void CalculateOverallPerformance(Tutor rating_info[], int id) {
	int size = rating_info[id].ratingVector.size();
	double total = accumulate(rating_info[id].ratingVector.begin(), rating_info[id].ratingVector.end(), 0);
	double overall = (total / size);

	rating_info[id].rating = overall;
}