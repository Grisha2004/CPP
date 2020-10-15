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
	cout << members << " " << sizeOfFiles[members];

	delete[] sizeOfFiles;
}