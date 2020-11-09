#include"olimp.h"
#include<iostream>
#include<string>
using namespace std;

const short int nul = 48;

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
short int maximum(short int a, short int b)
{
	if (a > b)
		return a;
	return b;
}
void olimp::zA()
{
	string a = "", b = "";
	cin >> a >> b;
	short int lena = a.size();
	short int lenb = b.size();
	short int r = abs(lena - lenb);
	short int max = maximum(lena, lenb);
	if (max = lena)
	{
		for (short int i = 0; i < r; ++i)
		{
			b = '0' + b;
		}
	}
	else
	{
		for (short int i = 0; i < r; ++i)
		{
			a = '0' + a;
		}
	}
	string c = "";
	short int q = 0;
	for (short int i = max - 1; i >= 0; --i)
	{
		short int num1 = CharToInt(a[i]);
		short int num2 = CharToInt(b[i]);
		short int sum = num1 + num2;
		if (sum > 9)
		{
			sum = sum - 9 + q;
			c.push_back(IntToChar(sum));
			q = '1';
		}
		else 
		{
			c.push_back(IntToChar(sum));
			q = '0';
		}
	}
	for (short int i = max - 1; i >= 0; --i)
	{
		cout << c[i];
	}
}
