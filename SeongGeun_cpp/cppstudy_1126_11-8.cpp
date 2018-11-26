//
// Created by 김재훈 on 26/11/2018.
//

/* 가상함수를 이용한 다형성*/

#include <iostream>

using namespace std;

class Alphabet {
public:
    Alphabet(int order = 0) : itsOrder(order) {}
    virtual ~Alphabet() {
        cout << "Base 소멸자.." << endl;
    }
    virtual void Print() const {
        cout << "Alphabet ABC ... " << endl;
    }
    void GetOrder() const {
        cout << "Order: " << itsOrder << ", ";
    }

protected:
    int itsOrder;
};

class LetterA : public Alphabet {
public:
    LetterA() : public Alphabet(1) {}
    virtual ~LetterA() {
        cout << "LetterA 소멸자.. " << endl;
    }
    virtual void Print() const {
        cout << "Letter A..." << endl;
    }
};

class LetterB : public Alphabet {
public:
    LetterB() : Alphabet(2) {}
    virtual ~LetterB() {
        cout << "LetterB 소멸자.." << endl;
    }
    virtual void Print() const {
        cout << "Letter B..." << endl;
    }
};

class LetterC : public Alphabet {
public:
    LetterC() : Alphabet(3) {}
    virtual ~LetterC() {
        cout << "LetterC 소멸자.." << endl;
    }
    virtual void Print() const {
        cout << "Letter C..." << endl;
    }
};
