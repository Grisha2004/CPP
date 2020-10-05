#include "ege24.h"
#include <string>
#include <iostream>

using namespace std;

void ege24::task27421()
{
	string s = "xyxyxyxyxxxzzzzxyxyz";

	s[0] = 'a';

	cout << s.length();
}