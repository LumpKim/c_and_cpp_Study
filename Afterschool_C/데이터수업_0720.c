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
		puts("ȯ���մϴ�. ���� ����� �����Ͻʽÿ�.");
		puts("1. ����\n");
		puts("2. ���\n");
		puts("3. ����\n");
		puts("0. ����\n");

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

	printf("������ ī�� �ѵ��� �Է��ϼ���.(����: �� ��)");
	scanf_s("%d", &(NewValue->limit));
	printf("������ �� ��ȣ�� �Է��ϼ���.");
	scanf_s("%d", &(NewValue->number));
	printf("������ ���� �������� �Է��ϼ���.(���� ����)");
	fgets(NewValue->address, sizeof(NewValue->address), stdin);
	printf("������ ������ �Է��ϼ���.");
	fgets(NewValue->name, sizeof(NewValue->name), stdin);
	printf("������ ȸ�� ����� �Է��ϼ���.");
	fgets(NewValue->grade, sizeof(NewValue->grade), stdin);

}
