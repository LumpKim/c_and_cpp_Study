#include "stdafx.h"
#include <iostream>
using namespace std;

#define SizeName 10

const int SizeAdd = 20;
int main() {
	char name[SizeName];
	char address[SizeName];
	cout << "�̸���: ";
	cin >> name;
	cout << "�ּҴ�: ";
	cin >> address;
	cout << "�̸��� " << name << "�̰�," << endl;
	cout << "�ּҴ� " << address << "�Դϴ�." << endl;
}