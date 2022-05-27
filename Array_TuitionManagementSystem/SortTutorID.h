#pragma once
#include <iostream>
#include "AdditionalFeature.h"
#include "DisplayTutor.h"
using namespace std;

// function to swap the the position of two elements
void SwapArray(Tutor* currentCarry, Tutor* minCarry) {
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

		// put minimum array at the correct position
		SwapArray(&tutorArray[minTutorID], &tutorArray[current]);
	}
}

void SortTutorID(Tutor tutorArray[]) {
	//clear screen 
	system("cls");
	//call the selection sort function
	TutorIDSelectionSort(tutorArray);
	//call display function
	DisplayTutorSorted(tutorArray, "Sorted Tutor ID in Acsending Order");
}

void SortTutorIDKL(Tutor tutorArray[]) {
	system("cls");
	TutorIDSelectionSort(tutorArray);
	DisplayKLTutor(tutorArray, "Sorted Tutor ID in Acsending Order");
}

void SortTutorIDJohor(Tutor tutorArray[]) {
	system("cls");
	TutorIDSelectionSort(tutorArray);
	DisplayJohorTutor(tutorArray, "Sorted Tutor ID in Acsending Order");
}