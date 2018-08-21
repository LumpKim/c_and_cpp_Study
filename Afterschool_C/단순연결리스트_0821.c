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

void insert_module(int num) {	// 1번은 맨 처음 삽입, 2번은 맨 마지막에 삽입, 3번은 중간에 삽입
	Node* newnode = (Node*)malloc(sizeof(Node));
	int age, studentNum, rank;
	char student_name[10], homeroom_teacher_name[10];
	float avr, before_average;
	printf("다음과 같은 순서대로 입력해주세요.\n");
	printf("나이 | 학번 | 학생 이름 | 담임 이름 | 평균 점수 | 저번 평균 | 등수\n");
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
	printf("학생 성적 관리용 프로그램을 실행하신 것을 환영합니다.\n");
	printf("먼저 사용하실 기능에 맞는 번호를 입력하십시오.\n");
	printf("1. 삽입하기\n2. 삭제하기\n3. 출력하기\n4. 정렬하기\n5. 역정렬하기\n6. 종료하기\n");
	scanf("%d", &select_number);
	switch (select_number) {
		case 1:
			printf("다음 중 사용하실 기능을 선택해 주십시오.\n");
			pritnf("1. 맨 처음에 삽입하기\n2. 맨 마지막에 삽입하기\n3. 중간에 삽입하기\n4. 종료하기\n");
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
			printf("다음 중 사용하실 기능을 선택해 주십시오.\n");
			printf("1. 맨 처음 값 삭제하기\n2. 맨 마지막 값 삭제하기\n3. 원하는 값 삭제하기\n");
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
			printf("저장된 값을 출력 중입니다.\n");
			break;
		case 4:
			printf("저장된 값을 정렬 중입니다.\n");
			break;
		case 5:
			printf("저장된 값을 반대로 정렬(역정렬) 중입니다.\n");
			break;
		default:
			printf("프로그램을 종료합니다.\n");
			return 0;
			break;
	}
}

int main() {
	print_GUI();
}