//
// Created by 김재훈 on 22/10/2018.
//

#include <iostream>

using namespace std;
class student
{
    public:
        char *name;
        int english, math, computer;
        void set(){
            name = "gildong";
            english = 95;
            math = 85;
            computer = 90;
        }
        void print(){
            cout << "name: " << name << endl;
            cout << "english: " << english << endl;
            cout << "math: " << math << endl;
            cout << "computer: " << computer << endl;
        }
};
int main(){
    student s1;
    s1.set();
    s1.print();
}