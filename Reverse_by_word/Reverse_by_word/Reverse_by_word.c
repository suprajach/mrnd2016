#include<stdio.h>
#include<conio.h>
int length(char a[]);
void rev(char a[], int l);
int main()
{
	int l;
	char a[30];
	printf("enter a sentence\n");
	gets(a);
	l = length(a);
	rev(a, l);
}
int length(char a[])
{
	int i;
	for (i = 0; a[i] != '\0'; i++);
	return i;
}
void rev(char a[], int l)
{
	int i, x = 0, k;
	k = frstspace(a);
	for (i = l - 1; a[i] != ' '; i--)
		x = x + 1;
	for (i = i + 1; i < l; i++)
	{
		printf("%c", a[i]);
	}
	printf(" ");
	l = l - x - 1;
    if (l == k)
	for (i = 0; i < k; i++)
		printf("%c", a[i]);
	else
		rev(a, l);
	printf("\n");
}
int frstspace(char a[])
{
	int i;
	for (i = 0; a[i]!=' '; i++);
	return i;
}