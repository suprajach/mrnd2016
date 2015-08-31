#include<stdio.h>
#include<conio.h>
int insertsrt(char a1[], char a2[]);
int length(char a1[]);
int palimdrome(char a1[]);
void main()
{
	char a1[30], a2[30];
	printf("enter the first string(braces)\n");
	gets(a1);
	printf("enter second string\n");
	gets(a2);
	insertstr(a1, a2);
}
int insertstr(char a1[], char a2[])
{
	int l1,l2, f,i,j,k;
	l1 = length(a1);
	l2 = length(a2);
	f = palindrome(a1);
	if (l1 % 2 == 0 && f == 1)
	{
		i = l1 / 2;
		j = l2;
		for (i; i < l1; i++, j++)
			a2[j] = a1[i];
		a2[j] = '\0';
		j = 0;
		for (i = l1 / 2; a2[j] != '\0'; i++, j++)
			a1[i] = a2[j];
		a1[i] = '\0';
		printf("%s \n", a1);
	}
	else
		printf("error");
}
int length(char a1[])
{
	int i,l=0;
	for (i = 0; a1[i] != '\0'; i++)
		l = l + 1;
	return l;
}
int palindrome(char a1[])
{
	int i, f,l;
	l = length(a1);
	for (i = 0; i <= (l / 2); i++)
	{
		if ((a1[i] == a1[l - 1]-2)||(a1[i]==a1[l-1]-1))
			f = 1;
		else
		{
			f = 0;
			break;
		}
		l = l - 1;
	}
	return f;
}