#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int ion = 0;
	cout << "�ڸ� ��ġ ����\n";
	cout.setf(ios::showpos);	// + ��ȣ ���
	cout.setf(ios::right, ios::adjustfield);
	cout.setf(ios::showpoint);
	while (ion < 3) {
		cout.width(8);
		cout << ++ion << endl;
	}
	cout << "---------------------------------\n";
	cout.setf(ios::scientific, ios::adjustfield);
	while (ion > 0) {
		cout.width(8);
		cout << ion-- << endl;
	}
	cout << "---------------------------------\n";
	cout.setf(ios::internal, ios::adjustfield);
	while (ion < 3) {
		cout.width(8);
		cout << ++ion << endl;
	}
	cout << "---------------------------------\n";
}