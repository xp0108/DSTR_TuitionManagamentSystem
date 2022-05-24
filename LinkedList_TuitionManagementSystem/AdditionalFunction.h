#pragma once
#include <iostream>
#include <string> 
#include <vector>
#include <cstring>

using namespace std;

void loopSymbol(int times = 20, string symbol = "=")
{
	for (int i = 0; i < times; i++)
	{
		cout << symbol;
	}
}

// CALCULATE 2 DATE - https://www.geeksforgeeks.org/find-number-of-days-between-two-given-dates/
struct Date {
	int day, month, year;
};

// To store number of days in
// all months from January to Dec.
const int monthDays[12]
= { 31, 28, 31, 30, 31, 30,
   31, 31, 30, 31, 30, 31 };

// This function counts number of
// leap years before the given date
int countLeapYears(Date day)
{
	int years = day.year;

	// Check if the current year needs to be
	//  considered for the count of leap years
	// or not
	if (day.month <= 2)
		years--;

	// An year is a leap year if it
	// is a multiple of 4,
	// multiple of 400 and not a
	 // multiple of 100.
	return years / 4
		- years / 100
		+ years / 400;
}

// This function returns number of
// days between two given dates
int CountDiffDate(Date date1, Date date2)
{
	// COUNT TOTAL NUMBER OF DAYS
	// BEFORE FIRST DATE 'date1'

	// initialize count using years and day
	long int n1 = date1.year * 365 + date1.day;

	// Add days for months in given date
	for (int i = 0; i < date1.month - 1; i++)
		n1 += monthDays[i];

	// Since every leap year is of 366 days,
	// Add a day for every leap year
	n1 += countLeapYears(date1);

	// SIMILARLY, COUNT TOTAL NUMBER OF
	// DAYS BEFORE 'date2'

	long int n2 = date2.year * 365 + date2.day;
	for (int i = 0; i < date2.month - 1; i++)
		n2 += monthDays[i];
	n2 += countLeapYears(date2);

	// return difference between two counts
	return (n2 - n1);
}