#pragma once
#include <iostream>
#include "AdditionalFeature.h"
#include "UserMenuFunction.h"
#include "DataStruc.h"
using namespace std;

void Login(Tutor tutorArray[])
{
	int loginCount = 0;

	while (loginCount < 3)
	{
		string username; string password;
		cout << "Enter your username: ";
		cin >> username;
		cout << "Enter your password: ";
		cin >> password;

		if (username == "kl" && password == "123")
		{
			//cout << "Here is KL Branch";
			KLAdminMenu(tutorArray);
		}
		else if (username == "johor" && password == "123")
		{
			//cout << "Here is Johor Branch";
			JohorAdminMenu(tutorArray);
		}
		else if (username == "hr" && password == "123")
		{
			//cout << "Here is HR Manager";
			HRManagerMenu(tutorArray);

		}
		else
		{
			cout << "Invalid username or password." << endl;
			loginCount++;

			if (loginCount < 3)
			{
				cout << "Please Try Again." << endl << endl;
			}
		}
		if (loginCount == 3)
		{
			cout << "Too many login attempts! The program will now terminate.";
		}
	}

}
