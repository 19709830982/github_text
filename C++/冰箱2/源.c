#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int h, m; // 输入小时和分钟
    double t, T; // 时间和温度变量

    // 提示用户输入冰箱断电后经过的时间

    scanf("%d %d", &h, &m);

    // 将分钟转换为小时并计算总时间
    t = h + (double)m / 60;

    // 根据公式计算温度
    T = 4 * t * t/(t+2) - 20;

    // 输出计算结果
    printf("%.2f\n", T);

    return 0;
}