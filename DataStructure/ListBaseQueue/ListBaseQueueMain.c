//
// Created by 김재훈 on 27/11/2018.
//

#include <stdio.h>
#include "ListBaseQueue.h"

int main() {
    // 큐의 생성 및 초기화
    Queue q;
    QueueInit(&q);

    Enqueue(&q, 1); Enqueue(&q, 2);
    Enqueue(&q, 3); Enqueue(&q, 4);
    Enqueue(&q, 5);

    while(!QIsEmpty(&q))
        printf("%d ", Dequeue(&q));

    return 0;
}