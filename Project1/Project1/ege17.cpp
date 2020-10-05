#include "ege17.h"
#include <iostream>

using namespace std;

void ege17_1::task27414()
{
	int amount = 0;
	int max = 0;

	for (int number = 1016; number <= 7937; ++number)
	{
		if (number % 3 == 0 && number % 7 != 0 && number % 17 != 0 &&
				number % 19 != 0 && number % 27 != 0)  
		{
			++amount;
			if (number > max)
			{
				max = number;
			}
		}
	}

	cout << amount << max;
}