//
// Created by 김재훈 on 15/10/2018.
//

#include <iostream>

using namespace std;

void op_func(int x, int y);

void main(){
    int x, y;
    x = 32, y = 45;

    cout << "호출하기 전의 x, y값 x = " << x << "y = " << y << endl;
    op_func(x, y);

    cout << "호출한 후의 x, y값 : x = " << x << "y = " << y << endl;
}

void op_func(int x, int y){
    x += 5;
    y -= 5;
    cout << "호출함수 내의 연산결과 : x = ", << x << "y = " << y << endl;
}