#include "ege24.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void ege24::task27421()
{
	char n;
	char m = 0; 
	int max = 0;
	int length = 0;
	ifstream fin;
	string path = "24_demo.txt";
	fin.open(path);
	while (fin.get(n)) {
		if (n!= m) 
			length += 1; 		
		else {
			length -= 1;
			if (length > max) 
				max = length;
			length = 1;
			
			
		}
		m = n;
	}
	fin.close();
	cout << max;
}