//
// Created by 김재훈 on 22/10/2018.
//

#include <iostream>

using namespace std;

struct grade {
    char *name;
    int english, math, computer;
};

int main() {
    grade s1;
    grade *p_s1 = &s1;

    p_s1->name = "gildong";
    (*p_s1).english = 95;
    p_s1->math = 85;
    s1.computer = 90;

    cout << "name : " << p_s1->name << endl;
    cout << "english : " << p_s1->english << endl;
    cout << "math : " << p_s1->math << endl;
    cout << "computer : " << p_s1->computer << endl;

    return 0;
}

