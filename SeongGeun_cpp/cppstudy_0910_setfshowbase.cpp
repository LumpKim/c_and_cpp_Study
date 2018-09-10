#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int ion = 30;
	cout << "the number of ion: ";
	cout.setf(ios::showpos);
	cout << ion << endl;
	cout << "16진수 사용 \n";
	cout << hex << ion << endl;
	cout.setf(ios::uppercase);
	cout << ion << endl;
	cout.setf(ios::showbase);
	cout << ion << endl;

}