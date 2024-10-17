#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int seconds, days, hours, minutes, remaining_seconds;

    // 读取用户输入的秒数

    scanf("%d", &seconds);

    // 计算天数
    days = seconds / (24 * 60 * 60);
    remaining_seconds = seconds % (24 * 60 * 60);

    // 计算小时数
    hours = remaining_seconds / (60 * 60);
    remaining_seconds = remaining_seconds % (60 * 60);

    // 计算分钟数
    minutes = remaining_seconds / 60;
    remaining_seconds = remaining_seconds % 60;

    // 输出结果
    printf("%d %d %d %d\n", days, hours, minutes, remaining_seconds);

    return 0;
}