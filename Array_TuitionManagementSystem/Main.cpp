// ARRAY Approach - Tuition Management System
#include <iostream>
#include "Login.h"
#include "GenerateData.h"
#include "AdditionalFeature.h"
#include <windows.h>

using namespace std;

int main()
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the console's current dimensions

	MoveWindow(console, r.left, r.top, 1350, 600, TRUE); // 800 width, 100 height

	loopSymbol(120);
	cout << endl;
	cout << "\t\t\t\t\teXcel Tuition Centre Management System" << endl;
	loopSymbol(120);

	cout << endl << endl;

	static Tutor tutor_info[100];

	GenerateData(tutor_info);
	Login(tutor_info);

	return 0;
}