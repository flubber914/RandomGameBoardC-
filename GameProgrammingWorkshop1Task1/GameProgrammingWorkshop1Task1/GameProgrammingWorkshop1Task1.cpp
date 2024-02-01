// GameProgrammingWorkshop1Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool GetRandomBool() 
{
	bool choice = rand() % 2;
	return choice;
}

int main()
{
	//int input;
	//printf("%sPlease enter an input: ", "\n");
	//cin >> input;
	//const int length = input;
	srand(time(0));
	const int x = 10;
	const int y = x;
	bool grid[x][y];
	for (size_t i = 0; i < x; i++)
	{
		for (size_t o = 0; o < y; o++)
		{
			grid[i][o] = GetRandomBool();
			if (i == 0 || i == x-1) 
			{
				printf("%s ", "-");
				continue;
			}
			else if (o == 0 || o == y-1) 
			{
				printf("%s ", "|");
				continue;
			}
			if (grid[i][o])
			{
				printf("%s ", "*");
			}
			else
			{
				printf("%s ", " ");
			}
		}
		printf("%s", "\n");
	}
}