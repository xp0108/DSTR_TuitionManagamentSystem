#pragma once
#include <iostream>
#include "DataStruct.h"
#include "DisplayTutor.h"
using namespace std;

// function to swap the the position of two elements
void SwapArray(Tutor* currentCarry, Tutor* minCarry) {
	Tutor temp = *currentCarry;
	*currentCarry = *minCarry;
	*minCarry = temp;
}

void TutorIDSelectionSortLL()
{
	Tutor* current = head;
	while (current != NULL)
	{
		Tutor* min = current;
		Tutor* pre = current->nextAddress;
		while (pre != NULL)
		{
			if (min->tutorID > pre->tutorID)
			{
				min = pre;
			}
			pre = pre->nextAddress;
		}
		SwapArray(current, min);
		current = current->nextAddress;
	}
	
}

void SortTutorID() {
	system("cls");
	TutorIDSelectionSortLL();
	DisplayTutor();
	cout << "No of tutor in LL: " << ::sizeOfLinkedList << endl;
	//"Sorted Tutor ID in Acsending Order"
}