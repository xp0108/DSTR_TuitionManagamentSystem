#pragma once
#include <iostream>
#include "DataStruc.h"

void AddTutor(int arraysize, Tutor tutor_info[]) {

    // add value to tutor_info
    for (int row = 0; row < arraysize; row++) {
        cout << "Tutor ID (integers only): ";
        cin >> tutor_info[row].tutorID;
        cout << "Full name: ";
        cin >> tutor_info[row].tutorName;
        cout << "Date joined: ";
        cin >> tutor_info[row].dateJoin;
        cout << "Date terminated: ";
        cin >> tutor_info[row].dateTerminated;
        cout << "Hourly rate (integers only): ";
        cin >> tutor_info[row].hourlyRate;
        cout << "Phone number: ";
        cin >> tutor_info[row].tutorPhone;
        cout << "Address: ";
        cin >> tutor_info[row].tutorAddress;
        cout << endl;
    }
}

void PrintTutorInfo(int arraysize, Tutor tutor_info[]) {
    cout << "Tutor Records" << endl << endl;

    // print out tutor_info
    for (int row = 0; row < arraysize; row++) {
        cout << "Tutor ID: " << tutor_info[row].tutorID << endl;
        cout << "Tutor name: " << tutor_info[row].tutorName << endl;
        cout << "Date joined: " << tutor_info[row].dateJoin << endl;
        cout << "Date terminated: " << tutor_info[row].dateTerminated << endl;
        cout << "Hourly rate: " << tutor_info[row].hourlyRate << endl;
        cout << "Phone number: " << tutor_info[row].tutorPhone << endl;
        cout << "Address: " << tutor_info[row].tutorAddress << endl;
        cout << endl;

    }

    cout << endl;
    cout << string(100, '-') << endl;
}

void RegisterTutorFunction() {

    int arraysize;

    cout << "Number of tutor(s) to add (integers only): ";
    cin >> arraysize;
    cout << endl;

    Tutor tutor_info[100];

    AddTutor(arraysize, tutor_info);

    cout << endl << endl << endl;

    PrintTutorInfo(arraysize, tutor_info);
}

void GenerateData(Tutor tutor_info[]) {
    tutor_info[50].tutorID = 50;
    tutor_info[50].tutorName = "Onn";
    tutor_info[50].dateJoin = "12/05/2021";
    tutor_info[50].dateTerminated = "12/06/2021";
    tutor_info[50].hourlyRate = 10;
    tutor_info[50].tutorPhone = "0123456789";
    tutor_info[50].tutorAddress = "Bukit Jalil";
}