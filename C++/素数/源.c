#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // ����math.h��ʹ��sqrt����

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) { // ʹ��sqrt��������ѭ������
        if (n % i == 0)
        {
            return 0;
            break;
        }
        else
        {
            return 1;
        }
    }

}

int main() {
    int n;

    scanf("%d", &n);
    if (isPrime(n)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}