#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main(void)
{
    char input[100];
    int count = 0;

    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    for (int i = 0; i<strlen(input); i++)
    {
        if (input[i] == 'a' || input[i] == 'A')
        {
            count++;
        }
    }
    printf("%d\n",count);
}