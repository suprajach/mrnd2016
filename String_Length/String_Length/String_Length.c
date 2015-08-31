#include<stdio.h>
#include<conio.h>
int length(char a[]);
int main()
{
	int i;
	char a[30];
	printf("enter a string\n");
	gets(a);
	i = length(a);
	printf("length of the string is %d\n", i);
}
int length(char a[])
{
	int i;
	for (i = 0; a[i] != '\0'; i++);
	return i;
}