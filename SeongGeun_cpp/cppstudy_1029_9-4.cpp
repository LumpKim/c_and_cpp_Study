//
// Created by 김재훈 on 29/10/2018.
//

#include <iostream>

using namespace std;

class student {
private:
    int id, score;
    char *name;
public:
    student(int size, const char str[]);

    void set(int i, int s) {
        id = i;
        score = s;
    }

    void print() {
        cout << id << name << score << endl;
    }
};

student::student(int size, const char str[]) {
    name = new char[size];
    for (int i = 0; i < size && str[i] != NULL; i++)
        name[i] = str[i];
}

int main() {
    student s1(8, "chulsoo");
    student s2(7, "soonee");
    s1.set(11031, 95);
    s2.set(11032, 80);
    s1.print();
    s2.print();
}