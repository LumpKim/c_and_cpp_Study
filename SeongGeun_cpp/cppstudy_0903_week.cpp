#include "stdafx.h"
#include <iostream>
using namespace std;

void main() {
	unsigned short int Day;
	enum Week { Mon, Tue, Wed, Thu, Fri, Sat, Sun };
	Week Weekend;
	cout << "Week : Mon_0, Tue_1, Wed_2, Thu_3, Fri_4, Sat_5, Sun_6 \n";
	cout << "Weekend : Sat_5, Sun_6" << endl;
	cout << "주말은 : ";
	cin >> Day;
	Weekend = (Week)Day;
	if ((Weekend == Sat) || (Weekend == Sun))
		cout << "주말입니다" << endl;
	else
		cout << "주말이 아닙니다" << endl;
}