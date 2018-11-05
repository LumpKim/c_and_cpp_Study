//
// Created by 김재훈 on 05/11/2018.
//

#include <iostream>

using namespace std;

class Add {
private:
    int value;
public:
    Add(int i) {
        value = i;
    }
    void print(){
        cout << value << endl;
    }
    Add operator++();
};
Add Add:: operator++() {
    value += 10;
    return (*this);
}
int main() {
    Add a1(100), a2(200);
    a1.print();
    a2.print();
    ++a1;
    a2.operator++();
    a1.print();

    return 0;
}