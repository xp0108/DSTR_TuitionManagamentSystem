#pragma once
#include "DataStruc.h"
#include "GenerateData.h"
#include "DisplayTutor.h"

void deleteTutor(Tutor* ptr, string selectedTutor) {
	int repeat = 0;

	//Linear Searching
	for (int i = 0; i < 100; i++) {
		
		//Searching Tutor with searched name
		if ((ptr + i)->tutorName == selectedTutor) {
			for (int j = i; j < 100; j++) {
				for (int k = i; k < 100; k++) {
					if ((ptr + k)->tutorName == selectedTutor) {
						repeat++;
					}
					else {
						break;
					}
				}

				if ((ptr + j)->tutorName == "") {
					break;
				}
				else {
					(ptr + j)->tutorName = (ptr + (j + repeat))->tutorName;
					(ptr + j)->tutorName = (ptr + (j + repeat))->tutorName;
				}

			}
		}
		else if ((ptr + i)->tutorName == "") {
			break;
		}
	}
	for (int i = 0; i < 100; i++) {
		if ((ptr + i)->tutionName == "") {
			break;
		}
		else {
			cout << "Tutor ID: " << (ptr + i)-> tutorID << endl;
			cout << "Tutor Name: " << (ptr + i)->tutorName << endl;
			cout << "Date Joined: " << (ptr + i)->dateJoin << endl;
			cout << "Hourly Rate: " << (ptr + i)->hourlyRate << endl;
			
		}
	}
}