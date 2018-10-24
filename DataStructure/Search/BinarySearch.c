//
// Created by 김재훈 on 24/10/2018.
//

#include <stdio.h>

int BSearch(int ar[], int len, int target) {
    int first = 0;
    int last = len - 1;
    int mid;

    while (first <= last) {
        mid = (first + last) / 2;
        if (target == ar[mid]) {
            return mid;
        } else {
            if (target < ar[mid]) {
                last = mid - 1;
            } else {
                first = mid + 1;
            }
        }
    }
    return -1;
}

int main() {
    int target, afx;
    int array[] = {1, 3, 5, 7, 9};

    printf("찾을 숫자 입력\n");
    scanf("%d", &target);

    afx = BSearch(array, sizeof(array) / sizeof(int), target);
    if (afx == -1) {
        printf("값을 찾지 못함");
    } else {
        printf("찾기 성공");
    }
}