#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // 引入math.h以使用sqrt函数

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) { // 使用sqrt函数减少循环次数
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