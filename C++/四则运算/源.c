#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��������
void calculate(int num1, int num2);

int main() {
    int num1, num2;

    // ��ʾ�û������һ������
 
    scanf("%d", &num1);

    // ��ʾ�û�����ڶ�������

    scanf("%d", &num2);

    // ���ü��㺯��
    calculate(num1, num2);

    return 0;
}

// ���㺯��
void calculate(int num1, int num2) {
    int sum, diff, product, quotient, remainder;

    // �����
    sum = num1 + num2;
    printf("%d ", sum);

    // �����
    diff = num1 - num2;
    printf("%d ", diff);

    // �����
    product = num1 * num2;
    printf("%d ", product);

    // �����̺�����
    quotient = num1 / num2;
    remainder = num1 % num2;
    printf("%d ", quotient);
    printf("%d\n", remainder);
}