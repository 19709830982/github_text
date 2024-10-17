#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 计算体积的函数
float calculateVolume(float length) {
    return length * length * length;
}

// 计算质量的函数
float calculateMass(float volume, float density) {
    return volume * density;
}

int main() {
    float length;
    float volume;
    float goldMass, silverMass, copperMass;

    // 输入边长

    scanf("%f", &length);

    // 计算体积
    volume = calculateVolume(length);

    // 计算金、银、铜的质量
    goldMass = calculateMass(volume, 19.32); // 金的密度：19.32 g/cm^3
    silverMass = calculateMass(volume, 10.53); // 银的密度：10.49 g/cm^3
    copperMass = calculateMass(volume, 8.9); // 铜的密度：8.94 g/cm^3

    // 输出结果
    printf("%.2f\n", goldMass);
    printf("%.2f\n", silverMass);
    printf("%.2f\n", copperMass);

    return 0;
}