#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;
    char op;
    int result;

    // 输入处理
    scanf("%d%c%d", &a, &op, &b);

    // 运算符判断和运算
    switch (op) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b != 0) {
            result = a / b;
        }
        else {
            printf("Error: Division by zero.n");
            return 1; // 返回错误码
        }
        break;
    case '%':
        if (b != 0) {
            result = a % b;
        }
        else {
            printf("Error: Division by zero.n");
            return 1; // 返回错误码
        }
        break;
    default:
        printf("Error: Invalid operator.n");
        return 1; // 返回错误码
    }

    // 输出结果
    printf("%d%c%d=%d\n", a, op, b, result);

    return 0;
}