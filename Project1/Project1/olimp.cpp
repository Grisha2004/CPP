#include"olimp.h"
#include<iostream>
#include<string>
using namespace std;

const short int nul = 48;

short int maximum(short int a, short int b)
{
	if (a > b)
		return a;
	return b;
}
short int CharToInt(char n)
{
	short int number = int(n) - nul;
	return number;
}
char IntToChar(short int sum)
{
	char number = nul + sum;
	return number;
}

//void dif(string a, string b)
//{
//	short int lena = a.size();
//	short int lenb = b.size();
//	short int r = abs(lena - lenb);
//	short int max = maximum(lena, lenb);
//	short int i = lena - 1;
//	short int j = lenb - 1;
//	bool q = 0;
//	string c = "";
//	if (lena > lenb) {
//		while (a[i] != '-' || b[j] != '-')
//		{
//			short int num1 = CharToInt(a[i]);
//			short int num2 = CharToInt(b[j]);
//			short int dif = 0;
//			if (num1 > num2)
//			{
//				dif = num1 - num2;
//				c.push_back(IntToChar(dif));
//				q = 0;
//			}
//			else
//			{
//				dif = num1 + 10 - num2;
//				c.push_back(IntToChar(dif));
//				q = 1;
//			}
//			--i; --j;
//		}
//		if (q)
//		{
//			a[i] = IntToChar(CharToInt(a[i] - q));
//		}
//		for (short int k = i; k >= 0; --k)
//		{
//			c.push_back(CharToInt(a[k]));
//		}
//		if (a[0] = '-')
//			c.push_back('-');
//	}
//	else
//	{
//		while (a[i] != '-' || b[j] != '-')
//		{
//			short int num1 = CharToInt(a[j]);
//			short int num2 = CharToInt(b[i]);
//			short int dif = 0;
//			if (num1 > num2)
//			{
//				dif = num1 - num2;
//				c.push_back(IntToChar(dif));
//				q = 0;
//			}
//			else
//			{
//				dif = num1 + 10 - num2;
//				c.push_back(IntToChar(dif));
//				q = 1;
//			}
//			--i; --j;
//		}
//		if (q)
//		{
//			a[i] = IntToChar(CharToInt(a[i] - q));
//		}
//		for (short int k = i; k >= 0; --k)
//		{
//			c.push_back(CharToInt(a[k]));
//		}
//		if (a[0] = '-')
//			c.push_back('-');
//	}
//	if (max = lena)
//	{
//		if (q)
//		{
//			a[i] = IntToChar(CharToInt(a[i] - q));
//		}
//		for (short int k = i; k >= 0; --k)
//		{
//			c.push_back(CharToInt(a[k]));
//		}
//		if (a[0] = '-')
//			c.push_back('-');
//	}
//	else
//	{
//
//	}
//}

//void Sum(string a, string b)
//{
//	short int lena = a.size();
//	short int lenb = b.size();
//	short int r = abs(lena - lenb);
//	short int max = maximum(lena, lenb);
//	if (max = lena)
//	{
//		for (short int i = 0; i < r; ++i)
//		{
//			b = '0' + b;
//		}
//	}
//	else
//	{
//		for (short int i = 0; i < r; ++i)
//		{
//			a = '0' + a;
//		}
//	}
//	string c = "";
//	short int q = 0;
//	for (short int i = max - 1; i >= 0; --i)
//	{
//		short int num1 = CharToInt(a[i]);
//		short int num2 = CharToInt(b[i]);
//		short int sum = num1 + num2;
//		if (sum > 9)
//		{
//			sum = sum - 9 + q;
//			c.push_back(IntToChar(sum));
//			q = 1;
//		}
//		else
//		{
//			c.push_back(IntToChar(sum));
//			q = 1;
//		}
//	}
//	for (short int i = max - 1; i >= 0; --i)
//	{
//		cout << c[i];
//	}
//}
//
//void olimp::zA()
//{
//	string a = "", b = "";
//	cin >> a >> b;
//	//short int lena = a.size();
//	//short int lenb = b.size();
//	//short int r = abs(lena - lenb);
//	//short int max = maximum(lena, lenb);
//	if (a[0] != '-' && b[0] != '-')
//	{
//		Sum(a, b);
//	}
//	else
//		dif(a, b);
	//if (max = lena)
	//{
	//	for (short int i = 0; i < r; ++i)
	//	{
	//		b = '0' + b;
	//	}
	//}
	//else
	//{
	//	for (short int i = 0; i < r; ++i)
	//	{
	//		a = '0' + a;
	//	}
	//}
	//string c = "";
	//short int q = 0;
	//for (short int i = max - 1; i >= 0; --i)
	//{
	//	short int num1 = CharToInt(a[i]);
	//	short int num2 = CharToInt(b[i]);
	//	short int sum = num1 + num2;
	//	if (sum > 9)
	//	{
	//		sum = sum - 9 + q;
	//		c.push_back(IntToChar(sum));
	//		q = '1';
	//	}
	//	else 
	//	{
	//		c.push_back(IntToChar(sum));
	//		q = '0';
	//	}
	//}
	//for (short int i = max - 1; i >= 0; --i)
	//{
	//	cout << c[i];
	//}
//}
