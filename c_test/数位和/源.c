#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, sum = 0;

    // 输入数据为一个正整数n
    scanf("%d", &n);

    // 计算n的各位数字之和
    while (n > 0) {
        sum += n % 10; // 取个位数加到sum上
        n /= 10;       // 去掉个位数
    }

    // 对整数n输出它的各位数字之和后换行
    printf("%d\n", sum);

    return 0;
}
