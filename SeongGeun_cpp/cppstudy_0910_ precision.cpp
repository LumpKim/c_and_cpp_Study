#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	float x = 12.30;
	float y = 10.0 + 2.0 / 3.0;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout.precision(4);
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}