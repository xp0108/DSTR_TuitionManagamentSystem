// Linked List Approach - Tuition Management System
#include <iostream>
#include <windows.h>
#include "Login.h"
#include "AdditionalFunction.h"
#include "GenerateData.h"

using namespace std;

int main()
{
	//resize window terminal
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the console's current dimensions

	MoveWindow(console, r.left, r.top, 1480, 600, TRUE); // 800 width, 100 height

	GenerateData();
	Login();

	return 0;
}