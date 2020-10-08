#include "ege24.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void ege24::task27689()
{
	string s = "xyzxyzyxyzzzxyxyxyzxyzxyz";
	int length = 0;
	int maxlength = 0;

	for (int i = 0; i <= s.length() - 4; i += 3)
	{
		if (s[i] == 'x' && s[i + 1] == 'y' && s[i + 2] == 'z')
		{
			length += 3;
			if (length > maxlength) maxlength = length;
		}
		else
		{
			if (s[i] == 'x')
			{ 
				++length;
				if (i + 1 <= s.length() && s[i + 1] == 'y')
					++length;
			}
			if (length > maxlength) maxlength = length;
			length = 0;
		}
	}
	cout << maxlength;
}

void ege24::task27421string()
{
	string s = "xyzxyzyxyzzzxyxyzyzyzyzyzyzyzy";

	int maxLength = 0;
	int currentLength = 1;

	for (int i = 0; i < s.length() - 1; ++i)
	{
		bool flag = false;

		if (s[i] != s[i + 1])
		{
			++currentLength;
		}
		else
		{
			flag = true;
		}

		if (i == s.length() - 2 || flag)
		{
			if (currentLength > maxLength)
			{
				maxLength = currentLength;
			}

			currentLength = 1;
		}
	}

	cout << maxLength;
}

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