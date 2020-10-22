#include "ege27.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void ege27::task27424()
{
	ifstream fin;
	string path = "27-A_demo.txt";
	int gotten = 0;
	fin.open(path);
	while (!fin.eof())
	{
		int n;
		fin.get() >> n;
		cout << n;
	}
	fin.close();
}