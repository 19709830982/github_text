#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    // 确保输入的数是不同的

    // 找出最大值
    int max = (num1 > num2) ? num1 : num2;
    max = (max > num3) ? max : num3;

    printf("%d\n", max);
    return 0;
}