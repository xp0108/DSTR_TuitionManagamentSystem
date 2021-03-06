#pragma once
#include <iostream>
#include "AdditionalFeature.h"
#include "DisplayTutor.h"
using namespace std;

// Loop and Swap - Selection Sort
void HourlyRateSelectionSort(Tutor tutorArray[]) {
	int tutorArraySize = 100;
	for (int current = 0; current < tutorArraySize - 1; current++) {
		int minHourlyRate = current;
		// Compare next array
		for (int i = current + 1; i < tutorArraySize; i++) {

			// Select the minimum element in each loop.
			if (tutorArray[i].hourlyRate < tutorArray[minHourlyRate].hourlyRate)
				minHourlyRate = i;
		}

		// put min at the correct position
		SwapArray(&tutorArray[minHourlyRate], &tutorArray[current]);
	}
}

void SortHourlyRate(Tutor tutorArray[]) {
	//clear screen 
	system("cls");
	//call the selection sort function
	HourlyRateSelectionSort(tutorArray);
	//call display function
	DisplayTutorSorted(tutorArray, "Sorted Hourly Pay Rate in Acsending Order");
}

void SortHourlyRateKL(Tutor tutorArray[]) {
	system("cls");
	HourlyRateSelectionSort(tutorArray);
	DisplayKLTutor(tutorArray, "Sorted Hourly Pay Rate in Acsending Order");
}

void SortHourlyRateJohor(Tutor tutorArray[]) {
	system("cls");
	HourlyRateSelectionSort(tutorArray);
	DisplayJohorTutor(tutorArray, "Sorted Hourly Pay Rate in Acsending Order");
}
