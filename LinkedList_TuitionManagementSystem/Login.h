#pragma once
#include <iostream>
#include "UserMenuFunction.h"
#include "AdditionalFunction.h"

using namespace std;

void TitleSystem()
{
	loopSymbol(120);
	cout << endl;
	cout << "\t\t\t\t\teXcel Tuition Centre Management System" << endl;
	loopSymbol(120);
	cout << endl << endl;
}

void Login()
{
	int loginCount = 0;

	while (loginCount < 3)
	{
		TitleSystem();
		string username; string password;
		cout << "Enter your username: ";
		cin >> username;
		cout << "Enter your password: ";
		cin >> password;

		if (username == "kl" && password == "123")
		{
			//cout << "Here is KL Branch";
			KLAdminMenu();
		}
		else if (username == "johor" && password == "123")
		{
			//cout << "Here is Johor Branch";
			JohorAdminMenu();
		}
		else if (username == "hr" && password == "123")
		{
			//cout << "Here is HR Manager";
			HRManagerMenu();

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
