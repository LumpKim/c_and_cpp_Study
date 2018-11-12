//
// Created by 김재훈 on 12/11/2018.
//

#include <iostream>

using namespace std;

class Add {
private:
    int value;
public:
    Add() {
        value = 0;
    }

    Add(int i) {
        value = i;
    }

    friend int Plus(Add p1);
};

int Plus(Add p1) {
    int sum;
    sum = p1.value + 100;
    return sum;
}

int main() {
    Add aaa;
    Add bbb(200);

    cout << "aaa: " << Plus(aaa) << endl;
    cout << "bbb: " << Plus(bbb) << endl;
}