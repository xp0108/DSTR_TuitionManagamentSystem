#pragma once
#include "DataStruct.h"

bool isEmpty(Tutor* head) {
    if (head == NULL) {
        return true;
    }
    else {
        return false;
    }
}

void AddNode(Tutor*& head, Tutor*& last, int id, string name, string datejoin,
    double rate, string phone, string address, int tcode, int scode) {
    Tutor* newNode = new Tutor;

    newNode->tutorID = id;
    newNode->tutorName = name;
    newNode->dateJoin = datejoin;
    newNode->dateTerminated = "N/A";
    newNode->hourlyRate = rate;
    newNode->tutorPhone = phone;
    newNode->tutorAddress = address;
    newNode->tutionCode = tcode;
    newNode->subjectCode = scode;
    head = newNode;
    last = newNode;
    cout << endl;

}

void AddTutor(Tutor*& head, Tutor*& last, int id, string name, string datejoin,
    double rate, string phone, string address, int tcode, int scode) {
    if (isEmpty(head)) {
        AddNode(head, last, id, name, datejoin, rate, phone, address, tcode, scode);
    }
    else {
        Tutor* newNode = new Tutor;

        newNode->tutorID = id;
        newNode->tutorName = name;
        newNode->dateJoin = datejoin;
        newNode->dateTerminated = "N/A";
        newNode->hourlyRate = rate;
        newNode->tutorPhone = phone;
        newNode->tutorAddress = address;
        newNode->tutionCode = tcode;
        newNode->subjectCode = scode;
        newNode->next = NULL;
        newNode->next = newNode;
        last = newNode;
        cout << endl;
    }
}

void Display(Tutor* current) {
    if (isEmpty(current)) {
        cout << "The list is empty." << endl;
    }
    else {
        cout << "Content of the list: " << endl;
        while (current != NULL) {
            cout << "Tutor ID: " << current->tutorID << endl;
            cout << "Tutor name: " << current->tutorName << endl;
            cout << "Date joined: " << current->dateJoin << endl;
            cout << "Date terminated: " << current->dateTerminated << endl;
            cout << "Hourly rate: " << current->hourlyRate << endl;
            cout << "Phone: " << current->tutorPhone << endl;
            cout << "Address: " << current->tutorAddress << endl;
            cout << "Tuition code: " << current->tutionCode << endl;
            cout << "Subject code: " << current->subjectCode << endl;
            current = current->next;
            cout << endl;
        }
    }
}

void CallAdd() {
    Tutor* head = NULL;
    Tutor* last = NULL;

    int id, tcode, scode;
    double rate;
    string name, datej, phone, address;

    cout << "Tutor ID: ";
    cin >> id;
    cout << "Tutor name: ";
    cin >> name;
    cout << "Date joined: ";
    cin >> datej;
    cout << "Hourly rate: ";
    cin >> rate;
    cout << "Tutor phone: ";
    cin >> phone;
    cout << "Tutor address: ";
    cin >> address;
    cout << "Tuition code: ";
    cin >> tcode;
    cout << "Subject code: ";
    cin >> scode;
    cout << endl;

    AddTutor(head, last, id, name, datej, rate, phone, address, tcode, scode);
    Display(head);
}