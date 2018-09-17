#include <stdio.h>

int main() {
	int month = 9, day, day_of_the_week=6, i;
	for (; month <= 11; month++) {
		printf("\t   %02d¿ù\n", month);
		printf("SUN MON TUE WED THU FRI SAT\n");
		for (i = 0; i < day_of_the_week; i++) {
			printf("    ");
		}
		for (day = 1; day <= 31; day++) {
			if ((month == 9 || month == 11) && day == 31)
				break;
			if (day_of_the_week > 6) {
				day_of_the_week = 0;
				printf("\n");
			}
			day_of_the_week++;
			printf(" %02d ", day);
		}
		printf("\n");
	}
}
