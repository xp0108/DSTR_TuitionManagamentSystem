#pragma once
#include <iostream>

using namespace std;

void loopSymbol(int times = 20, string symbol = "=")
{
	for (int i = 0; i < times; i++)
	{
		cout << symbol;
	}
}