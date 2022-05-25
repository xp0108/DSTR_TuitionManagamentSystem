#pragma once
#include <iostream>
#include "DataStruct.h"
using namespace std;

// function to swap the the position of two elements
void SwapArray(Tutor* currentCarry, Tutor* minCarry) {
	Tutor temp = *currentCarry;
	*currentCarry = *minCarry;
	*minCarry = temp;
}

void SelectionSortLL()
{
	Tutor* current = head;
	while (current)
	{
		Tutor* min = current;
		Tutor* pre = current->nextAddress;
		while (pre)
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