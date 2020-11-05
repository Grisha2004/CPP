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
bool maximum(int num1, int num2)
{
	if (num1 > num2)
	{
		return 1;
	}
	return 0;
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
void ege27::task27989()
{
	int n2 = 0;
	int n13 = 0;
	int n26 = 0;
	int n0 = 0;
	int amount = 0;
	cin >> amount;
	for (int i = 0; i < amount; ++i)
	{
		int num = 0;
		cin >> num;
		if (num % 26 == 0)
		{
			n26 += 1;
		}
		else if (num % 2 == 0)
		{
			n2 += 1;
		}
		else if (num % 13 == 0)
		{
			n13 += 1;
		}
		else
		{
			n0 += 1;
		}
	}
	cout << n2 * n13 + n26 * (n0 + n13 + n2) + ((n26 * (n26 - 1)) / 2);
}
void ege27::task27991()
{
	int amount = 0;
	cin >> amount;
	int chetn = 0;
	int chetn171 = 0;
	int chetn172 = 0;
	int nechetn = 0;
	int nechetn171 = 0;
	int nechetn172 = 0;
	for (int i = 0; i < amount; ++i)
	{
		int num;
		cin >> num;

		if (num % 2 == 0 && num % 17 == 0) 
		{
			if (num > chetn172 && num <= chetn171)
			{
				chetn172 = num;
			}

			if (num > chetn171)
			{
				chetn171 = num;
			}
		}

		if (num % 2 == 0 && num % 17 != 0 && num > chetn)
		{
			chetn = num;
		}

		if (num % 17 == 0 && num % 2 != 0)
		{
			if (num > nechetn172 && num <= nechetn171)
			{
				nechetn172 = num;
			}

			if (num > nechetn171)
			{
				nechetn171 = num;
			}
		}

		if(num % 2 != 0 && num % 17 != 0 && num > nechetn)
		{
			nechetn = num;
		}
	}
	
	int max[4] = {0, 0, 0, 0};

	if (chetn171 != 0 && chetn172 != 0)
	{
		max[0] = chetn171 + chetn172;
	}

	if (chetn171 != 0 && chetn != 0)
	{
		max[1] = chetn171 + chetn;
	}

	if (nechetn171 != 0 && nechetn172 != 0)
	{
		max[2] = nechetn171 + nechetn172;
	}

	if (nechetn171 != 0 && nechetn != 0)
	{
		max[3] = nechetn171 + nechetn;
	}

	int maxSum = 0;
	int maxIndex = -1;
	for (int i = 0; i < 4; ++i)
	{
		if (max[i] > maxSum)
		{
			maxSum = max[i];
			maxIndex = i;
		}
	}

	switch (maxIndex)
	{
	case 0:
		cout << chetn171 << " " << chetn172;
		break;
	case 1:
		cout << chetn171 << " " << chetn;
		break;
	case 2: 
		cout << nechetn171 << " " << nechetn172;
		break;
	case 3:
		cout << nechetn171 << " " << nechetn;
		break;
	default:
		cout << "0 0";
		break;
	}
}
void ege27::task28128()
{
	int amount = 0;
	cin >> amount;
	int n31 = 0, n32 = 0, n1 = 0, n2 = 0;
	for (int i = 0; i < amount; ++i)
	{
		int num = 0;
		cin >> num;
		if (num % 3 == 0)
		{
			if (num > n31)
			{
				n32 = n31;
				n31 = num;
			}
			else if (num > n32)
			{
				n32 = num;
			}
		}
		if (num % 3 == 1 && num > n1) n1 = num;
		else if (num % 3 == 2 && num > n2) n2 = num;
	}
	int max1 = n31 + n32;
	int max2 = n1 + n2;
	if (max1 > max2) cout << max1;
	else cout << max2;
}