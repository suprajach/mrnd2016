#include<stdio.h>
#include<conio.h>
void palindrome(char str, int l);
void main()
{
	char str[30];
	int i, l = 0;
	printf("enter a string\n");
	gets(str);
	for (i = 0; str[i] != '\0'; i++)
		l = l + 1;
	palindrome(str, l);
}
void palindrome(char str[], int l)
{
	int i, f;
	for (i = 0; i <= (l / 2); i++)
	{
		if (str[i] == str[l - 1])
			f = 1;
		else
		{
			f = 0;
			break;
		}
		l = l - 1;
	}
	if (f == 1)
		printf("the given string is a palindrome\n");
	if (f == 0)
		printf("the given string is not a palindrome\n");
}