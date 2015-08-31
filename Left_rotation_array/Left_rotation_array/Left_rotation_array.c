#include<stdio.h>
#include<conio.h>
void rotate(int a[], int size, int n);
void main()
{
	int a[30], size, i, n;
	printf("enter the size of array\n");
	scanf("%d", &size);
	printf("enter the elements of array\n");
	for (i = 0; i<size; i++)
		scanf("%d", &a[i]);
	printf("enter the no. of rotations\n");
	scanf("%d", &n);
	rotate(a, size, n);
}
void rotate(int a[], int size, int n)
{
	int i;
	while (n>0)
	{
		for (i = size; i>0; i--)
			a[i] = a[i - 1];
		a[0] = a[size];
		n--;
	}
	printf("the new array is\n");
	for (i = 0; i<size; i++)
		printf("%d ", a[i]);
}