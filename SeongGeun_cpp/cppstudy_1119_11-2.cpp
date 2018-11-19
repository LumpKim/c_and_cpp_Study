//
// Created by 김재훈 on 19/11/2018.
//

#include <iostream>

using namespace std;

class Bird {
public:
    Bird(int weight = 2) : itsWeight(weight) {
        cout << "Bird constructor ..." << endl;
    }
    ~Bird() {
        cout << "Bird destructor ..." << endl;
    }
    int GetWeight() const {
        return itsWeight;
    }
    void Fly() const {
        cout << "Bird can fly!" << endl;
    }

protected:
    int itsWeight;
};

class Swan : protected Bird {
public:
    Swan (int weight = 5, string color = "WHITE") : Bird(weight), itsColor(color) {
        cout << "Swan constructor ...\n";
    }
    ~Swan() {
        cout << "Swan destructor ...\n";
    }
    string GetColor() const {
        return itsColor;
    }
    void Swim() const {
        cout << "Swan can swim!" << endl;
    }
    void SwanFly() const {
        cout << "(Swan: protected inheritance)";
        Fly();
    }

private:
    string itsColor;
};

class LittleSwan: protected Swan {
public:
    LittleSwan(int weight=1, string color = "YELLOW") : Swan(weight, color) {
        cout << "LittleSwan constructor ...\n";
    }
    ~LittleSwan() {
        cout << "LittleSwan destructor ...\n";
    }
    void LittleSwanFly() const {
        cout << "(LittleSwan: protected inheritance)";
        Fly();
    }
};

int main() {
    Swan cygnus;
    LittleSwan cygnet;

    cygnus.SwanFly();
    cygnus.Swim();
    cygnet.LittleSwanFly();
}