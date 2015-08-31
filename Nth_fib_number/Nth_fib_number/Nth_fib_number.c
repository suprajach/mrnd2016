#include<stdio.h>
#include<conio.h>
int fib(int n);
int main()
{
	int n, i;
	printf("enter a number");
	scanf("%d", &n);
	i = fib(n);
	printf("the %dth fiboncii number is %d\n",n, i);
}
fib(int n)
{
	int i=1,f3=0,f1=0,f2=1;
	while (i<n)
	{
		f1 = f2;
		f2 = f3;
		f3 = f1 + f2;
		i = i + 1;
	}
	return f3;
}