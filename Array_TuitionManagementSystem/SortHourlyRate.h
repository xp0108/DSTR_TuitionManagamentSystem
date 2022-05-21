#pragma once
#include <iostream>
#include "AdditionalFeature.h"
#include "DisplayTutor.h"
using namespace std;

// function to swap the the position of two elements
void SwapHourlyRate(double* currentCarry, double* minCarry) {
	int temp = *currentCarry;
	*currentCarry = *minCarry;
	*minCarry = temp;
}

// Loop and Swap - Selection Sort
void HourlyRateSelectionSort(Tutor tutorArray[]) {
	int tutorArraySize = 100;
	for (int current = 0; current < tutorArraySize - 1; current++) {
		int minHourlyRate = current;
		for (int i = current + 1; i < tutorArraySize; i++) {

			// Select the minimum element in each loop.
			if (tutorArray[i].hourlyRate < tutorArray[minHourlyRate].hourlyRate)
				minHourlyRate = i;
		}

		// put min at the correct position
		SwapHourlyRate(&tutorArray[minHourlyRate].hourlyRate, &tutorArray[current].hourlyRate);
	}
}

void SortHourlyRate(Tutor tutorArray[]) {
	system("cls");
	HourlyRateSelectionSort(tutorArray);
	cout << "Sorted array in Acsending Order:\n";
	DisplayTutor(tutorArray);
	
}