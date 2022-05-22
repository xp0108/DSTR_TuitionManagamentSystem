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
	string tutionName;
	string subjectName;
	double rating;
};

struct Subject
{
	int subjectCode;
	string subjectName;
	double MonthlyHour;
};