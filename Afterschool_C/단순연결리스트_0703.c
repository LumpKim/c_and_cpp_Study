//
// Created by DSM2018 on 2018-07-10.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct A {
	int data;
	struct A* link;
};

typedef struct A Node;
Node* head = NULL;

void append() {
	Node* newnode = (Node*)malloc(sizeof(Node));
	int input;
	system("cls");

	scanf_s("%d", &input);
	newnode->data = input;
	newnode->link = head;
	head = newnode;
	system("pause");
}

void print() {
	system("cls");
	Node* p = head;
	while (p != NULL)
	{
		printf("%d ->  ", p->data);
		p = p->link;
	}
	printf("\n\n");
	system("pause");
}

int del() {
	if (head == NULL) {
		system("cls");
		puts("데이터가 없습니다.");
		system("pause");
		return 0;
	}
	Node* p = head;
	head = head->link;
	system("cls");
	printf("%d(이)가 삭제되었습니다.\n", p->data);
	system("pause");
	free(p);
	return 0;
}

void append2() { 		// 비교해서 오름차순으로 정렬하는 함수

	Node* newnode = (Node*)malloc(sizeof(Node));
	int input;
	Node* curr = head;
	Node* before = NULL;

	system("cls");

	scanf_s("%d", &input);

	newnode->data = input;

	while (curr && curr->data < input) {
		before = curr;
		curr = curr->link;
	}

	if (before != NULL) {
		before->link = newnode;
		newnode->link = curr;
	}
	else {
		newnode->link = curr;
		head = newnode;
	}
}

int main() {
	int input = 1;

	while (input != 0) {
		system("cls");
		printf("기능을 선택하세요.\n");
		printf("1. 삽입\n");
		printf("2. 프린트\n");
		printf("3. 삭제\n");
		puts("0. 종료");
		scanf_s("%d", &input);
		switch (input) {
		case 1: append2();	break;
		case 2: print();	break;
		case 3: del();	break;
		default: break;
		}
	}
}