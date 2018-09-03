#include "stdafx.h"
#include <iostream>

#define size_d 100
using namespace std;

const int size_c = 200;
void main() {
	int x = 2, yd;
	yd = x * size_d;
	cout << "yd = " << yd << endl;

	int yc;
	yc = x * size_c;
	cout << "yc =" << yc << endl;
}