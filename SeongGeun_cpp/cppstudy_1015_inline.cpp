//
// Created by 김재훈 on 15/10/2018.
//

#include <iostream>

using namespace std;

inline fload area(float x, float y) {
    return x * y;
}

int main() {
    float result1, result2;

    result1 = area(9.2, 4.5);
    result2 = area(2.5, 12.5);

    cout << "첫 번째 사각형의 넓이: " << result1;
    cout << "두 번째 사각형의 넓이: " << result2;

    return 0;
}