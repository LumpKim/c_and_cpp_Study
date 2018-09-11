#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	const int Length = 30;
	char name[Length];
	char address[Length];
	cout << "이름은: ";
	cin.getline(name, Length);
	cout << "주소는: ";
	cin.getline(address, Length);
	cout << "나의 이름은 " << name << "입니다.\n";
	cout << "그리고, " << address << "에 살고 있습니다. \n";
}