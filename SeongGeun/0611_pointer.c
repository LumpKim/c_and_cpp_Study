#include <stdio.h>

void Input(int * arr, int num)
{
	int i;
	for (i = 0; i < num; i++)
		arr[i] = i + 1;
}

void Output(int * arr, int num)
{
	int i;
	for (i = 0; i < num; i++)
		printf("%5d", arr[i]);
}

void main()
{
	int arr[10];
	void (*func)(int*, int);
	func=Input;
	func(arr, 10);
	func=Output;
	func(arr, 10);
}
