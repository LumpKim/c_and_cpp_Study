#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int select_number;
int select_number_insert;
int select_number_delete;

typedef struct node {
	int age;
	int student_number;
	char student_name[10];
	char homeroom_teacher_name[10];
	float average;
	float before_average;
	int rank;
	struct node* Llink;
	struct node* Rlink;
}Node;

struct node* head;
struct node* tail;

void insert_module(int num) {	// 1���� �� ó�� ����, 2���� �� �������� ����, 3���� �߰��� ����
	Node* newnode = (Node*)malloc(sizeof(Node));
	int age, studentNum, rank;
	char student_name[10], homeroom_teacher_name[10];
	float avr, before_average;
	printf("������ ���� ������� �Է����ּ���.\n");
	printf("���� | �й� | �л� �̸� | ���� �̸� | ��� ���� | ���� ��� | ���\n");
	scanf("%d %d %s %s %f %f %d", &age, &studentNum, &student_name, &homeroom_teacher_name, &avr, &before_average);
	newnode->age = age;
	newnode->student_number = studentNum;
	strcpy(newnode->student_name, student_name);
	strcpy(newnode->homeroom_teacher_name, homeroom_teacher_name);
	newnode->average = avr;
	newnode->before_average = before_average;
	newnode->rank = rank;
	if (num == 1){
		newnode->Llink = NULL;
		newnode->Rlink = head;
		head = newnode;
		system("pause")
	}
}


void print_GUI() {
	printf("�л� ���� ������ ���α׷��� �����Ͻ� ���� ȯ���մϴ�.\n");
	printf("���� ����Ͻ� ��ɿ� �´� ��ȣ�� �Է��Ͻʽÿ�.\n");
	printf("1. �����ϱ�\n2. �����ϱ�\n3. ����ϱ�\n4. �����ϱ�\n5. �������ϱ�\n6. �����ϱ�\n");
	scanf("%d", &select_number);
	switch (select_number) {
		case 1:
			printf("���� �� ����Ͻ� ����� ������ �ֽʽÿ�.\n");
			pritnf("1. �� ó���� �����ϱ�\n2. �� �������� �����ϱ�\n3. �߰��� �����ϱ�\n4. �����ϱ�\n");
			scanf("%d", &select_number_insert);
			switch (select_number_insert) {
				case 1:
					insert_module();
					break;
				case 2:
					insert_module();
					break;
				case 3:
					insert_module();
					break;
				default:
					return 0;
					break;
			}
			break;
		case 2:
			printf("���� �� ����Ͻ� ����� ������ �ֽʽÿ�.\n");
			printf("1. �� ó�� �� �����ϱ�\n2. �� ������ �� �����ϱ�\n3. ���ϴ� �� �����ϱ�\n");
			switch (select_number_delete) {
				case 1:
					delete_head();
				case 2:
					delete_tail();
				case 3:
					delete_middle();
			}
			break;
		case 3:
			printf("����� ���� ��� ���Դϴ�.\n");
			break;
		case 4:
			printf("����� ���� ���� ���Դϴ�.\n");
			break;
		case 5:
			printf("����� ���� �ݴ�� ����(������) ���Դϴ�.\n");
			break;
		default:
			printf("���α׷��� �����մϴ�.\n");
			return 0;
			break;
	}
}

int main() {
	print_GUI();
}