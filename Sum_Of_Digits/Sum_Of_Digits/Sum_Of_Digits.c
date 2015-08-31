#include<stdio.h>
#include<conio.h>
int sumofn(int n);
int main()
{
	int n, i;
	printf("enter a number\n");
	scanf("%d", &n);
	i = sumofn(n);
	printf("the sum of digits in given number is %d\n", i);
}
int sumofn(int n)
{
	int sum = 0;
		while (n > 0)
		{
			sum = sum + (n % 10);
			n = n / 10;
		}
	return sum;
}