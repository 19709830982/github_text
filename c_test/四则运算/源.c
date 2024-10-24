#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;
    char op;
    int result;

    // ���봦��
    scanf("%d%c%d", &a, &op, &b);

    // ������жϺ�����
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
            return 1; // ���ش�����
        }
        break;
    case '%':
        if (b != 0) {
            result = a % b;
        }
        else {
            printf("Error: Division by zero.n");
            return 1; // ���ش�����
        }
        break;
    default:
        printf("Error: Invalid operator.n");
        return 1; // ���ش�����
    }

    // ������
    printf("%d%c%d=%d\n", a, op, b, result);

    return 0;
}