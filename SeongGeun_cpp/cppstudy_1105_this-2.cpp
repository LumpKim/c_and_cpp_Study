//
// Created by 김재훈 on 05/11/2018.
//
// 1. id = 3인 객체를 생성한다.
// 2. this를 사용해서 id를 출력한다.
//

#include <iostream>

using namespace std;

class WhoAmI {
    int id = 3;
public:
    WhoAmI(int id) {
        this->id = id;
    }

    void ShowYourself() const{
        cout << "ID = " << id << ", this = " << this->id << endl;
    }
};

int main() {
    WhoAmI s1(3);
    s1.ShowYourself();

    return 0;
}