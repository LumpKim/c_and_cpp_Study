//
// Created by 김재훈 on 24/10/2018.
//

/* 탐색: 데이터를 찾는 것
 * 효율적인 탐색을 위해서는 어떻게 찾을지보다 효율적인 탐색을 위한 저장방법을 우선 고민해야 한다.
 * 효율적인 탐색이 가능한 자료구조의 대표적인 예로는 트리가 있다.
 */

#include <stdio.h>

int LSearch(int ar[], int len, int target) {
    int i;
    for (i = 0; i < len; i++) {
        if (ar[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    // int arr[] = {7, 9, 3, 1, 5};
    int count, i, j, temp;

    printf("입력할 데이터의 갯수를 입력하세요.\n");
    scanf("%d", &count);
    int data[count];
    for (i = 0; i < count; i++)
    {
        printf("%d번째 데이터를 입력하세요.\n", i + 1);
        scanf("%d", &temp);
        printf("%d 입력 완료", temp);
        for (j = 0; j < sizeof(data)/sizeof(int); i++)
        {
            if ( data[j] == temp )
            {
                printf("중복된 데이터입니다.\n");
                temp = -1;
                break;
            }
        }
        if (temp != -1)
            data[i] = temp;
    }

    int idx;
    idx = LSearch(data, sizeof(data)/sizeof(int), 1);
    if (idx == -1)
        printf("탐색실패");
    else
        printf("1 값의 위치 = %d\n", idx);
    return 0;
}