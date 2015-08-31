#include<stdio.h>
#include<conio.h>
void tuples(int a[], int size, int n);
void main()
{
	int a[10], n, size, i;
	printf("enter the size of array");
	scanf("%d", &size);
	printf("enter the elements of array\n");
	for (i = 0; i < size; i++)
		scanf("%d", &a[i]);
	printf("enter the sum \n");
	scanf("%d", &n);
	tuples(a, size, n);
}
void tuples(int a[], int size, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	for (j = i + 1; j < n; j++)
	{
		if (a[i] + a[j] == n)
			printf("%d  %d\n", a[i], a[j]);
	}
}