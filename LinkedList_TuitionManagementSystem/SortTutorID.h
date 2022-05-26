#pragma once
#include <iostream>
#include "DataStruct.h"
#include "DisplayTutor.h"
using namespace std;

void TutorIDSelectionSortLL()
{
    Tutor* current = head;
    Tutor* index = NULL;
    int id;
    string name, dateJ, dateT, phone, address, tname, sname;
    double work, rate, rating, check;
    double temp;

    // Traverse the List
    while (current) {
        index = current->nextAddress;

        // Traverse the unsorted sublist
        while (index) {
            if (current->tutorID > index->tutorID) {
                temp = current->rating;
                current->rating = index->rating;
                index->rating = temp;

                id = current->tutorID;
                current->tutorID = index->tutorID;
                index->tutorID = id;

                name = current->tutorName;
                current->tutorName = index->tutorName;
                index->tutorName = name;

                dateJ = current->dateJoin;
                current->dateJoin = index->dateJoin;
                index->dateJoin = dateJ;

                dateT = current->dateTerminated;
                current->dateTerminated = index->dateTerminated;
                index->dateTerminated = dateT;

                work = current->workingHour;
                current->workingHour = index->workingHour;
                index->workingHour = work;

                rate = current->hourlyRate;
                current->hourlyRate = index->hourlyRate;
                index->hourlyRate = rate;

                phone = current->tutorPhone;
                current->tutorPhone = index->tutorPhone;
                index->tutorPhone = phone;

                address = current->tutorAddress;
                current->tutorAddress = index->tutorAddress;
                index->tutorAddress = address;

                tname = current->tutionName;
                current->tutionName = index->tutionName;
                index->tutionName = tname;

                sname = current->subjectName;
                current->subjectName = index->subjectName;
                index->subjectName = sname;

                check = current->payCheck;
                current->payCheck = index->payCheck;
                index->payCheck = check;

            }

            index = index->nextAddress;
        }

        current = current->nextAddress;
    }
	
}

void SortTutorID() {
	system("cls");
	TutorIDSelectionSortLL();
	DisplaySortedTutor();
	cout << "No of tutor in LL: " << ::sizeOfLinkedList << endl;
	//"Sorted Tutor ID in Acsending Order"
}