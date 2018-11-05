//
// Created by 김재훈 on 05/11/2018.
//

#include <iostream>

using namespace std;

class WhoAmI {
public:
    int id;

    WhoAmI(int id_arg);

    void ShowYourself() const;
};

WhoAmI::WhoAmI(int id_arg) {
    id = id_arg;
}

void WhoAmI::ShowYourself() const {     // const 는 보통 함수에 매개변수가 없을 때 활용
    cout << "{ID = " << id << ", this = " << this << "}\n";
}

int main() {
    // 세 개의 객체를 만든다.
    WhoAmI obj1(1);
    WhoAmI obj2(2);
    WhoAmI obj3(3);

    // 객체들의 정보를 출력한다.
    obj1.ShowYourself();
    obj2.ShowYourself();
    obj3.ShowYourself();

    // 객체들의 주소를 출력한다.
    cout << "&obj1 = " << &obj1 << "\n";
    cout << "&obj2 = " << &obj2 << "\n";
    cout << "&obj3 = " << &obj3 << "\n";

    return 0;
}