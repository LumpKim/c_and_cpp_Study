//
// Created by 김재훈 on 29/10/2018.
//

// 생성자에 대해서 알아봅시당

#include <iostream>

using namespace std;

class student {
private:
    int id, score;
public:
    student() {
        id = 0;
        score = 0;
    }

    student(int i, int s) {
        id = 1;
        score = s;
    }

    void set(int i, int s) {
        id = i;
        score = s;
    }

    void print(){
        cout << id << " = " << score << endl; }
};


int main() {
    student s1;
    student s2(11301, 90);
    s1.print();
    s2.print();
    s1.set(11302, 95);
    s1.print();
    return 0;
}