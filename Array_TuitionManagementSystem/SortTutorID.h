#pragma once
#include <iostream>
#include "AdditionalFeature.h"
using namespace std;

// function to swap the the position of two elements
void SwapTutorID(int* currentCarry, int* minCarry) {
	int temp = *currentCarry;
	*currentCarry = *minCarry;
	*minCarry = temp;
}

// function to print an array
void printArray(Tutor tutorArray[]) {
	int tutorArraySize = 100;
	for (int i = 0; i < tutorArraySize; i++) {
		if (tutorArray[i].tutorID != 0)
		{
			cout << tutorArray[i].tutorID << endl;
		}
	}
	cout << endl;
}

// Loop and Swap - Selection Sort
void TutorIDSelectionSort(Tutor tutorArray[]) {
	int tutorArraySize = 100;
	for (int current = 0; current < tutorArraySize - 1; current++) {
		int minTutorID = current;
		for (int i = current + 1; i < tutorArraySize; i++) {

			// Select the minimum element in each loop.
			if (tutorArray[i].tutorID < tutorArray[minTutorID].tutorID)
				minTutorID = i;
		}

		// put min at the correct position
		SwapTutorID(&tutorArray[minTutorID].tutorID, &tutorArray[current].tutorID);
	}
}

void SortTutorID(Tutor tutorArray[]) {
	system("cls");
	TutorIDSelectionSort(tutorArray);
	cout << "Sorted array in Acsending Order:\n";
	printArray(tutorArray);

	loopSymbol(120);
}