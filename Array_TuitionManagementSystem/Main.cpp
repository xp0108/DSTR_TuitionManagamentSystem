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

	MoveWindow(console, r.left, r.top, 1480, 600, TRUE); // 800 width, 100 height

	static Tutor tutor_info[100];

	GenerateData(tutor_info);
	Login(tutor_info);

	return 0;
}