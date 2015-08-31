#include<stdio.h>
#include<conio.h>
void divby11(int n);
void main()
{
	int n;
	printf("enter a number");
	scanf("%d", &n);
	divby11(n);
}
void divby11(int n)
{
	int x, f = 0, e = 0, o = 0, t;
	while (n > 0)
	{
		x = n % 10;
		if (f == 0)
		{
			e = e + x;
			f = 1;
		}
		else
		{
			o = o + x;
			f = 0;
		}
		n = n / 10;
	}
	t = e - o;
	if (t == 0)
		printf("yes\n");
	else if (t > 10)
		divby11(t);
	else
		printf("no\n");
}