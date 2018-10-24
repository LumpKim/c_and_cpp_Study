//
// Created by 김재훈 on 24/10/2018.
//

#include <stdio.h>

int ISearch(int ar[], int first, int last, int target) {

    int mid = (double)(target - ar[first]) / (ar[last] - ar[first]) * (last - first) + first;

    if(first > last)
        return -1;
    else if (ar[mid] == target)
        return mid;
    else if (target < ar[mid])
        return ISearch(ar, first, mid - 1, target);
    else
        return ISearch(ar, mid + 1, last, target);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int idx, input;

    printf("찾을 값 입력: ");
    scanf("%d", &input);
    idx = ISearch(arr, 0, sizeof(arr)/sizeof(int)-1, input);

    if (idx == -1)
        printf("탐색 실패\n");
    else
        printf("탐색 성공. 타겟 저장 인덱스: %d \n", idx);
}