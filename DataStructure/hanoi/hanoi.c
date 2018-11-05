#include <stdio.h>

#define SS		5									// ���� �����Ͽ� ž�� ���̸� ���մϴ�.

int		SA[SS] = {}, SB[SS] = {}, SC[SS] = {};		// �迭 �̸��� ���� �����ͷ� ����
int *SPA = SA, *SPB = SB, *SPC = SC;				// ������ Pole���� �ڷ� ������
int Pop(char Pole) {
	int Disk;
	if (Pole == 'A')	Disk = *SPA--;
	else if (Pole == 'B')	Disk = *SPB--;
	else
	{
		Disk = *SPC--;
	}
	return Disk;
}

void Push(char Pole, int Disk) {
	if (Pole == 'A')
		*++SPA == Disk;
	else if (Pole == 'B')
		*++SPB = Disk;
	else
		*++SPC = Disk;
}

void pout() {
	int *a;
	printf("Stack A: ");
	for (a = SA; a <= SPA; a++)
		printf("%3d", *a);
	printf("\n");

	printf("Stack B: ");
	for (a = SB; a <= SPB; a++)
		printf("%3d", *a);
	printf("\n");

	printf("Stack C: ");
	for (a = SC; a <= SPC; a++)
		printf("%3d", *a);
	printf("\n===========================\n\n");
}

void Move(int N, char st, char des, char mid) {
	int Disk;
	if (N == 1) {
		Disk = Pop(st);
		Push(des, Disk);
		printf("��ũ %d: From %c To %c\n\n", Disk, st, des);
		pout();
		return;
	}
	else {
		Move(N - 1, st, mid, des);
		Disk = Pop(st);
		Push(des, Disk);

		printf("��ũ %d: From %c To 5c\n\n", Disk, st, des);
		pout();
		Move(N - 1, mid, des, st);
	}
}

int main() {
	int a;
	SPA--; SPB--; SPC--;
	for (a = 0; a < SS; a++) {
		Push('A', SS - a);
	}
	put();
	Move(SS, 'A', 'C', 'B');
}