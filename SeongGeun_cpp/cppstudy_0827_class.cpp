// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
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

/* 클래스
#include "stdafx.h"
using namespace std;

void main()
{
int a;
cout << "원하는 수를 입력하세요";
cin >> a;
cout << a;
} */

// 2 - 2 클래스
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