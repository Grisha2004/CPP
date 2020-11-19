#include "ege27.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int maxim(int n, int k)
{
	int max;
	if (n > k)
	{
		max = n;
	}
	else max = k;
	return(max);
}
void greetingFromEge()
{
	fstream fout("test.txt");
	int const d = 160;
	int const p = 7;
	int firstMax7 = 0;
	int secondMax7 = 0;
	int firstMax0 = 0;
	int secondMax0 = 0;
	int n = 0;
	int num = 0;

	fout >> n;
	//cin � n;

	for (int i = 0; i < n; ++i)
	{
		//cin � num;
		fout >> num;
		if (num % p == 0)
		{
			if (num > firstMax7 && num % d != firstMax7 % d)
			{
				secondMax7 = firstMax7;
				firstMax7 = num;
				continue;
			}

			if (num > firstMax7 && num % d == firstMax7 % d)
			{
				firstMax7 = num;
				continue;
			}

			if (num > secondMax7 && num % d != firstMax7 % d)
			{
				secondMax7 = num;
				continue;
			}
		}
		else
		{
			if (num > firstMax0 && num % d != firstMax0 % d)
			{
				secondMax0 = firstMax0;
				firstMax0 = num;
				continue;
			}

			if (num > firstMax0 && num % d == firstMax0 % d)
			{
				firstMax0 = num;
				continue;
			}

			if (num > secondMax0 && num % d != firstMax0 % d)
			{
				secondMax0 = num;
				continue;
			}
		}
	}

	int s1 = firstMax7 + secondMax7;
	int s2 = firstMax7 % d != firstMax0 % d ? firstMax7 + firstMax0 : 0;
	int s3 = firstMax7 % d != secondMax0 % d ? firstMax7 + secondMax0 : 0;
	int s4 = secondMax7 % d != firstMax0 % d ? secondMax7 + firstMax0 : 0;
	int s5 = secondMax7 % d != secondMax0 % d ? secondMax7 + secondMax0 : 0;

	int max = maxim(maxim(maxim(maxim(s1, s2), s3), s4), s5);

	if (max == s1)
	{
		cout << firstMax7 << " " << secondMax7;
		return;
	}

	if (max == s2)
	{
		cout << firstMax7 << " " << firstMax0;
		return;
	}

	if (max == s3)
	{
		cout << firstMax7 << " " << secondMax0;
		return;
	}

	if (max == s4)
	{
		cout << secondMax7 << " " << firstMax0;
		return;
	}

	if (max == s5)
	{
		cout << secondMax7 << " " << secondMax0;
		return;
	}

	return;
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
//void ege27::task28129()
//{
//	int amount = 0;
//	cin >> amount;
//	int a[160], b[160];
//	for (int i = 0; i < amount; ++i)
//	{
//		int num = 0;
//		cin >> num;
//		int r = num % 160;
//		if (num % 7 == 0 && num > a[r])
//		{
//			a[i] = num;
//		}
//		else if (b[r] < num)
//		{
//			b[r] = num;
//		}
//	}
//	int maxa1 = 0, maxa2 = 0, maxb1 = 0, maxb2 = 0;
//	int max[5][2];
//	for (int i = 0; i < 160; ++i)
//	{
//		if (a[i] > maxa1)
//		{
//			maxa2 = maxa1;
//			maxa1 = a[i];
//		}
//		else if (a[i] > maxa2)
//		{
//			maxa2 = a[i];
//		}
//	
//		if (b[i] > maxb1)
//		{
//			maxb2 = maxb1;
//			maxb1 = b[i];
//
//		}
//		else if (b[i] > maxb2)
//		{
//			maxb2 = b[i];
//		}
//	}
//	cout << maxa1 << " " << maxa2 << " " << maxb1 <<" " << maxb2 << endl;
//	max[0][0] = maxa1;
//	max[0][1] = maxa2;
//	max[1][1] = maxb1;
//	max[1][0] = maxa1;
//	max[2][0] = maxa2;
//	max[2][1] = maxb1;
//	max[3][0] = maxa1;
//	max[3][1] = maxb2;
//	max[4][1] = maxb2;
//	max[4][0] = maxa2;
// 	int k = 0, maxSum = 0;
//	for (int i = 0; i < 4; ++i)
//	{
//		cout << max[i][0] << " " << max[i][1] << endl;
//		if (max[i][0] + max[i][1] > maxSum && max[i][0] % 160 != max[i][1] % 160)
//		{
//			k = i;
//			maxSum = max[i][0] + max[i][1];
//		}
//	}
//	cout << max[k][0] << " " << max[k][1];
//}
void ege27::task28130()
{
	int amount = 0;
	cin >> amount;
	int a[80], b[80];
	for (int i = 0; i < 80; ++i)
	{
		a[i] = 0;
		b[i] = 0;
	}
	for (int i = 0; i < amount; ++i)
	{
		int num = 0;
		cin >> num;
		int r = num % 80;
		if (num > 50)
		{
			a[r] += 1;
		}
		else
		{
			b[r] += 1;
		}
	}
	
	int sum = 0;
	for (int i = 1; i < 40; ++i)
	{
		if (a[i] != 0 && b[80 - i] != 0)
		{
			sum += (a[i] * (b[80-i] + a[80 - i]));
		}
	}
	sum += ((a[0] * (a[0] - 1)) / 2) + ((a[40] * (a[40] - 1)) / 2) + a[0]*b[0] + a[40]*b[40];
	cout << sum;
}
void ege27::task28131()
{
	int amount = 0;
	cin >> amount;
	int remainders[120];
	for (int i = 0; i < 120; ++i)
	{
		remainders[i] = 0;
	}
	int L = 0;
	int R = 0;
	int maxSum = 0;
	for (int i = 0; i < amount; ++i)
	{
		int r = 0;
		cin >> r;
		int remainder = r % 120;
		int l = remainders[(120 - remainder) % 120];
		if (l != 0 && l > r)
		{
			int sum = l + r;
			if (sum > maxSum)
			{
				maxSum = sum;
				L = l;
				R = r;
			}
		}

		if (r > remainders[remainder])
		{
			remainders[remainder] = r;
		}
	}
	cout << L << ' ' << R;
}
void ege27::task18096()
{
	int amount = 0;
	cin >> amount;
	int n2 = 0, n62 = 0, n31 = 0, n0 = 0;
	++amount;
	while (--amount)
	{
		int num = 0;
		cin >> num;
		if (num % 62 == 0)
			n62 += 1;
		else if (num % 31 == 0)
			n31 += 1;
		else if (num % 2 == 0)
			n2 += 1;
		else
			n0 += 1;
	}
	cout << (n0 * n62) + (n62 * (n62 - 1) / 2) + (n31 * n2) + (n62 * n31) + (n62 * n2);
}
void ege27::task25963()
{
	int amount = 0;
	cin >> amount;
	int n192 = 0;
	int m192 = 0;
	int n19 = 0;
	int m19 = 0;
	int n0 = 0;
	int n2 = 0;
	for (int i = 0; i < amount; ++i)
	{
		int num;
		cin >> num;
		if (num % 19 == 0)
		{
			if (num % 2 == 0 && num > n192)
			{
				if (num > m192)
				{
					n192 = m192;
					m192 = num;
				}
				else
					n192 = num;
			}
			else if (num % 19 == 0 && num > n19)
			{
				if (num > m19)
				{
					n19 = m19;
					m19 = num;
				}
				else 
					n19 = num;
			}
		}
		else
		{
			if (num % 2 == 0 && num > n2)
				n2 = num;
			else if (num % 2 != 0 && num > n0)
				n0 = num;
		}
	}
	int a[4] = { m192, m192, m19, m19 };
	int b[4] = {n192, n2, m19, n0};
	int maxSum = 0;
	int maxInd = 0;
	for (int i = 0; i < 4; ++i)
	{
		int sum = a[i] + b[i];
		if (sum > maxSum && a[i] != 0 && b[i] != 0)
		{
			maxSum = sum;
			maxInd = i;
		}
	}
	if (maxSum != 0)
		cout << a[maxInd] << " "<< b[maxInd];
	else cout << "0  0";
}
void ege27::task15812()
{
	int amount;
	cin >> amount;
	int n23 = 0;
	int n2 = 0;
	int n0 = 0;
	int n3 = 0;
	for (int i = 0; i < amount; ++i)
	{
		int num = 0;
		if (num % 2 == 0)
		{
			if (num % 3 == 0 && num > n23)
				n23 = num;
			if (num % 3 != 0 && num > n2)
				n2 = num;
		}
		else
		{
			if (num % 3 == 0 && num > n3)
				n3 = num;
			if (num % 3 != 0 && num > n0)
				n0 = num;
		}
	}
	int a[] = 
}