//
// Created by 김재훈 on 12/11/2018.
//

#include <iostream>

using namespace std;

class AAA {
    int value;

    friend class BBB;

public:
    AAA(int v) {
        value = v;
    }

    void Show() {
        cout << value << endl;
    }
};

class BBB {
public:
    int Initial(AAA a1) {
        return a1.value;
    }
};

int main() {
    AAA aa1(10);
    BBB bb1;

    cout << bb1.Initial(aa1) << endl;
    aa1.Show();
}