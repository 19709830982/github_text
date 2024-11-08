#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    // 循环读取输入直到遇到0为止
    while (scanf("%d", &num), num != 0) {
        if (num % 2 == 1) { // 如果是奇数则累加到sum上
            sum += num;
        }
    }

    printf("%d\n", sum); // 输出结果
    return 0;
}
