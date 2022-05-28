#pragma once
#include "DataStruc.h"
#include <numeric>
#include <iostream>

void CalculateOverallPerformance(Tutor rating_info[], int id) {
	double total = 0.0;

	// get the size of the array
	int size = rating_info[id].ratingVector.size();
	
	// get the sum of all elements
	total = accumulate(rating_info[id].ratingVector.begin(), rating_info[id].ratingVector.end(), 0.0);
	
	// calculate the average
	double overall = (total / size);

	rating_info[id].rating = overall;
}