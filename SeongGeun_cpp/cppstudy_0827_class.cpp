// ConsoleApplication3.cpp: �ܼ� ���� ���α׷��� �������� �����մϴ�.
//

/* 2-1
#include "stdafx.h"
using namespace std;

void main()
{
int a = 10; float b = 2.5;
char c = 'e';
cout << a << '\n' << b << "\n" << c << "\n";
}
*/

/* Ŭ����
#include "stdafx.h"
using namespace std;

void main()
{
int a;
cout << "���ϴ� ���� �Է��ϼ���";
cin >> a;
cout << a;
} */

// 2 - 2 Ŭ����
#include "stdafx.h"
using namespace std;

class person {
	int man, woman, sum;
public:
	void itset(int a, int b);
	int itsum();
};

void person::itset(int a, int b) {
	man = a;
	woman = b;
}
int person::itsum() {
	sum = man + woman;
	return sum;
}

void main() {
	person p1, p2;
	p1.itset(2, 3);
	p2.itset(20, 30);
	cout << " sum1=" << p1.itsum() << "\n sum2=" << p2.itsum() << "\n";
}