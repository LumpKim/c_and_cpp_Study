//
// Created by 김재훈 on 05/11/2018.
//

#include <iostream>

using namespace std;

class student
{
private:
    int id;
    float score;
public:
    student(int i, float s)
    {
        id = i;
        score = s;
    }

    void print()
    {
        cout << id << " = " << score << endl;
    }

    operator int()
    {
        return ((int)score);
    }
};

int main()
{
    student s1(11031, 95.4), s2(11055, 88.7);
    s1.print();
    cout << int(s1) << endl;
    cout << int(s2) << endl;
}