#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, sum = 0;

    // ��������Ϊһ��������n
    scanf("%d", &n);

    // ����n�ĸ�λ����֮��
    while (n > 0) {
        sum += n % 10; // ȡ��λ���ӵ�sum��
        n /= 10;       // ȥ����λ��
    }

    // ������n������ĸ�λ����֮�ͺ���
    printf("%d\n", sum);

    return 0;
}
