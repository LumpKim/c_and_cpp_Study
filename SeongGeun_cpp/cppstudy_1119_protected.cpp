//
// Created by 김재훈 on 19/11/2018.
//
// 접근 제어권 정리
// 1. 멤버 접근
// - 공용 멤버: 멤버함수, 객체를 통해 접근 가능
// - 보호 멤버: 멤버함수로만 접근가능, 객체로는 접근 불가
// - 전용 멤버: 자신의 멤버함수로만 접근 가능
// 2. 상속
// - 공용 상속: 베이스클래스의 공유 및 보호멤버는 자식클래스에 그대로 전달
// - 보호 상속: 베이스클래스의 공유 및 보호멤버는 자식클래스에 보호멤버로 전달되므로
//            자식클래스에서 한 번 더 상속된 클래스는 최초의 베이스클래스 멤버에 접근 불가
// 접근 제어 가이드라인
// - 외부로부터 숨겨야 하는 멤버는 protected로 지정한다.
// - 그 밖의 경우는 public으로 지정한다.
// - 반드시 자식 클래스에 숨기고 싶다면 private로 지정한다.

// 22-8

#include <iostream>

using namespace std;

class Parent {
private:
    int priv = 1;
protected:
    int prot = 2;
public:
    int pub = 3;
};

class Child : public Parent {
public:
    void AccessParents() {
        int n;

        // n = priv;
        // n = prot;
        n = pub;
    }
};

int main() {
    Parent pa;
    int n;

    // n = pa.priv;
    // n = pa.prot;
    n = pa.pub;     // 객체를 통해서는 public만 접근 가능
    cout << n << endl;

    return 0;
}