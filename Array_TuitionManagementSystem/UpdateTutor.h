#pragma once
#include <iostream>
#include "HRSearch.h"
#include "UserMenuFunction.h"
#include "DataStruc.h"
using namespace std;
//
//void UpdateTutorAddress(Tutor tutorArray[], int tutorID) {
//	if (tutorID <= 1)
//		return;
//
//	Tutor prev_element = tutorArray[0];
//	tutorArray[0] = tutorArray[0] * tutorArray[1];
//
//	for (int i = 1; i < tutorID - 1; i++)
//		Tutor curr_element = tutorArray[i];
//
//		tutorArray[i] = prev_element * tutorArray[i + 1];
//
//		prev_element = curr_element;
//	}
//
//	tutorArray[tutorID - 1] = prev_element * tutorArray[tutorID - 1];
//
//}
//
//void UpdateTutorPhone(Tutor tutorArray[], int tutorID) {
//	cout << "mody phone" << endl;
//}
//
//void UpdateTutor(Tutor tutorArray[])
//{
//	system("cls");
//	loopSymbol(120);
//	cout << "Update Tutor Record" << endl;
//	loopSymbol(120);
//	int tutorID;
//
//	// Check is int input
//	cout << "Enter Tutor ID :";
//	while (!(cin >> tutorID)) {
//		cout << endl << "Integer Only !!" << endl << "Enter Tutor ID Again : ";
//		cin.clear();
//		cin.ignore(123, '\n');
//	}
//
//	//Search Function - check tutor exist & return tutorArray
//	int checkTutorID = linearSearchTutor(tutorArray, tutorID);
//	while (checkTutorID == -1)
//	{
//		cout << "Tutor ID not found\t" << "INPUT AGAIN: ";
//		cin.clear();
//		cin >> tutorID;
//		checkTutorID = linearSearchTutor(tutorArray, tutorID);
//	}
//
//	//Update Menu - address or phone
//	bool exitFunction = true;
//	while (exitFunction != false)
//	{
//		int updateChoice;
//		cout << endl << endl;
//		cout << " ** UPDATE MENU **" << endl;
//		cout << "1. Tutor Phone Number" << endl;
//		cout << "2. Tutor Address" << endl;
//		cout << "3. Exit Update Function" << endl;
//		cout << "Enter your choice: ";
//		// Validate user input
//		while (!(cin >> updateChoice)) {
//			cout << endl << "Invalid Input !!!" << endl;
//			cout << "Enter you choice again: ";
//			cin.clear();
//			cin.ignore(123, '\n');
//		}
//		switch (updateChoice)
//		{
//		case 1:
//			UpdateTutorPhone(tutorArray, tutorID);
//			break;
//		case 2:
//			UpdateTutorAddress(tutorArray, tutorID);
//			break;
//		case 3:
//			exitFunction = false;
//			break;
//		default:
//			cout << "Invalid Option! Please Try Again";
//		}
//	}
//
//}




void replace_elements(int nums[], int n)
{
    if (n <= 1)
        return;

    int prev_element = nums[0];
    nums[0] = nums[0] * nums[1];

    for (int i = 1; i < n - 1; i++)
    {
        int curr_element = nums[i];

        nums[i] = prev_element * nums[i + 1];

        prev_element = curr_element;
    }

    nums[n - 1] = prev_element * nums[n - 1];
}

int UpdateTutor()
{
    int nums[] = { 0, 1, 3, 4, 5, 6, 7, 8, 10 };
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    replace_elements(nums, n);
    cout << "\nNew array elements: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    return 0;

}