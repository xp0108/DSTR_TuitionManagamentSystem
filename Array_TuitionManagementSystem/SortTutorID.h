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
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void TutorIDSelectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {

            // To sort in descending order, change > to < in this line.
            // Select the minimum element in each loop.
            if (array[i] < array[min_idx])
                min_idx = i;
        }

        // put min at the correct position
        SwapTutorID(&array[min_idx], &array[step]);
    }
}

// driver code
void SortTutorID() {
    system("cls");
    int data[] = { 20, 12, 10, 15, 2 };
    int size = sizeof(data) / sizeof(data[0]);
    TutorIDSelectionSort(data, size);
    cout << "Sorted array in Acsending Order:\n";
    printArray(data, size); 

    loopSymbol(120);
}