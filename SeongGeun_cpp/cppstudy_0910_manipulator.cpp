#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int x = 12;
	int y = 1234;
	cout << "10진수: " << dec << x << endl;
	cout << "8진수: " << oct << x << endl;
	cout << "16진수: " << hex << x << endl;
	cout << endl;
	cout << "1234567890" << endl;
	cout << dec << y << endl;
	cout << setw(10) << y << endl;
}