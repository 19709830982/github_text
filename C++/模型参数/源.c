#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // 包含数学库头文件以使用sqrt函数

int main() {
    int a, b;
    float CL, tD, SP;

    // 读取输入

    scanf("%d %d", &a, &b);

    // 计算模型参数
    CL = a + sqrt((float)b * a + 1); // 注意将b*a转换为double类型以避免整数除法
    tD = a * pow(CL + b,2); // 根据补全的公式计算t0
    SP = tD * CL + b * b;

    // 输出结果，保留两位小数
    printf("CL=%.2f tD=%.2f SP=%.2f\n", CL, tD, SP);

    return 0;
}