//
// Created by 김재훈 on 26/11/2018.
//

#include <iostream>

using namespace std;

class Father
{
public:
    void Display()
    {
        cout << "I am your Father." << endl;
    }
};

class Son
{
public:
    void Display()
    {
        cout << "I am a Son." << endl;
    }
};

int main()
{
    Father *pSon = new Son;     // virtual 없는 상향변환, pSon은 Father 멤버함수에 접근
    pSon->Display();            // "I am your Father."
    pSon->Father::Display();    // "I am your Father."
}