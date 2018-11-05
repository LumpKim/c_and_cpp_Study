//
// Created by 김재훈 on 05/11/2018.
//

#include <iostream>

using namespace std;

class student {
private:
    int id, score;
public:
    student(int i, int s) : id(i), score(s) {}     // 초기화
    // student(int i, int s) { id = i, score = s; }    // 초기화(위와 동일)
    student up_score() {
        score = score + 5;
        return *this;
    }

    student down_score() {
        score = score - 5;
        return *this;
    }

    void *address() {
        return this;
    }

    void print() {
        cout << id << "=" << score << "\t";
    }
};

int main() {
    student s1(11031, 90), s2(11032, 90), s3(11033, 90);
    s1.print();
    cout << "at\t" << s1.address() << endl;
    s2.up_score().print();
    cout << "at\t" << s2.address() << endl;
    s3.down_score().print();
    cout << "at\t" << s3.address() << endl;

    return 0;
}