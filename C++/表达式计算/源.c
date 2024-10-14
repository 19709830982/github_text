#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char c, original;
	scanf("%c",&c);
	original = c;
	if (c >= 'a' && c <= 'z')
	{
		c = (c - 'a' + 3) % 26 + 'a';
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c = (c - 'A' - 2 + 26) % 26 + 'A';
	}
	else if (c >= '0' && c <= '9')
	{
		c = '9' - (c - '0');
	}
	else if (c == ' ')
	{
		c = '*';
	}
	else
	{
		c = '#';
	}
	printf("%c %c",original,c);
	return 0;
}