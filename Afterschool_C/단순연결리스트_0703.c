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
		puts("�����Ͱ� �����ϴ�.");
		system("pause");
		return 0;
	}
	Node* p = head;
	head = head->link;
	system("cls");
	printf("%d(��)�� �����Ǿ����ϴ�.\n", p->data);
	system("pause");
	free(p);
	return 0;
}

void append2() { 		// ���ؼ� ������������ �����ϴ� �Լ�

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
		printf("����� �����ϼ���.\n");
		printf("1. ����\n");
		printf("2. ����Ʈ\n");
		printf("3. ����\n");
		puts("0. ����");
		scanf_s("%d", &input);
		switch (input) {
		case 1: append2();	break;
		case 2: print();	break;
		case 3: del();	break;
		default: break;
		}
	}
}