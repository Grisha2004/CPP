#include "ege26.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void sort(int *array, int const size)
{
	for (int i = 0; i < size; ++i)
	{
		for(int j = 0; j < size-1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array[j], array[j + 1]);
			}			
		}
		
	}
	for (int i = 0; i < size; ++i)
		cout << array[i] << " ";
	cout << endl;
}

void ege26::task27423()
{
	int space = 0;
	int amount = 0;
	cin >> space >> amount;
	
	int* sizeOfFiles = new int[amount];
	for (int i = 0; i < amount; ++i)
	{
		cin >> sizeOfFiles[i];
	}
	sort(sizeOfFiles, amount);
	int sum = 0;
	int members = 0;
	for (int i = 0; i < amount; ++i)
	{
		sum += sizeOfFiles[i];
		if (sum > space)
		{
			sum -= sizeOfFiles[i];
			members = i;
			break;
		}
	}
	int maxfile = 0;
	for (int i = members; i < amount; ++i)
	{
		if (sum - sizeOfFiles[members - 1] + sizeOfFiles[i] <= space)
		{
			sum = sum - sizeOfFiles[members] + sizeOfFiles[i];
			maxfile = i;
		}
	}
	cout << members << " " << sizeOfFiles[maxfile];

	delete[] sizeOfFiles;
}