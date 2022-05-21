#pragma once
#include <iostream>
#include "AdditionalFeature.h"
#include "DisplayTutor.h"
using namespace std;

// function to swap the the position of two elements
void SwapTutorID(Tutor* currentCarry, Tutor* minCarry) {
	Tutor temp = *currentCarry;
	*currentCarry = *minCarry;
	*minCarry = temp;
}

// Loop and Swap - Selection Sort
void TutorIDSelectionSort(Tutor tutorArray[]) {
	int tutorArraySize = 100;
	for (int current = 0; current < tutorArraySize - 1; current++) {
		int minTutorID = current;
		// Compare next array
		for (int i = current + 1; i < tutorArraySize; i++) {

			// Select the minimum element in each loop.
			if (tutorArray[i].tutorID < tutorArray[minTutorID].tutorID)
				minTutorID = i;
		}

		// put min at the correct position
		SwapTutorID(&tutorArray[minTutorID], &tutorArray[current]);
	}
}

void SortTutorID(Tutor tutorArray[]) {
	system("cls");
	TutorIDSelectionSort(tutorArray);
	cout << "Sorted array in Acsending Order:\n";
	DisplayTutor(tutorArray);
	//printArray(tutorArray);
}