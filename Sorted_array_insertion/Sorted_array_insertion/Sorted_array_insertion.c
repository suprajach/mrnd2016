#include<stdio.h>
#include<conio.h>
void insert(int a[], int n, int x);
void main()
{
	int a[30], n, i, x;
	printf("enter the size of array\n");
	scanf("%d", &n);
	printf("enter a sorted array\n");
	for (i = 0; i<n; i++)
		scanf("%d", &a[i]);
	printf("enter a number u want to insert\n");
	scanf("%d", &x);
	insert(a, n, x);
}
void insert(int a[], int n, int x)
{
	int i, t;
	for (i = 0; i<n; i++)
	if (a[i]>x)
		break;
	t = i;
	if (i == n)
		a[n] = x;
	else
	{
		for (i = n - 1; i >= t; i--)
			a[i + 1] = a[i];
		a[t] = x;
	}
	printf("the new array is\n");
	for (i = 0; i <= n; i++)
		printf("%d  ", a[i]);
}
