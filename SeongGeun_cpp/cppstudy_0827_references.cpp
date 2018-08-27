#include "stdafx.h"
#include <iostream>

using namespace std;

void main() {
	int data = 100;
	int &rdata = data;

	cout << "data = " << data << endl << "rdata = " << rdata << endl;
	cout << "data& = " << &data << "rdata& = " << &rdata << endl;
}