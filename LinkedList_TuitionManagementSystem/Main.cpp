// Linked List Approach - Tuition Management System
#include <iostream>
#include <windows.h>
#include "Login.h"
#include "AdditionalFunction.h"

using namespace std;

int main()
{
	//resize window terminal
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the console's current dimensions

	MoveWindow(console, r.left, r.top, 1350, 600, TRUE); // 800 width, 100 height

	loopSymbol(120);
	cout << endl;
	cout << "\t\t\t\t\teXcel Tuition Centre Management System" << endl;
	loopSymbol(120);

	cout << endl << endl;

	Login();

	return 0;
}