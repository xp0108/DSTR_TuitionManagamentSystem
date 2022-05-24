#pragma once
#include <iostream>
#include <vector>
using namespace std;

struct Tutor
{
	int tutorID;
	string tutorName;
	string dateJoin;
	string dateTerminated;
	double monthlyHour;
	double hourlyRate;
	string tutorPhone;
	string tutorAddress;
	string tutionName;
	string subjectName;
	//double rating;
	vector<double> rating;
	double payCheck;
};

