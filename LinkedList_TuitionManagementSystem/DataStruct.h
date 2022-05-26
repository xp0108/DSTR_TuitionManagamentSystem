#pragma once
#include <iostream>
using namespace std;

int sizeOfLinkedList = 0;

struct Tutor
{
	int tutorID;
	string tutorName;
	string dateJoin;
	string dateTerminated;
	double workingHour;
	double hourlyRate;
	string tutorPhone;
	string tutorAddress;
	string tutionName;
	string subjectName;
	double rating;
	double payCheck;

	Tutor* nextAddress; //link
} *head;
