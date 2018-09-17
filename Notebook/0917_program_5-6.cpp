//
// Created by DSM2018 on 2018-09-17.
//

#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 9, c;
    a++;
    b++;
    cout << "a = " << a << " b = " << b << endl;
    a--;
    b--;
    cout << "a = " << a << " b = " << b << endl;

    ++a;
    ++b;
    cout << "a = " << a << " b = " << b << endl;
    c = a++;
    ++b;
    cout << "c = " << c << " b = " << b << endl;
}