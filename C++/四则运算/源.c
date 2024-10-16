#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 函数声明
void calculate(int num1, int num2);

int main() {
    int num1, num2;

    // 提示用户输入第一个整数
 
    scanf("%d", &num1);

    // 提示用户输入第二个整数

    scanf("%d", &num2);

    // 调用计算函数
    calculate(num1, num2);

    return 0;
}

// 计算函数
void calculate(int num1, int num2) {
    int sum, diff, product, quotient, remainder;

    // 计算和
    sum = num1 + num2;
    printf("%d ", sum);

    // 计算差
    diff = num1 - num2;
    printf("%d ", diff);

    // 计算积
    product = num1 * num2;
    printf("%d ", product);

    // 计算商和余数
    quotient = num1 / num2;
    remainder = num1 % num2;
    printf("%d ", quotient);
    printf("%d\n", remainder);
}