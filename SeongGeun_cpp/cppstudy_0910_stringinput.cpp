#include "stdafx.h"
#include <iostream>
using namespace std;

#define SizeName 10

const int SizeAdd = 20;
int main() {
	char name[SizeName];
	char address[SizeName];
	cout << "이름은: ";
	cin >> name;
	cout << "주소는: ";
	cin >> address;
	cout << "이름은 " << name << "이고," << endl;
	cout << "주소는 " << address << "입니다." << endl;
}