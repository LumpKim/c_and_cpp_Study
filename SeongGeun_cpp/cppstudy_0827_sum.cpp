#include "stdafx.h"
#include <iostream>
using namespace std;
int sum(int x, int y);

void main() {
	int input1, input2;
	int output;

	cout << "���� �� ���� �Է��ϼ���\n";
	cin >> input1 >> input2;
	output = sum(input1, input2);
	cout << "���: " << output << endl;
}

int sum(int x, int y) {
	int z;
	z = x + y;
	return(z);
}