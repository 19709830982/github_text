#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 计算圆柱体体积
double cylinderVolume(double R1, double H1) {
    return 3.1415926 * R1 * R1 * H1/4;
}

// 计算圆锥体体积
double coneVolume(double R2, double H2) {
    return (1.0 / 3.0) * 3.1415926 * R2 * R2 * H2/4;
}

int main() {
    double R1, H1, R2, H2;
    double cylinderVol, coneVol, totalVol, oilWeight;

    // 输入圆柱体和圆锥体的尺寸
    scanf("%lf %lf %lf %lf", &R1, &H1, &R2, &H2);

    // 计算体积
    cylinderVol = cylinderVolume(R1, H1);
    coneVol = coneVolume(R2, H2);
    totalVol = cylinderVol - coneVol; // 注意是圆柱体体积减去圆锥体体积

    // 计算排开汽油的重量
    oilWeight = totalVol * 0.785; // 汽油的比重为0.785g/cm?

    // 输出结果，保留1位小数
    printf("%.1lf %.1lf\n", totalVol, oilWeight);

    return 0;
}