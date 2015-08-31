#include<stdio.h>
#include<conio.h>
int frst2max(int a[], int size, int *max1, int *max2);
int main()
{
	int a[30], size, i, x, y, *max1, *max2;
	printf("enter the size of aray");
	scanf("%d", &size);
	printf("enter the elements of array\n");
	for (i = 0; i < size; i++)
		scanf("%d", &a[i]);
	max1 = a[0];
	max2 = a[1];
	x = frst2max(a, size, &max1, &max2);
	printf("%d    %d  ", max1, max2);
}
int frst2max(int a[], int size, int *max1, int *max2)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (a[i]>*max1 || a[i] > *max2)
		{
			if (a[i] >= *max1)
			{
				if (*max1 != a[i])
			    *max2 = *max1;
				*max1 = a[i];
			}
			else
				*max2 = a[i];
		}
	}
	return 0;
}