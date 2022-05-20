#pragma once
#include <iostream>
#include "AdditionalFeature.h"
using namespace std;

// function to swap the the position of two elements
void SwapTutorID(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function to print an array
void printArray(Tutor tutorArray[]) {
    int size = 100;
    for (int i = 0; i < size; i++) {
        cout << tutorArray[i].tutorID << " ";
    }
    cout << endl;
}

void TutorIDSelectionSort(Tutor tutorArray[]) {
    int size = 100;
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {

            // To sort in descending order, change > to < in this line.
            // Select the minimum element in each loop.
            if (tutorArray[i].tutorID < tutorArray[min_idx].tutorID)
                min_idx = i;
        }

        // put min at the correct position
        SwapTutorID(&tutorArray[min_idx].tutorID, &tutorArray[step].tutorID);
    }
}

// driver code
void SortTutorID(Tutor tutorArray[]) {
    system("cls");
    int size = sizeof(tutorArray) / sizeof(tutorArray[0]);
    TutorIDSelectionSort(tutorArray);
    cout << "Sorted array in Acsending Order:\n";
    printArray(tutorArray);

    loopSymbol(120);
}