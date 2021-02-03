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
	//cin » n;

	for (int i = 0; i < n; ++i)
	{
		//cin » num;
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
		cin >> num;
		if (num % 2 == 0)
		{
			if (num % 3 == 0 && num > n23)
				n23 += 1;
			if (num % 3 != 0 && num > n2)
				n2 ++;
		}
		else
		{
			if (num % 3 == 0 && num > n3)
				n3 ++;
			if (num % 3 != 0 && num > n0)
				n0 ++;
		}
	}
	int sum = 0;
	sum = n23 * (n23 - 1) / 2 + n23 * n0 + n23 * n3 + n2 * n0;
	cout << sum;
}
void ege27::task14788()
{
	int amount = 0;
	cin >> amount;
	int a[9];
	for (int i = 0; i < 9; ++i)
	{
		a[i] = 0;
	}
	for (int i = 0; i < amount; ++i)
	{
		int num = 0;
		cin >> num;
		int r = num % 9;
		a[r] += 1;
	}
	int sum = 0;
	for (int i = 1; i <= 9 / 2; ++i)
	{
		sum += a[i] * a[9-i];
	}
	sum += a[0] * (a[0] - 1) / 2;
	cout << sum;
}
void ege27::task18806()
{
	int amount = 0;
	cin >> amount;
	int a[120];
	for (int i = 0; i < amount; i++)
	{
		a[i] = 0;
	}
	int maxSum = 0;
	int L = 0;
	int index = 0;
	for (int i = 0; i < amount; ++i)
	{
		int n;
		cin >> n;
		int r = n % 120;
		int sum = a[120 - r] + n;
		if (r == 0)
		{
			if (n < a[0] && sum > maxSum)
			{
				maxSum = a[0] + n;
				if (a[0] < n) a[0] = n;
				index = 0;
			}
		}
		else if (n < a[(120 - r)%120] && sum > maxSum)
		{
			
			maxSum = sum;
			index = r;
		}
		if (n > a[r]) 
			a[r] = n;
	}
	if(a[index] != 0 && a[index - 120] != 0)
		cout << a[index] << " "<< a[120 - index];
}
void ege27::task29134() 
{
	int amount = 0;
	cin >> amount;
	int a[60];
	int n0 = 0 ;
	int n30 = 0;
	for (int i = 0; i < 60; ++i)
	{
		a[i] = 0;
	}
	for (int i = 0; i < amount; ++i)
	{
		int num = 0;
		cin >> num;
		int r = num % 60;
		if (r == 0 && num > n0)
		{
			if (a[0] < num)
			{
				n0 = a[0];
				a[0] = num;
			}
			else
				n0 = num;
		}
		else if( r == 30 && num > n30)
		{
			if (a[30] < num)
			{
				n30 = a[30];
				a[30] = num;
			}
			else
				n30 = num;
		}
		if (num > a[r])
			a[r] = num;
	}
	int maxProduct = 0;
	int index = 0;
	for (int i = 1; i <= 29; ++i)
	{
		int currentProduct = a[i] * a[(60 - i) % 60];
		if (currentProduct > maxProduct)
		{
			maxProduct = currentProduct;
			index = i;
		}
	}
	int product30 = n30 * a[30];
	int product0 = n0 * a[0];
	if (maxProduct < product0)
		maxProduct = product0;
	if (maxProduct < product30)
		maxProduct = product30;
	cout << a[index] << " " << a[(60 - index)%60];
}
void ege27::task29212()
{
	int amount = 0;
	cin >> amount;
	int a[60];
	int b[60];
	int max0 = 0;
	int max30 = 0;
	for  (int i = 0; i < 60; ++i)
	{
		a[i] = 0;
		b[i] = 0;
	}
	for (int i = 0; i < amount; ++i)
	{
		int n = 0;
		cin >> n;
		int r = n % 60;
		if (n < 80)
			++a[r];
		else
			++b[r];
	}
	int sum = 0;

	for (int i = 1; i < 60; ++i)
	{
		sum += a[i] * b[i] + (b[i] * (b[i] - 1)) / 2;
	}
	cout << sum << "\n";
}
void ege27::task9777()
{
	int t = 0;
	cin >> t;
	int maxX = 0;
	int maxY = 0;
	for (int i = 0; i < t; ++i)
	{
		int x, y;
		cin >> x >> y;
		x = abs(x);
		y = abs(y);
		if (x == 0 && y > maxY)
		{
			maxY = y;
		}
		if (y == 0 && x > maxX)
		{
			maxX = x;
		}
	}
	cout << (maxX * maxY) / 2;
}
void ege27::task4868()
{
	int n;
	cin >> n;
	int yc = 0;
	int xc = 0;
	int yc2 = 0;
	int xc2 = 0;
	int maxX = 0;
	int maxX2 = 0;
	int minX = 1001;
	int minX2 = 1001;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		y = abs(y);
		if (y != 0 && y > yc && x > 0)
		{
			yc = y;
			xc = x;
		}
		if (y != 0 && y > yc2 && x < 0)
		{
			yc2 = y;
			xc2 = x;
		}
		if (y == 0 && x > 0 && x > maxX)
		{
			maxX = x;
		}
		if (y == 0 && x > 0 && x < minX)
		{
			minX = x;

		}
		if (y == 0 && x < 0 && abs(x) > maxX2)
			maxX2 = abs(x);
		if (y == 0 && x < 0 && abs(x) < minX2)
			minX2 = abs(x);
	}
	float square1 = (maxX - minX) * yc / 2.0;
	float square2 = (maxX2 - minX2) * yc2 / 2.0;
	if (square1 > square2)
		cout << square1;
	else cout << square2;
}
void ege27::task6906()
{
	int n = 0;
	cin >> n;
	int maxX = 0;
	int minX = 1001;
	int maxY1 = 0;
	int maxY2 = 0;
	for (int i = 0; i < n; ++i)
	{
		int x = 0;
		int y = 0;
		cin >> x >> y;
		if (y == 0)
		{
			if (x < minX)
			{
				minX = 0 - x;
			}
			if (x > maxX)
			{
				maxX = 0 - x;
			}
		}
		else
		{
			if (y > 0 && y > maxY1)
				maxY1 = y;
			else if (y < 0 && abs(y) > maxY2)
				maxY2 = abs(y);
		}
	}
	double square1 = abs((maxX - minX) * maxY1 / 2.0);
	double square2 = abs((maxX - minX) * maxY2 / 2.0);
	cout << square1 + square2;
}
void ege27::task6436()
{
	int n = 0;
	cin >> n;
	int a[17];
	int b[17];
	for (int i = 0; i < 17; ++i)
	{
		a[i] = 0;
		b[i] = 0;
	}
	for(int i = 0; i < n; ++i)
	{
		auto pair = 0;
		cin >> pair;
		a[pair] += 1;
		b[pair] = pair;
	}
	for (int i = 0; i <= 17; ++i)
		for (int j = 0; j < 17; ++j)
			if (a[j] < a[j + 1])
			{
				swap(a[j], a[j + 1]);
				swap(b[j], b[j + 1]);
			}
	for (int i = 0; i < n; i++)
	{
		if (b[i] != 0)
			cout << b[i] << " " << a[i] << endl;
		else
			break;
	}
}
void ege27::task6792()
{
	int n = 0;
	cin >> n;
	int a[100];
	for (int i = 0; i < 100; ++i)
		a[i] = 0;
	for (int i = 0; i < n; ++i)
	{
		int k = 0;
		int s = 0;
		cin >> k >> s;
		int r = s % k;
		if (r != 0)
			a[r] += 1;
	}
	int max = 0;
	int maxIndex = 0;
	for (int i = 0; i < 100; ++i)
	{
		if (a[i] >= max)
		{
			max = a[i];
			maxIndex = i;
		}
	}
	cout << maxIndex;
}
void ege27::task13423()
{
	int n;
	cin >> n;
	int a[28];
	for (int i = 0; i < 28; ++i)
		a[i] = 0;
	while (n--)
	{
		int num;
		cin >> num;
		int k = 0;
		while (num > 0)
		{
			k += num % 10;
			num /= 10;
		}
		a[k] += 1;
	}
	int max = 0;
	int maxIndex = 0;
	for (int i = 0; i < 28; ++i)
	{
		if (a[i] > max)
		{
			maxIndex = i;
			max = a[i];
		}
	}
	cout << maxIndex;
}
void ege27::task7772()
{
	int n;
	cin >> n;
	int buffer[8];
	for(int i = 0; i < 8; ++i)
	{
		cin >> buffer[i];
	}
	int max = 0;
	int maxProd = 0;
	for (int i = 8; i < n; ++i)
	{
		int r = 0;
		cin >> r;
		if (buffer[0] > max)
			max = buffer[0];
		if (r * max > maxProd)
			maxProd = r * max;
		for (int j = 0; j < 7; ++j)
		{
				buffer[j] = buffer[j + 1];
		}
		buffer[7] = r;
	}
	cout << maxProd << endl;
}
void ege27::task8115()
{
	{
		int n;
		cin >> n;
		int buffer[6];
		for (int i = 0; i < 6; ++i)
		{
			cin >> buffer[i];
		}
		int max = 1000;
		int maxProd = 1000000;
		bool flag = 1;
		for (int i = 6; i < n; ++i)
		{
			int r = 0;
			cin >> r;
			if (buffer[0] < max && buffer[0] % 2 != 0)
				max = buffer[0];
			int curr = r * max;
			if (curr < maxProd && r % 2 != 0)
			{
				maxProd = curr;
				flag = 0;
			}
			for (int j = 0; j < 5; ++j)
			{
				buffer[j] = buffer[j + 1];
			}
			buffer[5] = r;
		}
		if (flag)
		{
			cout << -1;
		}
		else
			cout << maxProd << endl;
	}
}
void ege27::task15995()
{
	int n;
	cin >> n;
	int buffer[5];
	for (int &i : buffer)
	{
		cin >> i;
	}
	int ans = 0;
	int counter = 0;
	int counter13 = 0;
	for (int i = 5; i < n; ++i)
	{
		if (buffer[0] % 13 != 0)
			counter++;
		else
			counter13++;

		int num;
		cin >> num;
		if (num % 13 == 0)
			ans += counter + counter13;
		else
			ans += counter13;

		for (int j = 0; j < 4; ++j)
			buffer[j] = buffer[j + 1];
		buffer[4] = num;
	}
	cout << ans << endl;
}
void ege27::task17391()
{
	int n;
	cin >> n;
	int buffer[6];
	for (int i = 0; i < 6; ++i)
		cin >> buffer[i];

	int ans = 0;
	int counter2 = 0;
	int counter = 0;

	for (int i = 6; i < n; ++i)
	{
		if (buffer[0] % 2 == 0)
			counter2++;
		else 
			counter++;
		int num;
		cin >> num;
		if (num % 2 == 0)
			ans += counter2;
		else
			ans += counter;
		for (int j = 0; j < 5; ++j)
			buffer[j] = buffer[j + 1];
		buffer[5] = num;
	}
	cout << ans;
}
void ege27::task5375()
{
	int n = 0;
	cin >> n;
	int zero = 0;
	int minIndex = 0;
	int counter = 0;
	int min = 10000;
	for (int i = 1; i <= n; ++i)
	{
		int num = 0;
		cin >> num;
		if (num < 0)
		{
			counter++;
			if (abs(num) < min)
			{
				minIndex = i;
				min = abs(num);
			}
		}
		if (num == 0)
			zero = i;
	}
	for (int i = 1; i <= n; ++i)
	{
		if (i == zero || i == minIndex && counter % 2 != 0)
			continue;
		else
			cout << i << " ";
	}
}
void ege27::task7321()
{
	int n = 0;
	int t = 0;
	cin >> n;
	cin >> t;
	int ans = 0;
	int aTime = 0;
	for (int i = 0; i < n; ++i)
	{
		int a = 0;
		int b = 0;
		cin >> a >> b;
		aTime += a;
		if (aTime + t < ans + b)
		{
			ans = aTime + t;
			cout << a << endl;
		}
		else
		{
			ans += b;
			cout << b << endl;
		}
	}
	cout << ans << endl;
}
void ege27::task11363()
{
	int n = 0;
	cin >> n;
	int sum = 0;
	int min = 10000;
	for (int i = 0; i < n; ++i)
	{
		int a = 0;
		int b = 0;
		cin >> a >> b;
		if (a > b)
		{
			sum += a;
			if (a - b < min && (a - b) % 3 != 0)
				min = a - b;
		}
		else
		{
			sum += b;
			if (b - a < min && (b - a) % 3 != 0)
				min = b - a;
		}
	}
	if (sum % 3 == 0)
	{
		if (min == 10000)
		{
			cout << 0;
			return;
		}
		cout << sum- min;
		return;
	}
	cout << sum;
}
void ege27::task3628()
{
	int a = 0;
	int b = 0;
	int dif = 0;
	int count = 0;
	int max = 0;
	cin >> a;
	while (a != 0)
	{
		cin >> b;
		if (a < b)
		{
			dif += b - a;
		}
		else
		{
			if (dif > max)
				max = dif;
			dif = 0;
		}
		a = b;
		count++;
	}

	if (dif > max)
		max = dif;
	cout << count << " " << max;
}
void ege27::task27617()
{
	int s = 0, n = 0;
	while (s * s < 101) { s = s + 1; n = n + 2; }
	cout << n << endl;
	
}
void ege27::task27985()
{
	int n = 0;
	cin >> n;
	int max142 = 0;
	int max14 = 0;
	int max7 = 0;
	int max72 = 0;
	int max2 = 0;
	int max22 = 0;

	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		if (num % 14 == 0 && num > max142)
		{
			if (num > max14)
			{
				max142 = max14;
				max14 = num;
			}
			else
			{
				max142 = num;
			}
		}
		if (num % 7 == 0 && num % 2 != 0)
		{
			if (num > max7)
			{
				max72 = max7;
				max7 = num;
			}
			else if (num > max72)
			{
				max72 = num;
			}
		}
		if (num % 2 == 0 && num % 7 != 0)
		{
			if (num > max2)
			{
				max22 = max2;
				max2 = num;
			}
			else if (num > max22)
			{
				max22 = num;
			}
		}
	}

}