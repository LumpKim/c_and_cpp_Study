//
// Created by DSM2018 on 2018-09-17.
//

#include <iostream>

using namespace std;

void main() {
    int w, x, y;
    w = 10;
    x = 15;
    w = w < x || (3 + 2 != 5);
    x = !w;
    y = x && 7 >= 5;
    cout << "w°ª = " << w << "    x°ª = " << x << "    y°ª = " << y << endl;
}