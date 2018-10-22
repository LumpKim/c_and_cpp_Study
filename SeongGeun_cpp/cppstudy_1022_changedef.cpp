//
// Created by 김재훈 on 22/10/2018.
//

#include <iostream>
#include "stdafx.h"

using namespace std;

void change(int, int&);

int main() {
    int a, b;
    a = 1; b = 10;
    change(a, b);
    cout << a << endl << b << endl;
}

void change(int x, int& y){
    int t;
    t = x;
    x = y;
    y = t;
}