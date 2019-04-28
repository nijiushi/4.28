#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void swap(int a[], int b[])
{
	int i = 0;
	for (i; i < 4; i++)
	{
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
		printf("a%d=%d  ", i, a[i]);
		printf("b%d=%d  ", i, b[i]);
	}
}
int main()
{
	int i = 0;
	int a[4] = { 1, 2, 3, 4 };
	int b[4] = { 5, 6, 7, 8 };
	swap(a, b);
	system("pause");
	return 0;
}