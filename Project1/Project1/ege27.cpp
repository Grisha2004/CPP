#include "ege27.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int max(int n, int k)
{
	int max;
	if (n > k)
	{
		max = n;
	}
	else max = k;
	return(max);
}

void ege27::task27891()
{
	ifstream fin("27-A_2.txt");
	int max = 0;
	int amount = 0;
	int n2 = 0;
	int n7 = 0;
	int n14 = 0;
	int n0 = 0;
	fin >> amount;
	while (!fin.eof())
	{
		int n = 0;
		fin >> n;
		
		if (n % 14 == 0 && n >= n14)
		{
			if (n * n14 > max)
			{
				max = n * n14;
			}

			n14 = n;
		}

		if (n % 2 == 0 && n % 7 != 0 && n > n2)
		{
			n2 = n;
		}
		
		if (n % 7 == 0 && n % 2 != 0 && n > n7)
		{
			n7 = n;
		}
		
		if (n % 7 != 0 && n % 2 != 0 && n > n0)
		{
			n0 = n;
		}
	}
	fin.close();
	if (max < n14 * n2)
	{
		max = n14 * n2;
	}

	if (max < n14 * n7)
	{
		max = n14 * n7;
	}

	if (max < n2 * n7)
	{
		max = n2 * n7;
	}

	if (max < n14 * n0)
	{
		max = n14 * n0;
	}

	cout << max;
	return;
}
void ege27::task27986()
{
	ifstream fin("27986_A.txt");
	int amount = 0;
	int n7 = 0;
	int n0 = 0;
	fin >> amount;
	while (!fin.eof())
	{
		int n = 0;
		fin >> n;
		if (n % 49 !=0 && n % 7 == 0 && n > n7)
		{
			n7 = n;
		}
		if (n % 7 != 0 && n > n0)
		{
			n0 = n;
		}
	}
	fin.close();
	int max = n7 * n0;
	if (max != 0)
	{
		cout << max;
		return;
	}
	cout << 1;
}