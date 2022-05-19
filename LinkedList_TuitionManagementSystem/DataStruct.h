#pragma once
#include <iostream>
using namespace std;

struct Tutor
{
	int tutorID;
	string tutorName;
	string dateJoin;
	string dateTerminated;
	double hourlyRate;
	string tutorPhone;
	string tutorAddress;
	int tutionCode;
	int subjectCode;
	double rating;
};

struct Subject
{
	int subjectCode;
	string subjectName;
	double subjectPaid;
};

struct Tuition
{
	int tutionCode;
	string tutionName;
	string tutionAddress;
};