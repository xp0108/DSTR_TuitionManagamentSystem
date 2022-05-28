#pragma once
#include <iostream>
#include "DataStruct.h"
#include "AddTutor.h"

void GenerateData() {
	Tutor* newNode1 = AddNode(99, "Onn", "23/5/2022", 10, 40, "0127120665", "Puchong", "KL", "Math", 2, 400); //create Node
	AppendNode(newNode1);
	Tutor* newNode2 = AddNode(9, "Kelvin", "1/5/2021", 10, 60, "0146745920", "Muar", "JOHOR", "History", 1, 600); //create Node
	AppendNode(newNode2);
	Tutor* newNode3 = AddNode(13, "YW", "15/5/2020", 10, 70, "0125843032", "Subang", "KL", "English", 5, 700); //create Node
	AppendNode(newNode3);
	Tutor* newNode4 = AddNode(10, "XP", "4/7/2021", 10, 80, "0118593048", "Kluang", "JOHOR", "Mandarin", 5, 800); //create Node
	AppendNode(newNode4);
	Tutor* newNode5 = AddNode(17, "Jason", "22/2/2022", 10, 45, "0108549039", "Sentul", "KL", "Malay", 1, 450); //create Node
	AppendNode(newNode5);
	Tutor* newNode6 = AddNode(11, "Murray", "29/12/2021", 10, 75, "0145783516", "Johor Baharu", "JOHOR", "Science", 5, 750); //create Node
	AppendNode(newNode6);
	Tutor* newNode7 = AddNode(23, "Andrew", "14/9/2021", 10, 60, "0114832731", "Muar", "JOHOR", "Accounting", 3, 600); //create Node
	AppendNode(newNode7);
	Tutor* newNode8 = AddNode(21, "Manny", "1/1/2022", 10, 80, "0194738274", "Titiwangsa", "KL", "Computing", 3, 800); //create Node
	AppendNode(newNode8);
	Tutor* newNode9 = AddNode(5, "Sam", "13/4/2022", 10, 55, "0193658311", "Putra Heights", "KL", "Arts", 4, 550); //create Node
	AppendNode(newNode9);
	Tutor* newNode10 = AddNode(19, "Johnson", "21/9/2021", 10, 65, "0121790696", "Batu Pahat", "JOHOR", "Economics", 4, 650); //create Node
	AppendNode(newNode10);
}