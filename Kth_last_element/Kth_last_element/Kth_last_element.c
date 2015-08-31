#include<stdio.h>
#include<conio.h>
char kth_ele(char s[], int k);
char main()
{
	char s[30],i;
	int k;
	printf("enter a sting\n");
	scanf("%s", s);
	printf("enter the value for k\n");
	scanf("%d", &k);
	i=kth_ele(s, k);
	if (i == ' ')
		printf("out of bund");
	else
		printf("%c ", i);
}
char kth_ele(char s[], int k)
{
	int i, j = 0;
	i = k;
		while (s[i] != '\0')
		{
			i = i + 1;
			j = j + 1;
			if (s[j] == '\0')
				return ' ';
		}
		return s[j];
}