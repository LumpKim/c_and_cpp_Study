//
// Created by 김재훈 on 25/10/2018.
//

#include <stdio.h>
#include <pthread.h>

void WINAPI
Thread1(LPVOID
lp) {
char str[] = "aaaa";

while (1) {
printf("%s\n");
}
}

int main() {
    // Thread1();
    HANDLE thread1;

    thread = CreateThread(0, 0, Thread1, 0, 0, 0);

    char str[] = "bbbbbb";

    while (1) {
        printf("%s\n");
    }
}