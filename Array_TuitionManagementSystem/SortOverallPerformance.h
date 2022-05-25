#pragma once
#include <iostream>
#include "AdditionalFeature.h"
#include "DisplayTutor.h"
#include "SortTutorID.h"

using namespace std;

// Loop and Swap - Selection Sort
void OverallPerformanceSelectionSort(Tutor tutorArray[]) {
	int tutorArraySize = 100;
	for (int current = 0; current < tutorArraySize - 1; current++) {
		int minRating = current;
		// Compare next array
		for (int i = current + 1; i < tutorArraySize; i++) {

			// Select the minimum element in each loop.
			if (tutorArray[i].rating < tutorArray[minRating].rating)
				minRating = i;
		}

		// put min at the correct position
		SwapArray(&tutorArray[minRating], &tutorArray[current]);
	}
}

void SortOverallPerformanceHR(Tutor tutorArray[]) {
	system("cls");
	OverallPerformanceSelectionSort(tutorArray);
	DisplayTutor(tutorArray, "Sorted Hourly Pay Rate in Acsending Order");
}

void SortOverallPerformanceKL(Tutor tutorArray[]) {
	system("cls");
	OverallPerformanceSelectionSort(tutorArray);
	DisplayKLTutor(tutorArray, "Sorted Hourly Pay Rate in Acsending Order");
}

void SortOverallPerformanceJohor(Tutor tutorArray[]) {
	system("cls");
	OverallPerformanceSelectionSort(tutorArray);
	DisplayJohorTutor(tutorArray, "Sorted Hourly Pay Rate in Acsending Order");
}