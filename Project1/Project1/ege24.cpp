#include "ege24.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


void ege24::task27421()
{
	char n;
	char m = 0; 
	int max = 0;
	int length = 1;
	ifstream fin;
	string path = "24_demo.txt";
	fin.open(path);
	while (fin.get(n)) {
		if (n!= m) 
			length += 1; 		
		else
		{
			length -= 1;
			if (length > max)
			{
				max = length;
			}
			length = 1;
		}
		m = n;
	}
	fin.close();
	cout << max;
}

void ege24::task27689()
{
	string s = "xyz";
	int length = 0;
	int maxlength = 0;

	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == 'x' && s[i + 1] == 'y' && s[i + 2] == 'z')
		{
			length += 3;
			if (length > maxlength) maxlength = length;
			if (i < s.length() - 2) i += 2;
		}
		else if (length != 0) {
			{
				if (s[i] == 'x')
				{
					++length;
					if (i + 1 <= s.length() && s[i + 1] == 'y')
						++length;
					if (i < s.length() - 1) i += 1;
				}
				if (length > maxlength) maxlength = length;
				length = 0;
			}
		}
	}
	cout << maxlength;
}

void ege24::task27422()
{
	for (int number = 174457; number <= 174505; ++number)
	{
		int dividers[2];
		int amountOfDividers = 0;
		for (int divider = 2; divider < number / 2; ++divider)
		{
			if (number % divider == 0)
			{
				++amountOfDividers;
				if (amountOfDividers == 1)
				{
					dividers[0] = divider;
				}
				dividers[1] = divider;
			}
		}
		if (amountOfDividers == 2)
		{
			cout << dividers[1] << " " << dividers[0] << endl;
		}
	}
}
void ege24::task27850()
{
	for (int number = 245690; number <= 245756; ++number)
	{
		int amountOfDeviders = 0;
		for (int devider = 2; devider < number / 2; ++devider)
		{
			if (number % devider == 0)
				++amountOfDeviders;
		}
		if (amountOfDeviders == 0) {
			cout << number - 245689 << " " << number << endl;
		}
	}
}