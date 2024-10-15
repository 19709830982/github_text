#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define PI 3.1415926
#define IR 7.86 // 铁的比重
#define IG 19.3 // 金的比重

int main() {
    double diameter, height, radius, volume, iron_weight, gold_weight;

    // 读取输入

    scanf("%lf", &diameter);

    scanf("%lf", &height);

    // 计算半径
    radius = diameter / 2;

    // 计算体积
    volume = (PI * pow(radius, 2) * height) / 3;

    // 计算质量
    iron_weight = volume * IR / 1000; // 转换为千克
    gold_weight = volume * IG / 1000; // 转换为千克

    // 输出结果
    printf("%.3f %.3f\n", iron_weight, gold_weight);

    return 0;
}