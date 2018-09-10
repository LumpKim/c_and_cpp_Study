#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	float x = 12.30;
	float y = 10.0 + 2.0 / 3.0;
	cout.setf(ios::showpoint);		// 0À» ³ªÅ¸³¿
	cout << "x = " << x << endl;	// 12.3000
	cout << "y = " << y << endl;	// 10.6667
	cout.precision(4);
	cout << "x = " << x << endl;	// 12.30
	cout << "y = " << y << endl;	// 10.67
}