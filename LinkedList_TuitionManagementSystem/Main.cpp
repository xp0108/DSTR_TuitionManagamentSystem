// Linked List Approach - Tuition Management System
#include <iostream>
#include "Login.h"

using namespace std;



void loopSymbol(int times = 20, string symbol = "=")
{
	for (int i = 0; i < times; i++)
	{
		cout << symbol;
	}
}

int main()
{
	loopSymbol(120);
	cout << endl;
	cout << "\t\t\t\t\teXcel Tuition Centre Management System" << endl;
	loopSymbol(120);

	cout << endl << endl;

	Login();

	return 0;
}