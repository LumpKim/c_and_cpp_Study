//
// Created by DSM2018 on 2018-07-17.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct customer LIST;
LIST* head = NULL;

struct customer {
	int limit;
	int number;
	char address[50];
	char name[30];
	char grade[10];
	struct customer *link;
};

void insert();
void delete();
void lineup();
void output();

void main() {
	int input = 1;

	while (input != 0) {
		puts("환영합니다. 먼저 기능을 선택하십시오.");
		puts("1. 삽입\n");
		puts("2. 출력\n");
		puts("3. 삭제\n");
		puts("0. 종료\n");

		scanf_s("%d", &input);
		switch (input) {
		case 1:
			insert();
			break;

		case 2:
			output();
			break;

		case 3:
			delete();
			break;

		default:
			input = 0;
			break;
		}
	}
}

void insert() {

	LIST* NewValue = (LIST*)malloc(sizeof(LIST));
	LIST* curr = head;
	LIST* before = NULL;
	system("cls");

	printf("고객님의 카드 한도를 입력하세요.(단위: 만 원)");
	scanf_s("%d", &(NewValue->limit));
	printf("고객님의 고객 번호를 입력하세요.");
	scanf_s("%d", &(NewValue->number));
	printf("고객님의 현재 거주지를 입력하세요.(띄어쓰기 제외)");
	fgets(NewValue->address, sizeof(NewValue->address), stdin);
	printf("고객님의 성함을 입력하세요.");
	fgets(NewValue->name, sizeof(NewValue->name), stdin);
	printf("고객님의 회원 등급을 입력하세요.");
	fgets(NewValue->grade, sizeof(NewValue->grade), stdin);

}
