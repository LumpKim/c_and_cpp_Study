//
// Created by 김재훈 on 04/12/2018.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "CircularQueue.h"

#define CUS_COME_TERM   15  // 고객의 주문 간격: 초 단위

#define CHE_BUR     0   // 치즈버거 상수
#define BUL_BUR     1   // 불고기버거 상수
#define DUB_BUR     2   // 더블버거 상수

#define CHE_TERM    12
#define BUL_TERM    15
#define DUB_TERM    24

int main() {
    int makeProc = 0;   // 햄버거 제작 진행상황
    int cheese_Order = 0, bulgogi_Order = 0, double_Order = 0;
    int sec;

    Queue que;

    QueueInit(&que);
    srand(time(NULL));

    for(sec = 0; sec < 3600; sec++) {
        if(sec % CUS_COME_TERM == 0) {
            switch(rand() % 3) {
                case CHE_BUR:
                    Enqueue(&que, CHE_TERM);
                    cheese_Order += 1;
                    break;

                case BUL_BUR:
                    Enqueue(&que, BUL_TERM);
                    bulgogi_Order += 1;
                    break;

                case DUB_BUR:
                    Enqueue(&que, DUB_TERM);
                    double_Order += 1;
                    break;
            }
        }

        if(makeProc <= 0 && !QIsEmpty(&que))
            makeProc = Dequeue(&que);

        makeProc--;
    }

    printf("시뮬레이션 결과! \n");
    printf(" - 치즈버거: %d \n", cheese_Order);
    printf(" - 불고기버거: %d \n", bulgogi_Order);
    printf(" - 더블버거: %d \n", double_Order);
    printf(" - 대기실 크기: %d \n", QUE_LEN);

    return 0;
}