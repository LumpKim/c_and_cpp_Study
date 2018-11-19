//
// Created by 김재훈 on 19/11/2018.
//

#include <iostream>

using namespace std;

class Bird {
public:
    Bird() : itsWeight(2) {
        cout << "Bird(): 디폴트 생성자 ..." << endl;
    }

    Bird(int weight) : itsWeight(weight) {
            cout << "Bird(int): 생성자 중복" << endl;
    }

    ~Bird() {}

    int GetWeight() const {
        return itsWeight;
    }

protected:
    int itsWeight;
};

class Swan : public Bird {
public:
    Swan();

    Swan(string color) : Bird(), itsColor(color) {
        cout << "Swan(char *): 생성자 중복 ...\n";
    }

    Swan(int weight, string color) : Bird(weight), itsColor(color) {
        cout << "Swan(int, char*): 생성자 중복 ...\n";
    }

    ~Swan() {}

    string GetColor() const {
        return itsColor;
    }

private:
    string itsColor;
};

Swan::Swan() : itsColor("WHITE") {
    cout << "Swan(): 디폴트 생성자 ..." << endl;
}

int main() {
    Swan cygnus;
    cout << "cygnus weight: " << cygnus.GetWeight() << endl;
    cout << "cygnus color: " << cygnus.GetColor() << endl << endl;
    Swan cygnet("YELLOW");
    cout << "cygnet weight: " << cygnus.GetWeight() << endl;
    cout << "cygnet color: " << cygnus.GetColor() << endl << endl;
    Swan cob(7, "BROWN");
    cout << "cob weight: " << cob.GetWeight() << endl;
    cout << "cob color: " << cob.GetColor() << endl << endl;
    return 0;
}