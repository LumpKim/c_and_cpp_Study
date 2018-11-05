//
// Created by 김재훈 on 05/11/2018.
//

#include <iostream>

using namespace std;

class integer {
private:
    int data;
public:
    integer() {
        data = 0;
    }

    integer(int value) {
        data = value;
    }

    void print() {
        cout << data << endl;
    }
};

int main() {
    integer data1;
    integer data2;
    int data = 3;
    data1 = integer(data);  // 명시적 형변환의 예시
    data2 = data;           // 암묵적 형변환의 예시
    data1.print();
    data2.print();
}