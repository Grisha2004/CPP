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
void ege24::task27689string()
{
	fstream fin("z5.txt");
	char symbol = '\0';
	int position = 0;
	int currentLength = 0;
	int maxLength = 0;

	while (!fin.eof())
	{
		fin >> symbol;

		if (symbol == 'X' && position == 0)
		{
			++position;
			++currentLength;
		}
		else if (symbol == 'Y' && position == 1)
		{
			++position;
			++currentLength;
		}
		else if (symbol == 'Z' && position == 2)
		{
			position = 0;
			++currentLength;
		}
		else
		{
			if (currentLength > maxLength)
			{
				maxLength = currentLength;
			}

			position = 0;
			currentLength = 0;
		}
	}

	if (currentLength > maxLength)
	{
		maxLength = currentLength;
	}
	cout << maxLength;
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
void ege24::task27687()
{
	fstream fin("24_d.txt");
	char n = ' ';
	char const y = 'Y';
	int counter = 0;
	int max = 0;
	while (!fin.eof())
	{
		fin >> n;
		if (n == y)
		{
			counter++;
		}
		else
		{
			if (counter > max)
				max = counter;
			counter = 0;
		}
	}
	if (max > counter)
		cout << max << endl;
	else cout << counter << endl;
}
void ege24::task27853()
{
	int const l = 312614;
	int const r = 312651;
	for (int i = l; i <= r; ++i)
	{
		int a[6];
		
		int counter = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				counter++;
				if (counter <= 6)
					a[counter - 1] = j;
				else
					break;
			}
		}
		if (a[5] == i)
		{
			for (int l = 0; l < 6; ++l)
				cout << a[l] << " ";
			cout << endl;
		}
		
	}
}